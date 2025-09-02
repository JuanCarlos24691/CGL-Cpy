forward CreateMoneyBang();
public CreateMoneyBang() {
    RestoreMoneyBangInformation();
    
    new randomMoneyBangLocation = random(MAX_MONEY_BANG);

    if (moneyBangInformation[moneyBangIndex] == -1)
        moneyBangInformation[moneyBangIndex] = randomMoneyBangLocation;

    if (moneyBangInformation[moneyBagPickup] == INVALID_PICKUP)
        moneyBangInformation[moneyBagPickup] = CreateDynamicPickup(1550, 1, moneyBangInformation[moneyBangXCoordinate][moneyBangInformation[moneyBangIndex]], moneyBangInformation[moneyBangYCoordinate][moneyBangInformation[moneyBangIndex]], moneyBangInformation[moneyBangZCoordinate][moneyBangInformation[moneyBangIndex]], -1, -1, -1);

    va_SendClientMessageToAll(-1, ""COLOR_AQUAMARINE"La Mafia "COLOR_AQUAMARINE2"Perdió Una Bolsa Con Dinero En "COLOR_AQUAMARINE"%s "COLOR_AQUAMARINE2"Encuéntrala Y El Dinero Sera Tuyo", moneyBangLocations[moneyBangInformation[moneyBangIndex]]);
    return 1;
}