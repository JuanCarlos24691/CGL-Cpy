YCMD:unjail(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 2)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 2 para poder usar este comando.");

    new targetPlayerId;

    if (sscanf(params, "u", targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /unjail <ID del jugador>");

    if (!IsPlayerConnected(targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (!accountInformation[targetPlayerId][loggedIn])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un usuario que no esta registrado.");

    if (accountInformation[targetPlayerId][jailTime] == 0)
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador espesificado no se encuentra jaileado.");

    UnJailThePlayer(targetPlayerId);

    new string[124];
    format(string, sizeof(string), ""COLOR_ROSA"**UNJAIL: %s (%i) (ADMIN UNJAIL) Un Admnistrador ha sacado del jail al jugador %s (%i).", ReturnPlayerName(playerid), playerid, ReturnPlayerName(targetPlayerId), targetPlayerId);
    SendClientMessageToAll(-1, string);

    if (accountInformation[playerid][loggedIn] && accountInformation[playerid][inGame] && accountInformation[playerid][loggedIn] && accountInformation[playerid][inGame] && playerJailtargetPlayerId[playerid] != -1)
        playerJailtargetPlayerId[playerid] = -1;
    return 1;
}