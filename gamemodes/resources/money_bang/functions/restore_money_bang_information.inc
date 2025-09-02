forward RestoreMoneyBangInformation();
public RestoreMoneyBangInformation() {
    if (moneyBangInformation[moneyBangIndex] != -1)
        moneyBangInformation[moneyBangIndex] = -1;

    if (moneyBangInformation[moneyBagPickup] != INVALID_PICKUP) {
        DestroyDynamicPickup(moneyBangInformation[moneyBagPickup]);
        moneyBangInformation[moneyBagPickup] = INVALID_PICKUP;
    }

    if (moneyBangInformation[moneyBangLocated])
        moneyBangInformation[moneyBangLocated] = false;
    return 1;
}