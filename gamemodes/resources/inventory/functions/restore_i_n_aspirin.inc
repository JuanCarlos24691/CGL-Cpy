forward RestoreINAspirin(const playerid);
public RestoreINAspirin(const playerid) {
    if (inventoryInformation[playerid][iNAspirin] != EOS)
        inventoryInformation[playerid][iNAspirin] = EOS;
    return 1;
}