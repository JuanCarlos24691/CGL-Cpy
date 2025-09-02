forward RestoreTimeInformation(const bool:restoreTime);
public RestoreTimeInformation(const bool:restoreTime) {
    if (restoreTime) {
        if (timeInformation[hour] != 0)
            timeInformation[hour] = 0;

        if (timeInformation[minute] != 0)
            timeInformation[minute] = 0;
    }

    if (timeInformation[timer] != INVALID_TIMER) {
        KillTimer(timeInformation[timer]);
        timeInformation[timer] = INVALID_TIMER;
    }
    return 1;
}