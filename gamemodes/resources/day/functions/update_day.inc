forward UpdateDay();
public UpdateDay() {
    if (timeInformation[hour] != 0 || timeInformation[minute] != 0)
        return 1;

    if (dayInformation[day] == 6)
        dayInformation[day] = 0;
    else
        dayInformation[day]++;
    return 1;
}