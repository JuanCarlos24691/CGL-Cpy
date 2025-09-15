YCMD:vp(playerid, params[], help) {
    for (new i = 0; i < MAX_GLOBAL_VEHICLES; i++)
        if (lostVehicleInformation[lVlost][i] == true)
            return CreateLostVehicleTextDrawings(playerid, GetVehicleName(globalVehiclesInformation[i][gVModelId]));

    va_SendClientMessage(playerid, -1, ""COLOR_RED"Actual Mente No Hay Un Vehiculo Perdido.");
    return 1;
}