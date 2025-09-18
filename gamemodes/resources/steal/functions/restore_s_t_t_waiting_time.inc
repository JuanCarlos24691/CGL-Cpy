forward RestoreSTTWaitingTime(const playerid);
public RestoreSTTWaitingTime(const playerid) {
    if (stealInformation[playerid][sTTWaitingTime] != INVALID_TIMER) {
        KillTimer(stealInformation[playerid][sTTWaitingTime]);
        stealInformation[playerid][sTTWaitingTime] = INVALID_TIMER;
    }
    return 1;
}