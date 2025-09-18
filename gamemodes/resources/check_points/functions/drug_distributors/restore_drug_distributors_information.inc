forward RestoreDrugDistributorsInfo(const playerid);
public RestoreDrugDistributorsInfo(const playerid) {
    RestoreDDTextDrawings(playerid);
    RestoreDDInOperation(playerid);
    RestoreDDTExitFromTheCheckPoint(playerid);
    return 1;
}