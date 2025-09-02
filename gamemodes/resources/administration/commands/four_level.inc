YCMD:giveallcash(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 4)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 4  para poder usar este comando.");

    new amount;

    if (sscanf(params, "i", amount))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /giveallcash <Cantidad>");

    foreach (new i : Player) {
        accountInformation[i][cashInHand] += amount;
        GivePlayerMoney(i, accountInformation[playerid][cashInHand]);
    }

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**GIVEALLCASH: %s (%i) (ADMIN GIVEALLCASH) Un administrador ha dado $%i de dinero a todos los jugadores.", ReturnPlayerName(playerid), playerid, amount);
    SendClientMessageToAll(-1, string);
    return 1;
}

YCMD:setalltime(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 4)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 4  para poder usar este comando.");

    new timeId;

    if (sscanf(params, "i", timeId))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /setalltime <Hora>");

    /* foreach (new i : Player) {
        PlayerPlaySound(i, 1057, 0.0, 0.0, 0.0);
        SetPlayerTime(i, timeId, 0);
    } */

    timeInformation[hour] = timeId;

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**SETALLTIME: %s (%i) (ADMIN SETALLTIME) Un administrador ha establecido el tiempo (%i) a todos los jugadores.", ReturnPlayerName(playerid), playerid, timeId);
    SendClientMessageToAll(-1, string);
    return 1;
}