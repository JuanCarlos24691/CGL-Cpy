forward CreateATInProgress();
public CreateATInProgress() {
    if (assaultInformation[aTInProgress] == INVALID_TIMER)
        assaultInformation[aTInProgress] = SetTimerEx("ProcessAssault", 3000, true);
    return 1;
}