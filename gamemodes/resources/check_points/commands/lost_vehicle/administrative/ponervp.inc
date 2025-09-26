YCMD:ponervp(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 5)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Tu nievel administrativo no es suficiente para ejecutar este comando.");

    RestoreLVInformation();
    CreateLVInformation();

    va_SendClientMessage(playerid, -1, ""COLOR_ROSA"**PONERVP: %s (%i) (ADMIN PONERVP) Has creado un nuevo vehiculo perdido.", accountInformation[playerid][name], playerid);
    return 1;
}