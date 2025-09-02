YCMD:unjailall(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 4)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 4 para poder usar este comando.");

    foreach (new i : Player)
        if (accountInformation[i][loggedIn] && accountInformation[i][inGame] && accountInformation[i][jailTime] > 0)
            UnJailThePlayer(i);

    new string[124];
    format(string, sizeof(string), ""COLOR_ROSA"**UNJAILALL: %s (%i) (ADMIN UNJAILALL) Un administrador ha sacado a todos los jugadores del jail.", ReturnPlayerName(playerid), playerid);
    SendClientMessageToAll(-1, string);

    if (accountInformation[playerid][loggedIn] && accountInformation[playerid][inGame] && accountInformation[playerid][loggedIn] && accountInformation[playerid][inGame] && playerJailDestinationPlayerId[playerid] != -1)
        playerJailDestinationPlayerId[playerid] = -1;
    return 1;
}