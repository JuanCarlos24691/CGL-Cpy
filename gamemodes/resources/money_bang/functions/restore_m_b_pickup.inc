forward RestoreMBPickup();
public RestoreMBPickup() {
    if (moneyBangInformation[mBPickup] != INVALID_PICKUP) {
        DestroyDynamicPickup(moneyBangInformation[mBPickup]);
        moneyBangInformation[mBPickup] = INVALID_PICKUP;
    }
    return 1;
}