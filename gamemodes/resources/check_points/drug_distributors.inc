#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    for (new i = 0; i < MAX_PLAYERS; i++) {
        for (new e = 0; e < 8; e++)
            drugDistributorsInformation[i][drugDistributorsTextDrawings][e] = PlayerText:INVALID_TEXT_DRAW;

        drugDistributorsInformation[i][drugDistributorsTimer] = INVALID_TIMER;
    }
    return 1;
}

hook OnPlayerKeyStateChange(playerid, KEY:newkeys, KEY:oldkeys) {
    if (newkeys & KEY_FIRE && drugDistributorsInformation[playerid][inOperation])
        RestoreDrugDistributorsInfo(playerid);
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    RestoreDrugDistributorsInfo(playerid);
    return 1;
}

hook OnPlayerText(playerid, text[]) {
    if (drugDistributorsInformation[playerid][inOperation]) {
        if (isequal(text, "1", true) || isequal(text, "2", true) || isequal(text, "3", true) || isequal(text, "4", true)  || isequal(text, "5", true) || isequal(text, "6", true) || isequal(text, "7", true))
            ApplyAnimation(playerid, "INT_SHOP", "shop_pay", 3.0, false, false, false, false, SYNC_NONE);

        if (isequal(text, "1", true)) {
            if (accountInformation[playerid][cashInHand] < 1000) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas por lo menos $1000 para poder comprar una 1g de droga.");
                return ~0;
            }

            if (accountInformation[playerid][drugs] + 1 > 1500) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"No Puedes Traer Mas De 1500 gramoss De Droga Contigo.");
                return ~0;
            }

            accountInformation[playerid][cashInHand] -= 1000;
            accountInformation[playerid][drugs] += 1;

            va_SendClientMessage(playerid, -1, ""COLOR_DARK_GREEN"Compraste 1 gramoss De Droga. Usalas con /tomardroga (cantidad) o /td (cantidad)");
            return ~0;
        } else if (isequal(text, "2", true)) {
            if (accountInformation[playerid][cashInHand] < 7000) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas por lo menos $7000 para poder comprar una 10g de droga.");
                return ~0;
            }

            if (accountInformation[playerid][drugs] + 10 > 1500) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"No Puedes Traer Mas De 1500 gramoss De Droga Contigo.");
                return ~0;
            }

            accountInformation[playerid][cashInHand] -= 7000;
            accountInformation[playerid][drugs] += 10;

            va_SendClientMessage(playerid, -1, ""COLOR_DARK_GREEN"Compraste 10 gramoss De Droga. Usalas con /tomardroga (cantidad) o /td (cantidad)");
            return ~0;
        } else if (isequal(text, "3", true)) {
            if (accountInformation[playerid][cashInHand] < 10000) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas por lo menos $10000 para poder comprar una 20g de droga.");
                return ~0;
            }

            if (accountInformation[playerid][drugs] + 20 > 1500) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"No Puedes Traer Mas De 1500 gramoss De Droga Contigo.");
                return ~0;
            }

            accountInformation[playerid][cashInHand] -= 10000;
            accountInformation[playerid][drugs] += 20;

            va_SendClientMessage(playerid, -1, ""COLOR_DARK_GREEN"Compraste 20 gramoss De Droga. Usalas con /tomardroga (cantidad) o /td (cantidad)");
            return ~0;
        } else if (isequal(text, "4", true)) {
            if (accountInformation[playerid][cashInHand] < 15000) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas por lo menos $15000 para poder comprar una 50g de droga.");
                return ~0;
            }

            if (accountInformation[playerid][drugs] + 50 > 1500) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"No Puedes Traer Mas De 1500 gramoss De Droga Contigo.");
                return ~0;
            }

            accountInformation[playerid][cashInHand] -= 15000;
            accountInformation[playerid][drugs] += 50;

            va_SendClientMessage(playerid, -1, ""COLOR_DARK_GREEN"Compraste 50 gramoss De Droga. Usalas con /tomardroga (cantidad) o /td (cantidad)");
            return ~0;
        } else if (isequal(text, "5", true)) {
            if (accountInformation[playerid][cashInHand] < 25000) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas por lo menos $25000 para poder comprar una 100g de droga.");
                return ~0;
            }

            if (accountInformation[playerid][drugs] + 100 > 1500) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"No Puedes Traer Mas De 1500 gramoss De Droga Contigo.");
                return ~0;
            }

            accountInformation[playerid][cashInHand] -= 25000;
            accountInformation[playerid][drugs] += 100;

            va_SendClientMessage(playerid, -1, ""COLOR_DARK_GREEN"Compraste 100 gramoss De Droga. Usalas con /tomardroga (cantidad) o /td (cantidad)");
            return ~0;
        } else if (isequal(text, "6", true)) {
            if (accountInformation[playerid][cashInHand] < 35000) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas por lo menos $35000 para poder comprar una 250g de droga.");
                return ~0;
            }

            if (accountInformation[playerid][drugs] + 250 > 1500) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"No Puedes Traer Mas De 1500 gramoss De Droga Contigo.");
                return ~0;
            }

            accountInformation[playerid][cashInHand] -= 35000;
            accountInformation[playerid][drugs] += 250;

            va_SendClientMessage(playerid, -1, ""COLOR_DARK_GREEN"Compraste 250 gramoss De Droga. Usalas con /tomardroga (cantidad) o /td (cantidad)");
            return ~0;
        } else if (isequal(text, "7", true)) {
            if (accountInformation[playerid][cashInHand] < 45000) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas por lo menos $45000 para poder comprar una 500g de droga.");
                return ~0;
            }

            if (accountInformation[playerid][drugs] + 500 > 1500) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"No Puedes Traer Mas De 1500 gramoss De Droga Contigo.");
                return ~0;
            }

            accountInformation[playerid][cashInHand] -= 45000;
            accountInformation[playerid][drugs] += 500;

            va_SendClientMessage(playerid, -1, ""COLOR_DARK_GREEN"Compraste 500 gramoss De Droga. Usalas con /tomardroga (cantidad) o /td (cantidad)");
            return ~0;
        }
    }
    return 1;
}

hook OnPlayerEnterDynamicCP(playerid, checkpoint) {
    for (new i = 0; i < numberOfCheckPointsCreated; i++) {
        if (checkpoint == checkPointsInformation[i][interactionZoneCheckPoint] && checkPointsInformation[i][type] == 3) {
            CreateDrugDistributorsTD(playerid);

            if (!drugDistributorsInformation[playerid][inOperation])
                drugDistributorsInformation[playerid][inOperation] = true;

            if (drugDistributorsInformation[playerid][drugDistributorsTimer] == INVALID_TIMER)
                drugDistributorsInformation[playerid][drugDistributorsTimer] = SetTimerEx("DrugDistributorsCPOutput", 500, true, "i", playerid);
            return ~0;
        }
    }
    return 1;
}