forward RestoreHOTWaitingTime(const playerid);
public RestoreHOTWaitingTime(const playerid) {
    if (hospitalInformation[playerid][hOTWaitingTime] != INVALID_TIMER) {
        KillTimer(hospitalInformation[playerid][hOTWaitingTime]);
        hospitalInformation[playerid][hOTWaitingTime] = INVALID_TIMER;
    }
    return 1;
}