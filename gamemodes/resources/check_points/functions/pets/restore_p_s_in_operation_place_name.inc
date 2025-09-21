forward RestorePSInOperationPlaceName(const playerid);
public RestorePSInOperationPlaceName(const playerid) {
    if (petsInformation[playerid][pSInOperationPlaceName] != false)
        petsInformation[playerid][pSInOperationPlaceName] = false;
    return 1;
}