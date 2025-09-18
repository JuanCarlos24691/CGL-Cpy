forward CreateDDTExitFromTheCheckPoint(const playerid);
public CreateDDTExitFromTheCheckPoint(const playerid) {
    if (drugDistributorsInformation[playerid][dDTExitFromTheCheckPoint] == INVALID_TIMER)
        drugDistributorsInformation[playerid][dDTExitFromTheCheckPoint] = SetTimerEx("DDTExitFromTheCheckPoint", 500, true, "i", playerid);
    return 1;
}