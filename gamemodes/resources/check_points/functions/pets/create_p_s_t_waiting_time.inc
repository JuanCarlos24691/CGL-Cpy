forward CreatePSTWaitingTime(const playerid);
public CreatePSTWaitingTime(const playerid) {
    if (petsInformation[playerid][pSTWaitingTime] == INVALID_TIMER)
        petsInformation[playerid][pSTWaitingTime] = SetTimerEx("RestorePSTWaitingTime", 15000, true, "i", playerid);
    return 1;
}