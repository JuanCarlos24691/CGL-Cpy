#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    for (new i = 0; i < MAX_PLAYERS; i++)
        RestoreHospitalInformation(i, true);
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    RestoreHospitalInformation(playerid, true);
    return 1; 
}

hook OnPlayerKeyStateChange(playerid, KEY:newkeys, KEY:oldkeys) {
    if (newkeys & KEY_FIRE && hospitalInformation[playerid][hOInOperation])
        RestoreHospitalInformation(playerid, true);
    return 1;
}

hook OnPlayerText(playerid, text[]) {
    if (hospitalInformation[playerid][hOInOperation]) {
        if (isequal(text, "1", true) || isequal(text, "2", true) || isequal(text, "3", true) || isequal(text, "5", true) || isequal(text, "6", true) || isequal(text, "7", true) || isequal(text, "8", true))
            ApplyAnimation(playerid, "INT_SHOP", "shop_pay", 3.0, false, false, false, false, SYNC_NONE);

        if (isequal(text, "1", true)) {
            if (hospitalInformation[playerid][hOTWaitingTime] != INVALID_TIMER) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes Esperar Para Volver A Curarte.");
                return ~0;
            }

            CreateHOTWaitingTime(playerid);

            if (accountInformation[playerid][cashInHand] < 1000) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"No tienes suficiente dinero en mano para curarte.");
                return ~0;
            }

            SetPlayerHealth(playerid, 100.0);
            accountInformation[playerid][cashInHand] -= 1000;

            va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Te Has Curado, Ahora Tu Vida Esta Llena.");
            return ~0;
        } else if (isequal(text, "2", true)) {
            if (hospitalInformation[playerid][hOTWaitingTime] != INVALID_TIMER) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes Esperar Para Volver A Curarte.");
                return ~0;
            }

            CreateHOTWaitingTime(playerid);

            if (accountInformation[playerid][cashInHand] < 10000) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"No tienes suficiente dinero en mano para curar tus enfermedades.");
                return ~0;
            }

            if (!accountInformation[playerid][chlamydia] && !accountInformation[playerid][gonorrhea] && !accountInformation[playerid][syphilis]) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Actualmente no tienes enfermedades.");
                return ~0;
            }

            new string[124];

            if (accountInformation[playerid][chlamydia]) {
                accountInformation[playerid][chlamydia] = false;
                strcat(string, "'Clamidia' ");
            }

            if (accountInformation[playerid][gonorrhea]) {
                accountInformation[playerid][gonorrhea] = false;
                strcat(string, "'Gonorrea' ");
            }

            if (accountInformation[playerid][syphilis]) {
                accountInformation[playerid][syphilis] = false;
                strcat(string, "'Sífilis'");
            }

            RestoreViolationInformation(playerid);
            accountInformation[playerid][cashInHand] -= 10000;

            va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Se ha curado de todas sus enfermedades de transmisión sexual. Infecciones curadas: %s", string);
            va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Se ha Curado Todas Sus Enfermedades Respiratorias, Infecciones Curadas:");
            va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Te Has Curado De Todas Las Infermedades, Ahora ya No Estas Infectado.");
            return ~0;
        } else if (isequal(text, "3", true)) {
            if (accountInformation[playerid][cashInHand] < 40000) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"No tienes suficiente dinero en mano para comprar una aspirina.");
                return ~0;
            }

            if (accountInformation[playerid][aspirin] == 5) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Solo Puedes Comprar Cinco Aspirinas.");
                return ~0;
            }

            accountInformation[playerid][aspirin]++;
            accountInformation[playerid][cashInHand] -= 40000;

            va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Has Comprado Una Aspirina. Gracias Por La Compra.");
            return ~0;
        } else if (isequal(text, "4", true)) {
            if (accountInformation[playerid][cashInHand] < 25000) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"No tienes suficiente dinero en mano para cambiar tu skin.");
                return ~0;
            }

            RestoreHOInOperation(playerid);
            RestoreHOTExitFromTheVheckPoint(playerid);
            RestoreHOTWaitingTime(playerid);
            RestoreHOTextDrawings(playerid);

            if (!hospitalInformation[playerid][hOInSkinSelection])
                hospitalInformation[playerid][hOInSkinSelection] = true;

            accountInformation[playerid][cashInHand] -= 25000;

            ForceClassSelection(playerid);
            SetPlayerHealth(playerid, 0.0);
            return ~0;
        } else if (isequal(text, "5", true)) {
            if (accountInformation[playerid][cashInHand] < 50000) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"No tienes suficiente dinero en mano para contaguarde de clamidia.");
                return ~0;
            }

            if (accountInformation[playerid][chlamydia]) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Ya estas infectado de clamidia.");
                return ~0;
            }

            accountInformation[playerid][chlamydia] = true;

            if (violationInformation[playerid][lifeDecrementTimer] == INVALID_TIMER)
                violationInformation[playerid][lifeDecrementTimer] = SetTimerEx("ProgressivelyDecrementTheLife", 1000, true, "i", playerid);

            if (!violationInformation[playerid][inOperation])
                violationInformation[playerid][inOperation] = true;

            accountInformation[playerid][cashInHand] -= 50000;

            va_SendClientMessageToAll(-1, ""COLOR_AQUAMARINE"%s (%d) Esta Infectado de Clamidia.", accountInformation[playerid][name], playerid);
            return ~0;
        } else if (isequal(text, "6", true)) {
            if (accountInformation[playerid][cashInHand] < 550000) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"No tienes suficiente dinero en mano para contaguarde de gonorrea.");
                return ~0;
            }

            if (accountInformation[playerid][gonorrhea]) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Ya estas infectado de gonorrea.");
                return ~0;
            }

            accountInformation[playerid][gonorrhea] = true;

            if (violationInformation[playerid][lifeDecrementTimer] == INVALID_TIMER)
                violationInformation[playerid][lifeDecrementTimer] = SetTimerEx("ProgressivelyDecrementTheLife", 1000, true, "i", playerid);

            if (!violationInformation[playerid][inOperation])
                violationInformation[playerid][inOperation] = true;

            accountInformation[playerid][cashInHand] -= 550000;

            va_SendClientMessageToAll(-1, ""COLOR_AQUAMARINE"%s (%d) Esta Infectado de Gonorrea.", accountInformation[playerid][name], playerid);
            return ~0;
        } else if (isequal(text, "7", true)) {
            if (accountInformation[playerid][cashInHand] < 550000) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"No tienes suficiente dinero en mano para contaguarde de sifilis.");
                return ~0;
            }

            if (accountInformation[playerid][syphilis]) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Ya estas infectado de sifilis.");
                return ~0;
            }

            accountInformation[playerid][syphilis] = true;

            if (violationInformation[playerid][lifeDecrementTimer] == INVALID_TIMER)
                violationInformation[playerid][lifeDecrementTimer] = SetTimerEx("ProgressivelyDecrementTheLife", 1000, true, "i", playerid);

            if (!violationInformation[playerid][inOperation])
                violationInformation[playerid][inOperation] = true;

            accountInformation[playerid][cashInHand] -= 550000;

            va_SendClientMessageToAll(-1, ""COLOR_AQUAMARINE"%s (%d) Esta Infectado de Sifilis.", accountInformation[playerid][name], playerid);
            return ~0;
        } else if (isequal(text, "8", true)) {
            if (accountInformation[playerid][cashInHand] < 1500) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"No tienes suficiente dinero en mano para comprar un condon.");
                return ~0;
            }

            if (accountInformation[playerid][condoms] == 10) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Solo Puedes Traer 10 Condones Contigo.");
                return ~0;
            }

            accountInformation[playerid][condoms]++;
            accountInformation[playerid][cashInHand] -= 1500;

            va_SendClientMessage(playerid, -1, ""COLOR_DARK_GREEN"Has Comprado 1 Condon, Gracias Por tu Compra.");
            return ~0;
        }
    }
    return 1;
}

hook OnPlayerEnterDynamicCP(playerid, checkpoint) {
    for (new i = 0; i < numberOfCheckPointsCreated; i++) {
        if (checkpoint == checkPointsInformation[i][interactionZoneCheckPoint] && checkPointsInformation[i][type] == 4) {
            CreateHOTextDrawings(playerid);
            CreateHOInOperation(playerid);
            CreateHOInteZoneXCoordinate(playerid, checkPointsInformation[i][interactionZoneXCoordinate]);
            CreateHOInteZoneYCoordinate(playerid, checkPointsInformation[i][interactionZoneYCoordinate]);
            CreateHOInteZoneZCoordinate(playerid, checkPointsInformation[i][interactionZoneZCoordinate]);
            CreateHOInteZoneAngleCoordinate(playerid, checkPointsInformation[i][interactionZoneAngle]);
            CreateHOTExitFromTheVheckPoint(playerid);
            return -1;
        }
    }
    return 1;
}