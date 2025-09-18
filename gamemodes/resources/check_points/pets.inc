#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    for (new i = 0; i < MAX_PLAYERS; i++)
        RestorePetsInformation(i);

    // SetTimerEx("ChargeFeesForPets", 1000, true);
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    RestorePetsInformation(playerid);
    return 1;
}

hook OnPlayerText(playerid, text[]) {
    if (petsInformation[playerid][pSInOperation]) {
        if (isequal(text, "1", true) || isequal(text, "2", true) || isequal(text, "3", true) || isequal(text, "4", true) || isequal(text, "5", true) || isequal(text, "6", true) || isequal(text, "7", true) || isequal(text, "8", true) || isequal(text, "9", true) || isequal(text, "10", true) || isequal(text, "11", true) || isequal(text, "12", true) || isequal(text, "13", true) || isequal(text, "14", true) || isequal(text, "15", true) || isequal(text, "16", true) || isequal(text, "17", true) || isequal(text, "18", true) || isequal(text, "19", true) || isequal(text, "20", true)) {
            if (accountInformation[playerid][pet] != 0) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Usted ya tiene una mascota y no puede comprar otra. Utilice /abandonarmascota para dejarla");
                return ~0;
            }

            BuyNewPet(playerid, strval(text));
            ApplyAnimation(playerid, "INT_SHOP", "shop_pay", 3.0, false, false, false, false, SYNC_NONE);
            return ~0;
        }
    }
    return 1;
}

hook OnPlayerKeyStateChange(playerid, KEY:newkeys, KEY:oldkeys) {
    if (newkeys & KEY_FIRE && petsInformation[playerid][pSInOperation])
        // RestoreHospitalInformation(playerid, true);
        return 1;
}

hook OnPlayerEnterDynamicCP(playerid, checkpoint) {
    for (new i = 0; i < numberOfCheckPointsCreated; i++) {
        if (checkpoint == checkPointsInformation[i][outsideCheckPoint] && checkPointsInformation[i][type] == 6) {
            SetPlayerPos(playerid, checkPointsInformation[i][insideXCoordinate], checkPointsInformation[i][insideYCoordinate], checkPointsInformation[i][insideZCoordinate]);
            SetPlayerFacingAngle(playerid, checkPointsInformation[i][insideAngle]);
            SetCameraBehindPlayer(playerid);

            SetPlayerInterior(playerid, checkPointsInformation[i][inside]);
            SetPlayerVirtualWorld(playerid, checkPointsInformation[i][virtualWorld]);
            return -1;
        } else if (checkpoint == checkPointsInformation[i][insideCheckPoint] && checkPointsInformation[i][type] == 6) {
            SetPlayerPos(playerid, checkPointsInformation[i][outsideXCoordinate], checkPointsInformation[i][outsideYCoordinate], checkPointsInformation[i][outsideZCoordinate]);
            SetPlayerFacingAngle(playerid, checkPointsInformation[i][outsideAngle]);
            SetCameraBehindPlayer(playerid);

            SetPlayerInterior(playerid, 0);
            SetPlayerVirtualWorld(playerid, 0);
            return -1;
        } else if (checkpoint == checkPointsInformation[i][interactionZoneCheckPoint] && checkPointsInformation[i][type] == 6) {
            CreatePSInOperation(playerid);
            return -1;
        }
    }
    return 1;
}