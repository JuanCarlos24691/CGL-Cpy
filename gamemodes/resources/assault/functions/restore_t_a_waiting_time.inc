forward RestoreATWaitingTime();
public RestoreATWaitingTime() {
    if (assaultInformation[aTWaitingTime] != INVALID_TIMER)  {
        KillTimer(assaultInformation[aTWaitingTime]);
        assaultInformation[aTWaitingTime] = INVALID_TIMER;
    }
    return 1;
}