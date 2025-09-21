forward RestorePSInOperationBuy(const playerid);
public RestorePSInOperationBuy(const playerid) {
    if (petsInformation[playerid][pSInOperationBuy] != false)
        petsInformation[playerid][pSInOperationBuy] = false;
    return 1;
}