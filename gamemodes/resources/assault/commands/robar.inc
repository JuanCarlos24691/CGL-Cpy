YCMD:robar(playerid, params[], help) {
    if (assaultPlayerInformation[playerid][assaultCompleted])
        return CreateCompletedATextDrawings(playerid, nameOfAssaultLocations[citiesInformation[selectedCity]][1]);

    if (!IsPlayerInRangeOfPoint(playerid, 1.2, assaultInformation[ax][citiesInformation[selectedCity]], assaultInformation[ay][citiesInformation[selectedCity]], assaultInformation[az][citiesInformation[selectedCity]]))
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"No Estas En Un Checkpoint Para Robar.");

    if (assaultInformation[aTWaitingTime] != INVALID_TIMER)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Lugar Recientemente Robado, Intenta Mas Tarde.");

    CreateATWaitingTime();

    ApplyAnimation(playerid, "DEALER", "DEALER_IDLE", 5, false, false, false, false, SYNC_NONE);

    if (random(100) < 49) {
        if (random(100) < 49)
            return va_SendClientMessage(playerid, -1, ""COLOR_RED"Fallaste El Robo Al Lugar, Intenta Mas Tarde.");

        SetPlayerHealth(playerid, 0);

        va_SendClientMessageToAll(-1, ""COLOR_DARK_RED"%s (%d) Fue Asesinado Por Seguridad de %s.", accountInformation[playerid][name], playerid, nameOfAssaultLocations[citiesInformation[selectedCity]][0]);
        va_SendClientMessage(playerid, -1, ""COLOR_RED"Fuiste Asesinado Por Seguridad Del Lugar.");
        return 1;
    }

    CreateATInProgress();

    CreateInAssault(playerid);
    CreateATAssaultCompleted(playerid);
    RestoreATextDrawings(playerid);

    va_SendClientMessageToAll(-1, ""COLOR_YELLOW"%s (%d) Esta Robando %s, Matalo Y Te Daran Una Buena Recompensa.", accountInformation[playerid][name], playerid, nameOfAssaultLocations[citiesInformation[selectedCity]][0]);
    return 1;
}