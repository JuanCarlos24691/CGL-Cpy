YCMD:unjail(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 2)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 2 para poder usar este comando.");

    new destinationPlayerId;

    if (sscanf(params, "u", destinationPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /unjail <ID del jugador>");

    if (!IsPlayerConnected(destinationPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (!accountInformation[destinationPlayerId][loggedIn])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un usuario que no esta registrado.");

    if (accountInformation[destinationPlayerId][jailTime] == 0)
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador espesificado no se encuentra jaileado.");

    UnJailThePlayer(destinationPlayerId);

    new string[124];
    format(string, sizeof(string), ""COLOR_ROSA"**UNJAIL: %s (%i) (ADMIN UNJAIL) Un Admnistrador ha sacado del jail al jugador %s (%i).", ReturnPlayerName(playerid), playerid, ReturnPlayerName(destinationPlayerId), destinationPlayerId);
    SendClientMessageToAll(-1, string);

    if (accountInformation[playerid][loggedIn] && accountInformation[playerid][inGame] && accountInformation[playerid][loggedIn] && accountInformation[playerid][inGame] && playerJailDestinationPlayerId[playerid] != -1)
        playerJailDestinationPlayerId[playerid] = -1;
    return 1;
}