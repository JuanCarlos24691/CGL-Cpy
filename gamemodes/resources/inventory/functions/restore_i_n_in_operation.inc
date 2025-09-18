forward RestoreINInOperation(const playerid);
public RestoreINInOperation(const playerid) {
    if (inventoryInformation[playerid][iNInOperation] != false)
        inventoryInformation[playerid][iNInOperation] = false;
    return 1;
}