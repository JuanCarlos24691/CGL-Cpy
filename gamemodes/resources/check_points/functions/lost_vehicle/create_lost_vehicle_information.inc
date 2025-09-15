forward CreateLostVehicleInformation();
public CreateLostVehicleInformation() {
    new randomLostVehicle = random(MAX_GLOBAL_VEHICLES);
    lostVehicleInformation[lVlost][randomLostVehicle] = true;
    lostVehicleInformation[lVModelId] = globalVehiclesInformation[randomLostVehicle][gVModelId];

    va_SendClientMessageToAll(-1, ""COLOR_DARK_GREEN2"Karl Benz "COLOR_AQUAMARINE3"Ha Perdido El Vehiculo "COLOR_DARK_GREEN2"%s, "COLOR_AQUAMARINE3"Encuentralo!!", GetVehicleName(globalVehiclesInformation[randomLostVehicle][gVModelId]));
    return 1;
}