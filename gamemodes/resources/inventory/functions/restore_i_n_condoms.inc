forward RestoreINCondoms(const playerid);
public RestoreINCondoms(const playerid) {
    if (inventoryInformation[playerid][iNCondoms] != EOS)
        inventoryInformation[playerid][iNCondoms] = EOS;
    return 1;
}