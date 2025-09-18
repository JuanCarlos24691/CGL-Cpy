forward CreateMoneyBang();
public CreateMoneyBang() {
    RestoreMoneyBangInformation();

    CreateMBIndex(random(MAX_MONEY_BANG));
    CreateMBPickup();

    va_SendClientMessageToAll(-1, ""COLOR_AQUAMARINE"La Mafia "COLOR_AQUAMARINE2"Perdió Una Bolsa Con Dinero En "COLOR_AQUAMARINE"%s "COLOR_AQUAMARINE2"Encuéntrala Y El Dinero Sera Tuyo", moneyBangLocations[moneyBangInformation[mBIndex]]);
    return 1;
}