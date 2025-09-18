
forward CreateMBPickup();
public CreateMBPickup() {
    if (moneyBangInformation[mBPickup] == INVALID_PICKUP)
        moneyBangInformation[mBPickup] = CreateDynamicPickup(1550, 1, moneyBangInformation[mBXCoordinate][moneyBangInformation[mBIndex]], moneyBangInformation[mBYCoordinate][moneyBangInformation[mBIndex]], moneyBangInformation[mBZCoordinate][moneyBangInformation[mBIndex]], -1, -1, -1);
    return 1;
}