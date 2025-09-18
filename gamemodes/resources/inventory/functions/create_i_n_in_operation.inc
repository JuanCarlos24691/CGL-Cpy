forward CreateINInOperation(const playerid);
public CreateINInOperation(const playerid) {
    if (inventoryInformation[playerid][iNInOperation] != true)
        inventoryInformation[playerid][iNInOperation] = true;
    return 1;
}