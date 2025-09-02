YCMD:reports(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 1)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 1 para poder usar este comando.");

    Reports(playerid);
    return 1;
}