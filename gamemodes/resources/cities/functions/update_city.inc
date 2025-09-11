forward UpdateCity(const city, const bool:omitRequirements);
public UpdateCity(const city, const bool:omitRequirements) {
    if (!omitRequirements && citiesInformation[changingCity])
        return 1;

    if (omitRequirements == false && (timeInformation[hour] != 23 || timeInformation[minute] != 59 || dayInformation[day] != 6))
        return 1;

    if (city >= 0 && city < MAX_CITIES) {
        citiesInformation[selectedCity] = city;
    } else {
        citiesInformation[selectedCity]++;

        if (citiesInformation[selectedCity] >= MAX_CITIES)
            citiesInformation[selectedCity] = 0;
    }

    SendRconCommand("game.map %s", cityNames[citiesInformation[selectedCity]]);

    UpdatePlayerClass();
    RestoreTimeInformation(false);

    foreach (new i : Player) {
        if (IsPlayerControllable(i))
            TogglePlayerControllable(i, false);
    }

    SetTimerEx("InitiateChangeOfCityForPlayer", 4500, false, "i", citiesInformation[selectedCity]);
    SetTimerEx("FinalizeChangeOfCity", 14500, false);

    if (!citiesInformation[changingCity])
        citiesInformation[changingCity] = true;
    return 1;
}

forward InitiateChangeOfCityForPlayer(const city);
public InitiateChangeOfCityForPlayer(const city) {
    foreach (new i : Player) {
        if (accountInformation[i][inGame])
            ChangePlayerCity(i, city);

        if (!IsPlayerControllable(i))
            TogglePlayerControllable(i, true);
    }
    return 1;
}

forward FinalizeChangeOfCity();
public FinalizeChangeOfCity() {
    RestoreTimeInformation(true);
    StartTime();

    inline ITimer_CreateCallback() RestoreDayInformation();
    Timer_CreateCallback(using inline ITimer_CreateCallback, 1000, 1);

    if (citiesInformation[changingCity])
        citiesInformation[changingCity] = false;
    return 1;
}