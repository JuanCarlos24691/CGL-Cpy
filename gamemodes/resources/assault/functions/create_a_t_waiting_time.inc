forward CreateATWaitingTime();
public CreateATWaitingTime() {
    if (assaultInformation[aTWaitingTime] == INVALID_TIMER)
        assaultInformation[aTWaitingTime] = SetTimerEx("RestoreATWaitingTime", 600000, false);
    return 1;
}