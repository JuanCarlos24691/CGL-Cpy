YCMD:ponervp(playerid, params[], help) {
    RestoreLostVehicleInformation();
    CreateLostVehicleInformation();

    va_SendClientMessage(playerid, -1, ""COLOR_ROSA"**PONERVP: %s (%i) (ADMIN PONERVP) Has creado un nuevo vehiculo perdido.", accountInformation[playerid][name], playerid);
    return 1;
}