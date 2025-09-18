forward PSTExitFromTheCheckPoint(const playerid);
public PSTExitFromTheCheckPoint(const playerid) {
    if (petsInformation[playerid][pSInOperation] && !IsPlayerInCheckpoint(playerid))
        RestorePetsInformation(playerid);
    return 1;
}