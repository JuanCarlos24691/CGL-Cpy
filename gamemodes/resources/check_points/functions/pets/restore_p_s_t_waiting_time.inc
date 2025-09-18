forward RestorePSTWaitingTime(const playerid);
public RestorePSTWaitingTime(const playerid) {
    if (petsInformation[playerid][pSTWaitingTime] != INVALID_TIMER) {
        KillTimer(petsInformation[playerid][pSTWaitingTime]);
        petsInformation[playerid][pSTWaitingTime] = INVALID_TIMER;
    }
    return 1;
}