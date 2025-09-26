YCMD:jail(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 2)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 2 para poder usar este comando.");

    new targetPlayerId, tempJailtime, tempJailReason[32];

    if (sscanf(params, "uI(60)S(No reason specified)[32]", targetPlayerId, tempJailtime, tempJailReason))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /jail <ID del jugador> <Segundos> <Razón>");

    if (!IsPlayerConnected(targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (!accountInformation[targetPlayerId][loggedIn])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un usuario que no esta registrado.");

    if (tempJailtime < 0 || tempJailtime < 60)
        return SendClientMessage(playerid, -1, ""COLOR_RED"El tiempo de jaileo no puede tener un valor negativo ni tener un valor menor a 60 segundos.");

    if (strlen(tempJailReason) < 10 || strlen(tempJailReason) > 32)
        return SendClientMessage(playerid, -1, ""COLOR_RED"La razón del jaileo no es valída. Este deber tener un rango de caracteres de 10 a 32 caracteres.");

    if (GetPlayerState(targetPlayerId) == PLAYER_STATE_WASTED || GetPlayerState(targetPlayerId) == PLAYER_STATE_SPECTATING)
        return SendClientMessage(playerid, -1, "El jugador especificado aun no ha spawneado.");

    if (accountInformation[targetPlayerId][jailTime] > 0)
        return SendClientMessage(playerid, -1, "El jugador espesificado ya fue jaileado.");

    accountInformation[targetPlayerId][jailTime] = tempJailtime;
    playerJailTimer[targetPlayerId] = SetTimerEx("UpdatePlayerJailTime", 1000, true, "i", targetPlayerId);

    SetPlayerInterior(targetPlayerId, 3);
    SetPlayerPos(targetPlayerId, 197.6661, 174.8179, 1003.0234);
    SetCameraBehindPlayer(targetPlayerId);

    PlayerPlaySound(targetPlayerId, 1057, 0.0, 0.0, 0.0);
    PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**JAIL: %s (%i) (ADMIN JAIL) Un Admnistrador ha jaileado al jugador %s (%i) por %i segundos por la razón: %s.", ReturnPlayerName(playerid), playerid, ReturnPlayerName(targetPlayerId), targetPlayerId, tempJailtime, tempJailReason);
    SendClientMessageToAll(-1, string);
    return 1;
}