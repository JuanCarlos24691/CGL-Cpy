forward RestoreARTExitFromTheCheckPoint(const playerid);
public RestoreARTExitFromTheCheckPoint(const playerid) {
    if (armoryInformation[playerid][aRTExitFromTheCheckPoint] != INVALID_TIMER) {
        KillTimer(armoryInformation[playerid][aRTExitFromTheCheckPoint]);
        armoryInformation[playerid][aRTExitFromTheCheckPoint] = INVALID_TIMER;
    }
    return 1;
}