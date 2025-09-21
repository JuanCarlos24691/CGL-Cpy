forward PSTExitFromTheCheckPoint(const playerid);
public PSTExitFromTheCheckPoint(const playerid) {
    if ((petsInformation[playerid][pSInOperationBuy] || petsInformation[playerid][pSInOperationPlaceName]) && !IsPlayerInCheckpoint(playerid))
        RestorePetsInformation(playerid);
    return 1;
}