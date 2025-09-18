forward RestoreINDrugs(const playerid);
public RestoreINDrugs(const playerid) {
    if (inventoryInformation[playerid][iNDrugs] != EOS)
        inventoryInformation[playerid][iNDrugs] = EOS;
    return 1;
}