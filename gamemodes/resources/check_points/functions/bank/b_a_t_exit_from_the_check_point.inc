forward BATExitFromTheCheckPoint(const playerid);
public BATExitFromTheCheckPoint(const playerid) {
    if (bankInformation[playerid][bAInOperation] && !IsPlayerInCheckpoint(playerid))
        RestoreBankInformation(playerid);
    return 1;
}