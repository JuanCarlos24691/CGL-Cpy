forward CreatePSInOperationPlaceName(const playerid);
public CreatePSInOperationPlaceName(const playerid) {
    if (petsInformation[playerid][pSInOperationPlaceName] != true)
        petsInformation[playerid][pSInOperationPlaceName] = true;
    return 1;
}