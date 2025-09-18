forward RestoreINDiseases(const playerid);
public RestoreINDiseases(const playerid) {
    if (inventoryInformation[playerid][iNDiseases] != EOS)
        inventoryInformation[playerid][iNDiseases] = EOS;
    return 1;
}