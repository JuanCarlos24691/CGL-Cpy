forward CreateARTExitFromTheCheckPoint(const playerid);
public CreateARTExitFromTheCheckPoint(const playerid) {
    if (armoryInformation[playerid][aRTExitFromTheCheckPoint] == INVALID_TIMER)
        armoryInformation[playerid][aRTExitFromTheCheckPoint] = SetTimerEx("ARTExitFromTheCheckPoint", 500, true, "i", playerid);
    return 1;
}