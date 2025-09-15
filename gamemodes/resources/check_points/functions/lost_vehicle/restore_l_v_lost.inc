forward RestoreLVLost();
public RestoreLVLost() {
    for (new i = 0; i < MAX_GLOBAL_VEHICLES; i++)
        if (lostVehicleInformation[lVlost][i] != false)
            lostVehicleInformation[lVlost][i] = false;
    return 1;
}