forward ArmoryCheckPointOutput(const playerid);
public ArmoryCheckPointOutput(const playerid) {
    if (armoryInformation[playerid][inOperation] && !IsPlayerInCheckpoint(playerid))
        RestoreArmoryInformation(playerid);
    return 1;
}