forward RestoreLVModelId();
public RestoreLVModelId() {
    if (lostVehicleInformation[lVModelId] != -1)
        lostVehicleInformation[lVModelId] = -1;
    return 1;
}