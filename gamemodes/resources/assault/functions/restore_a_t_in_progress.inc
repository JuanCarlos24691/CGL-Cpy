forward RestoreATInProgress();
public RestoreATInProgress() {
    if (assaultInformation[aTInProgress] != INVALID_TIMER)  {
        KillTimer(assaultInformation[aTInProgress]);
        assaultInformation[aTInProgress] = INVALID_TIMER;
    }
    return 1;
}