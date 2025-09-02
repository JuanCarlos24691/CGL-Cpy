forward UpdateMoneyBang();
public UpdateMoneyBang() {
    if (timeInformation[hour] != 16 && timeInformation[hour] != 6 || timeInformation[minute] != 0)
        return 1;

    if (!moneyBangInformation[moneyBangLocated])
        return va_SendClientMessageToAll(-1, ""COLOR_AQUAMARINE2"La Bolsa Del Dinero No Ha Sido Encontrada, Sigue Perdida En "COLOR_AQUAMARINE"%s", moneyBangLocations[moneyBangInformation[moneyBangIndex]]);

    CreateMoneyBang();
    return 1;
}