YCMD:ponervp(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 5)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 5  para poder usar este comando.");

    RestoreLVInformation();
    CreateLVInformation();

    va_SendClientMessage(playerid, -1, ""COLOR_ROSA"**PONERVP: %s (%i) (ADMIN PONERVP) Has creado un nuevo vehiculo perdido.", accountInformation[playerid][name], playerid);
    return 1;
}