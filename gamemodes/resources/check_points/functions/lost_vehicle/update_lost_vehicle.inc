forward UpdateLostVehicle();
public UpdateLostVehicle() {
    if (timeInformation[hour] != 8 || timeInformation[minute] != 0)
        return 1;

    for (new i = 0; i < MAX_GLOBAL_VEHICLES; i++)
        if (lostVehicleInformation[lVlost][i] == true)
            return va_SendClientMessageToAll(-1, ""COLOR_AQUAMARINE3"Siguen Sin Encontrar El Vehiculo "COLOR_DARK_GREEN2"%s "COLOR_AQUAMARINE3"Que Perdio "COLOR_DARK_GREEN2"Karl Benz.", GetVehicleName(globalVehiclesInformation[i][gVModelId]));

    RestoreLostVehicleInformation();
    CreateLostVehicleInformation();
    return 1;
}