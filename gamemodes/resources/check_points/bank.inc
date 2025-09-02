#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    for (new i = 0; i < MAX_PLAYERS; i++) {
        for (new e = 0; e < 8; e++)
            bankInformation[i][bankTextDrawings][e] = PlayerText:INVALID_TEXT_DRAW;

        bankInformation[i][bankTimer] = INVALID_TIMER;
    }
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    RestoreBankInformation(playerid);
    return 1;
}

hook OnPlayerEnterDynamicCP(playerid, checkpoint) {
    for (new i = 0; i < numberOfCheckPointsCreated; i++) {
        if (checkpoint == checkPointsInformation[i][outsideCheckPoint] && checkPointsInformation[i][type] == 0) {
            SetPlayerPos(playerid, checkPointsInformation[i][insideXCoordinate], checkPointsInformation[i][insideYCoordinate], checkPointsInformation[i][insideZCoordinate]);
            SetPlayerFacingAngle(playerid, checkPointsInformation[i][insideAngle]);
            SetCameraBehindPlayer(playerid);

            SetPlayerInterior(playerid, checkPointsInformation[i][inside]);
            SetPlayerVirtualWorld(playerid, checkPointsInformation[i][virtualWorld]);
            return ~0;
        } else if (checkpoint == checkPointsInformation[i][insideCheckPoint] && checkPointsInformation[i][type] == 0) {
            SetPlayerPos(playerid, checkPointsInformation[i][outsideXCoordinate], checkPointsInformation[i][outsideYCoordinate], checkPointsInformation[i][outsideZCoordinate]);
            SetPlayerFacingAngle(playerid, checkPointsInformation[i][outsideAngle]);
            SetCameraBehindPlayer(playerid);

            SetPlayerInterior(playerid, 0);
            SetPlayerVirtualWorld(playerid, 0);
            return ~0;
        } else if (checkpoint == checkPointsInformation[i][interactionZoneCheckPoint] && checkPointsInformation[i][type] == 0) {
            CreateBankTextDrawings(playerid, accountInformation[playerid][cashInTheBank]);

            if (!bankInformation[playerid][inOperation])
                bankInformation[playerid][inOperation] = true;

            if (bankInformation[playerid][bankTimer] == INVALID_TIMER)
                bankInformation[playerid][bankTimer] = SetTimerEx("BankCheckPointOutput", 500, true, "i", playerid);
            return ~0;
        }
    }
    return 1;
}

hook OnPlayerKeyStateChange(playerid, KEY:newkeys, KEY:oldkeys) {
    if (newkeys & KEY_FIRE && bankInformation[playerid][inOperation])
        RestoreBankInformation(playerid);
    return 1;
}

hook OnPlayerText(playerid, text[]) {
    if (bankInformation[playerid][inOperation]) {
        if (bankInformation[playerid][depositingCash] || bankInformation[playerid][withdrawingCash])
            ApplyAnimation(playerid, "INT_SHOP", "shop_pay", 3.0, false, false, false, false, SYNC_NONE);

        new wholeNumber = strval(text);

        if (!bankInformation[playerid][depositingCash] && wholeNumber == 1) {
            bankInformation[playerid][depositingCash] = true;
            bankInformation[playerid][withdrawingCash] = false;

            for (new i = 3; i <= 5; i++)
                PlayerTextDrawHide(playerid, bankInformation[playerid][bankTextDrawings][i]);

            PlayerTextDrawSetString(playerid, bankInformation[playerid][bankTextDrawings][1], "~g~~h~Depositar_dinero");
            PlayerTextDrawSetString(playerid, bankInformation[playerid][bankTextDrawings][2], "Saldo_Cuenta_Bancaria_~g~$_%d", accountInformation[playerid][cashInTheBank]);
            return ~0;
        } else if (!bankInformation[playerid][withdrawingCash] && wholeNumber == 2) {
            bankInformation[playerid][withdrawingCash] = true;
            bankInformation[playerid][depositingCash] = false;

            for (new i = 3; i <= 5; i++)
                PlayerTextDrawHide(playerid, bankInformation[playerid][bankTextDrawings][i]);

            PlayerTextDrawSetString(playerid, bankInformation[playerid][bankTextDrawings][1], "~g~~h~Retirar_dinero");
            PlayerTextDrawSetString(playerid, bankInformation[playerid][bankTextDrawings][2], "Saldo_Cuenta_Bancaria_~g~$_%d", accountInformation[playerid][cashInTheBank]);
            return ~0;
        } else if (wholeNumber == 3) {
            if (accountInformation[playerid][lifeInsurance] == 5) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Ya tienes el maximo de seguros activos, por lo tanto no puedes comprar mas seguros.");
                return ~0;
            }

            if (accountInformation[playerid][cashInHand] < 40000) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"No tienes suficiente dinero en mano para comprar un seguro medico.");
                return ~0;
            }

            accountInformation[playerid][cashInHand] -= 40000;
            accountInformation[playerid][lifeInsurance]++;

            va_SendClientMessage(playerid, -1, ""COLOR_DARK_GREEN"Has Comprado Un Seguro De Vida, Gracias Por Tu Compra.");
            va_SendClientMessage(playerid, -1, ""COLOR_DARK_GREEN"Ahora Tienes %d Seguros De Vida.", accountInformation[playerid][lifeInsurance]);
            return ~0;
        } else {
            if (bankInformation[playerid][depositingCash] && !bankInformation[playerid][withdrawingCash]) {
                if (wholeNumber > accountInformation[playerid][cashInHand]) {
                    va_SendClientMessage(playerid, -1, ""COLOR_RED"No tienes suficiente dinero en efectivo para realizar esta operacion.");
                    return ~0;
                }

                accountInformation[playerid][cashInHand] -= wholeNumber;
                accountInformation[playerid][cashInTheBank] += wholeNumber;

                RestoreBankInformation(playerid);

                va_SendClientMessage(playerid, -1, ""COLOR_DARK_GREEN"Deposito $%d En Su Cuenta, Saldo Actual: $%d", wholeNumber, accountInformation[playerid][cashInTheBank]);
                return ~0;
            } else if (bankInformation[playerid][withdrawingCash] && !bankInformation[playerid][depositingCash]) {
                if (wholeNumber > accountInformation[playerid][cashInTheBank]) {
                    va_SendClientMessage(playerid, -1, ""COLOR_RED"No tienes suficiente dinero en el banco para realizar esta operacion.");
                    return ~0;
                }

                accountInformation[playerid][cashInHand] += wholeNumber;
                accountInformation[playerid][cashInTheBank] -= wholeNumber;

                RestoreBankInformation(playerid);

                va_SendClientMessage(playerid, -1, ""COLOR_DARK_GREEN"Sacaste $%d De Tu Cuenta, Saldo Actual: $%d", wholeNumber, accountInformation[playerid][cashInTheBank]);
                return ~0;
            }
        }
    }
    return 1;
}