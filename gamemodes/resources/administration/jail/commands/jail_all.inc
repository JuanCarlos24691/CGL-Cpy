YCMD:jailall(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 4)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 4 para poder usar este comando.");

    new tempJailtime, tempJailReason[32];

    if (sscanf(params, "I(60)S(No reason specified)[32]", tempJailtime, tempJailReason))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /jailall <Segundos> <Razón>");

    if (tempJailtime < 0 || tempJailtime < 60)
        return SendClientMessage(playerid, -1, ""COLOR_RED"El tiempo de jaileo no puede ser menor a 60 segundos o negativo.");

    if (strlen(tempJailReason) < 10 || strlen(tempJailReason) > 32)
        return SendClientMessage(playerid, -1, ""COLOR_RED"La razón debe tener entre 10 y 32 caracteres.");

    foreach (new i : Player) {
        if (accountInformation[i][loggedIn] && accountInformation[i][inGame] && accountInformation[i][jailTime] == 0 && accountInformation[i][administrativeLevel] == 0) {
            accountInformation[i][jailTime] = tempJailtime;
            playerJailTimer[i] = SetTimerEx("UpdatePlayerJailTime", 1000, true, "i", i);

            SetPlayerInterior(i, 3);
            SetPlayerPos(i, 197.6661, 174.8179, 1003.0234);
            SetCameraBehindPlayer(i);
        }
    }

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**JAILALL: %s (%i) (ADMIN JAILALL) Ha jaileado a todos los jugadores por %i segundos. Razón: %s.", ReturnPlayerName(playerid), playerid, tempJailtime, tempJailReason);
    SendClientMessageToAll(-1, string);
    return 1;
}