YCMD:atacar(playerid, params[], help) {
    if (petsInformation[playerid][pSTWaitingTime] != INVALID_TIMER)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes esperar para poder atacar de nuevo.");

    CreatePSTWaitingTime(playerid);

    new damage;

    switch (accountInformation[playerid][pet]) {
        case 1: damage = random(6) + 10;
        case 2: damage = random(6) + 10;
        case 3: damage = random(6) + 10;
        case 4: damage = random(6) + 10;
        case 5: damage = random(6) + 10;
        case 6: damage = random(6) + 20;
        case 7: damage = random(6) + 20;
        case 8: damage = random(6) + 20;
        case 9: damage = random(6) + 20;
        case 10: damage = random(6) + 20;
        case 11: damage = random(6) + 30;
        case 12: damage = random(6) + 30;
        case 13: damage = random(6) + 30;
        case 14: damage = random(6) + 30;
        case 15: damage = random(6) + 30;
        case 16: damage = 40;
        case 17: damage = 40;
        case 18: damage = 40;
        case 19: damage = 40;
        case 20: damage = 40;
    }

    new targetPlayerId;

    if (!sscanf(params, "i", targetPlayerId)) {
        if (playerid == targetPlayerId)
            return va_SendClientMessage(playerid, -1, ""COLOR_RED"No puedes atacarte a ti mismo.");

        if (!IsPlayerConnected(targetPlayerId))
            return va_SendClientMessage(playerid, -1, ""COLOR_RED"El jugador no está conectado.");

        new Float:playerXCoordinate, Float:playerYCoordinate, Float:playerZCoordinate;
        GetPlayerPos(targetPlayerId, playerXCoordinate, playerYCoordinate, playerZCoordinate);

        if (IsPlayerInRangeOfPoint(playerid, 1.3, playerXCoordinate, playerYCoordinate, playerZCoordinate))
            return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes estar cerca del jugador para atacarlo.");

        new Float:lifeOfTheAttackedPlayer;
        GetPlayerHealth(targetPlayerId, lifeOfTheAttackedPlayer);
        lifeOfTheAttackedPlayer -= damage;

        SetPlayerHealth(playerid, damage);
        va_SendClientMessage(playerid, -1, ""COLOR_DARK_GREEN"%s, %s de %s (%d) atacó a %s (%d).", accountInformation[playerid][petName], typeOfPetsNames[accountInformation[playerid][pet]], accountInformation[playerid][name], playerid, accountInformation[targetPlayerId][name], targetPlayerId);
        return 1;
    } else {
        foreach (new i : Player) {
            new Float:playerXCoordinate, Float:playerYCoordinate, Float:playerZCoordinate;
            GetPlayerPos(i, playerXCoordinate, playerYCoordinate, playerZCoordinate);

            if (IsPlayerInRangeOfPoint(playerid, 1.3, playerXCoordinate, playerYCoordinate, playerZCoordinate) && playerid != i) {
                new Float:lifeOfTheAttackedPlayer;
                GetPlayerHealth(i, lifeOfTheAttackedPlayer);
                lifeOfTheAttackedPlayer -= damage;

                SetPlayerHealth(playerid, damage);
                va_SendClientMessage(playerid, -1, ""COLOR_DARK_GREEN"%s, %s de %s (%d) atacó a %s (%d).", accountInformation[playerid][petName], typeOfPetsNames[accountInformation[playerid][pet]], accountInformation[playerid][name], playerid, accountInformation[i][name], i);
                return 1;
            }
        }
    }

    return va_SendClientMessage(playerid, -1, ""COLOR_RED"Usa: /atacar (ID)");
}