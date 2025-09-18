forward RestorePSInOperation(const playerid);
public RestorePSInOperation(const playerid) {
    if (petsInformation[playerid][pSInOperation] != false)
        petsInformation[playerid][pSInOperation] = false;
    return 1;
}