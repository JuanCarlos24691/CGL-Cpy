forward DDTExitFromTheCheckPoint(const playerid);
public DDTExitFromTheCheckPoint(const playerid) {
    if (drugDistributorsInformation[playerid][dDInOperation] && !IsPlayerInCheckpoint(playerid))
        RestoreDrugDistributorsInfo(playerid);
    return 1;
}