forward RestoreArmoryInformation(const playerid);
public RestoreArmoryInformation(const playerid) {
    RestoreARTextDrawings(playerid);
    RestoreARInOperation(playerid);
    RestoreARTExitFromTheCheckPoint(playerid);
    return 1;
}