YCMD:robar(playerid, params[], help) {
    if (!IsPlayerInRangeOfPoint(playerid, 1.2, assaultInformation[xCoordinateOfTheft][citiesInformation[selectedCity]], assaultInformation[yCoordinateOfTheft][citiesInformation[selectedCity]], assaultInformation[zCoordinateOfTheft][citiesInformation[selectedCity]]))
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"No Estas En Un Checkpoint Para Robar.");

    if (assaultInformation[waitTimeToStealAgain] != INVALID_TIMER)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Lugar Recientemente Robado, Intenta Mas Tarde.");

    if (assaultInformation[waitTimeToStealAgain] == INVALID_TIMER)
        assaultInformation[waitTimeToStealAgain] = SetTimerEx("RestoreAssaultInformation", 600000, false, "ii", true, false, true, true);

    if (random(100) < 49) {
        if (random(100) < 49)
            return va_SendClientMessage(playerid, -1, ""COLOR_RED"Fallaste El Robo Al Lugar, Intenta Mas Tarde.");

        SendDeathMessage(INVALID_PLAYER_ID, playerid, WEAPON_SHOTGUN);
        SetPlayerHealth(playerid, 0);

        va_SendClientMessageToAll(-1, ""COLOR_DARK_RED"%s (%d) Fue Asesinado Por Seguridad de %s.", accountInformation[playerid][name], playerid, nameOfAssaultLocations[citiesInformation[selectedCity]][0]);
        va_SendClientMessage(playerid, -1, ""COLOR_RED"Fuiste Asesinado Por Seguridad Del Lugar.");
        return 1;
    }

    if (assaultPlayerInformation[playerid][inTheft] != true)
        assaultPlayerInformation[playerid][inTheft] = true;

    if (assaultInformation[timerProcessTheft] == INVALID_TIMER)
        assaultInformation[timerProcessTheft] = SetTimerEx("ProcessTheft", 1000, true);

    va_SendClientMessageToAll(-1, ""COLOR_YELLOW"%s (%d) Esta Robando %s, Matalo Y Te Daran Una Buena Recompensa.", accountInformation[playerid][name], playerid, nameOfAssaultLocations[citiesInformation[selectedCity]][0]);
    return 1;
}