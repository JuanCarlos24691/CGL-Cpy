forward RestoreINDrugged(const playerid);
public RestoreINDrugged(const playerid) {
    if (inventoryInformation[playerid][iNDrugged] != EOS)
        inventoryInformation[playerid][iNDrugged] = EOS;
    return 1;
}