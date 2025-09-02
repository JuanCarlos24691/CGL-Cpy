forward RestoreViolationInformation(const playerid);
public RestoreViolationInformation(const playerid) {
    if (violationInformation[playerid][inOperation])
        violationInformation[playerid][inOperation] = false;

    if (violationInformation[playerid][playerPreviouslyViolated] != -1)
        violationInformation[playerid][playerPreviouslyViolated] = -1;

    if (violationInformation[playerid][waitingTime] != 0)
        violationInformation[playerid][waitingTime] = 0;

    if (violationInformation[playerid][lifeDecrementTimer] != INVALID_TIMER) {
        KillTimer(violationInformation[playerid][lifeDecrementTimer]);
        violationInformation[playerid][lifeDecrementTimer] = INVALID_TIMER;
    }
    return 1;
}