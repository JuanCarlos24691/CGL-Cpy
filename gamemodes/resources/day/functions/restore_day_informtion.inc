forward RestoreDayInformation();
public RestoreDayInformation() {
    if (dayInformation[day] != 0)
        dayInformation[day] = 0;
    return 1;
}