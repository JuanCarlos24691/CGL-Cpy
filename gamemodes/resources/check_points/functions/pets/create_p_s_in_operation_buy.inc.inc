forward CreatePSInOperationBuy(const playerid);
public CreatePSInOperationBuy(const playerid) {
    if (petsInformation[playerid][pSInOperationBuy] != true)
        petsInformation[playerid][pSInOperationBuy] = true;
    return 1;
}