forward CreateHOTWaitingTime(const playerid);
public CreateHOTWaitingTime(const playerid) {
    if (hospitalInformation[playerid][hOTWaitingTime] == INVALID_TIMER)
        hospitalInformation[playerid][hOTWaitingTime] = SetTimerEx("RestoreHOTWaitingTime", 15000, true, "i", playerid);
    return 1;
}