forward UpdateTime();
public UpdateTime() {
    timeInformation[minute]++;

    if (timeInformation[minute] >= 60) {
        timeInformation[minute] = 0;
        timeInformation[hour] = (timeInformation[hour] + 1) % 24;
    }

    SetWorldTime(timeInformation[hour]);
    return 1;
}