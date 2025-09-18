forward CreateSTTWaitingTime(const playerid);
public CreateSTTWaitingTime(const playerid) {
    if (stealInformation[playerid][sTTWaitingTime] == INVALID_TIMER)
        stealInformation[playerid][sTTWaitingTime] = SetTimerEx("RestoreSTTWaitingTime", 15000, true, "i", playerid);
    return 1;
}