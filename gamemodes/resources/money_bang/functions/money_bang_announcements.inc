forward MoneyBangAnnouncements();
public MoneyBangAnnouncements() {
    if (timeInformation[hour] != 10 && timeInformation[hour] != 14 && timeInformation[hour] != 19 && timeInformation[hour] != 22 && timeInformation[hour] != 2 || timeInformation[minute] != 0)
        return 1;

    if (!moneyBangInformation[moneyBangLocated])
        va_SendClientMessageToAll(-1, ""COLOR_AQUAMARINE2"La Bolsa Del Dinero No Ha Sido Encontrada, Sigue Perdida En "COLOR_AQUAMARINE"%s", moneyBangLocations[moneyBangInformation[moneyBangIndex]]);
    return 1;
}