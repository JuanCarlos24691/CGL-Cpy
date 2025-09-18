forward ARTExitFromTheCheckPoint(const playerid);
public ARTExitFromTheCheckPoint(const playerid) {
    if (armoryInformation[playerid][aRInOperation] && !IsPlayerInCheckpoint(playerid))
        RestoreArmoryInformation(playerid);
    return 1;
}