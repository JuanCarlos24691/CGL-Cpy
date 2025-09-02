forward StartTime();
public StartTime() {
    if (timeInformation[timer] == INVALID_TIMER)
        timeInformation[timer] = SetTimerEx("UpdateTime", 1000, true);
    return 1;
}