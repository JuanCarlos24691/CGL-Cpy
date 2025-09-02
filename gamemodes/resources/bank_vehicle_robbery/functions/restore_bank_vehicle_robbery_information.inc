forward RestoreBankVehicleRobberyInfo(const bool:skipVehicleRestoration);
public RestoreBankVehicleRobberyInfo(const bool:skipVehicleRestoration) {
    if (skipVehicleRestoration == false && bankVehicleRobberyInformation[vehicle] != INVALID_VEHICLE_ID) {
        DestroyVehicle(bankVehicleRobberyInformation[vehicle]);
        bankVehicleRobberyInformation[vehicle] = INVALID_VEHICLE_ID;
    }

    if (bankVehicleRobberyInformation[label3D] != INVALID_3DTEXT_ID)
        bankVehicleRobberyInformation[label3D] = INVALID_3DTEXT_ID;

    if (bankVehicleRobberyInformation[pickup] != INVALID_PICKUP) {
        DestroyDynamicPickup(bankVehicleRobberyInformation[pickup]);
        bankVehicleRobberyInformation[pickup] = INVALID_PICKUP;
    }

    if (bankVehicleRobberyInformation[c4Placed] != false)
        bankVehicleRobberyInformation[c4Placed] = false;

    if (bankVehicleRobberyInformation[c4Timer] != INVALID_TIMER) {
        KillTimer(bankVehicleRobberyInformation[c4Timer]);
        bankVehicleRobberyInformation[c4Timer] = INVALID_TIMER;
    }

    if (bankVehicleRobberyInformation[c4PlacedTimer] != INVALID_TIMER) {
        KillTimer(bankVehicleRobberyInformation[c4PlacedTimer]);
        bankVehicleRobberyInformation[c4PlacedTimer] = INVALID_TIMER;
    }

    // 0 Bayside
    if (bankVehicleRobberyInformation[xCoordinate][0] != -2433.3406)
        bankVehicleRobberyInformation[xCoordinate][0] = -2433.3406;

    if (bankVehicleRobberyInformation[yCoordinate][0] != 2255.4504)
        bankVehicleRobberyInformation[yCoordinate][0] = 2255.4504;

    if (bankVehicleRobberyInformation[zCoordinate][0] != 5.1097)
        bankVehicleRobberyInformation[zCoordinate][0] = 5.1097;

    if (bankVehicleRobberyInformation[angleCoordinate][0] != 179.0392)
        bankVehicleRobberyInformation[angleCoordinate][0] = 179.0392;

    // 1 El Quebrados
    if (bankVehicleRobberyInformation[xCoordinate][1] != -1483.0491)
        bankVehicleRobberyInformation[xCoordinate][1] = -1483.0491;

    if (bankVehicleRobberyInformation[yCoordinate][1] != 2572.1045)
        bankVehicleRobberyInformation[yCoordinate][1] = 2572.1045;

    if (bankVehicleRobberyInformation[zCoordinate][1] != 55.8259)
        bankVehicleRobberyInformation[zCoordinate][1] = 55.8259;

    if (bankVehicleRobberyInformation[angleCoordinate][1] != 89.3231)
        bankVehicleRobberyInformation[angleCoordinate][1] = 89.3231;

    // 2 Las Payasadas
    if (bankVehicleRobberyInformation[xCoordinate][2] != -282.7227)
        bankVehicleRobberyInformation[xCoordinate][2] = -282.7227;

    if (bankVehicleRobberyInformation[yCoordinate][2] != 2688.2173)
        bankVehicleRobberyInformation[yCoordinate][2] = 2688.2173;

    if (bankVehicleRobberyInformation[zCoordinate][2] != 62.7921)
        bankVehicleRobberyInformation[zCoordinate][2] = 62.7921;

    if (bankVehicleRobberyInformation[angleCoordinate][2] != 1.0103)
        bankVehicleRobberyInformation[angleCoordinate][2] = 1.0103;

    // 3 Las Barrancas
    if (bankVehicleRobberyInformation[xCoordinate][3] != -836.9164)
        bankVehicleRobberyInformation[xCoordinate][3] = -836.9164;

    if (bankVehicleRobberyInformation[yCoordinate][3] != 1505.8367)
        bankVehicleRobberyInformation[yCoordinate][3] = 1505.8367;

    if (bankVehicleRobberyInformation[zCoordinate][3] != 19.9273)
        bankVehicleRobberyInformation[zCoordinate][3] = 19.9273;

    if (bankVehicleRobberyInformation[angleCoordinate][3] != 179.3971)
        bankVehicleRobberyInformation[angleCoordinate][3] = 179.3971;

    // 4 Fort Carson
    if (bankVehicleRobberyInformation[xCoordinate][4] != -177.6183)
        bankVehicleRobberyInformation[xCoordinate][4] = -177.6183;

    if (bankVehicleRobberyInformation[yCoordinate][4] != 1126.6404)
        bankVehicleRobberyInformation[yCoordinate][4] = 1126.6404;

    if (bankVehicleRobberyInformation[zCoordinate][4] != 19.8709)
        bankVehicleRobberyInformation[zCoordinate][4] = 19.8709;

    if (bankVehicleRobberyInformation[angleCoordinate][4] != 89.0931)
        bankVehicleRobberyInformation[angleCoordinate][4] = 89.0931;

    // 5 Blueberry
    if (bankVehicleRobberyInformation[xCoordinate][5] != 1251.6636)
        bankVehicleRobberyInformation[xCoordinate][5] = 1251.6636;

    if (bankVehicleRobberyInformation[yCoordinate][5] != 244.5062)
        bankVehicleRobberyInformation[yCoordinate][5] = 244.5062;

    if (bankVehicleRobberyInformation[zCoordinate][5] != 19.6795)
        bankVehicleRobberyInformation[zCoordinate][5] = 19.6795;

    if (bankVehicleRobberyInformation[angleCoordinate][5] != 65.1091)
        bankVehicleRobberyInformation[angleCoordinate][5] = 65.1091;

    // 6 Montgomery
    if (bankVehicleRobberyInformation[xCoordinate][6] != 1252.0305)
        bankVehicleRobberyInformation[xCoordinate][6] = 1252.0305;

    if (bankVehicleRobberyInformation[yCoordinate][6] != 244.2284)
        bankVehicleRobberyInformation[yCoordinate][6] = 244.2284;

    if (bankVehicleRobberyInformation[zCoordinate][6] != 19.6788)
        bankVehicleRobberyInformation[zCoordinate][6] = 19.6788;

    if (bankVehicleRobberyInformation[angleCoordinate][6] != 65.4302)
        bankVehicleRobberyInformation[angleCoordinate][6] = 65.4302;

    // 7 Palomino creek
    if (bankVehicleRobberyInformation[xCoordinate][7] != 2299.5173)
        bankVehicleRobberyInformation[xCoordinate][7] = 2299.5173;

    if (bankVehicleRobberyInformation[yCoordinate][7] != -8.1754)
        bankVehicleRobberyInformation[yCoordinate][7] = -8.1754;

    if (bankVehicleRobberyInformation[zCoordinate][7] != 26.5281)
        bankVehicleRobberyInformation[zCoordinate][7] = 26.5281;

    if (bankVehicleRobberyInformation[angleCoordinate][7] != 179.6973)
        bankVehicleRobberyInformation[angleCoordinate][7] = 179.6973;

    // 8 Dillimore
    if (bankVehicleRobberyInformation[xCoordinate][8] != 844.5677)
        bankVehicleRobberyInformation[xCoordinate][8] = 844.5677;

    if (bankVehicleRobberyInformation[yCoordinate][8] != -598.2328)
        bankVehicleRobberyInformation[yCoordinate][8] = -598.2328;

    if (bankVehicleRobberyInformation[zCoordinate][8] != 18.4898)
        bankVehicleRobberyInformation[zCoordinate][8] = 18.4898;

    if (bankVehicleRobberyInformation[angleCoordinate][8] != 1.9319)
        bankVehicleRobberyInformation[angleCoordinate][8] = 1.9319;

    // 9 Angel Pine
    if (bankVehicleRobberyInformation[xCoordinate][9] != -2197.1609)
        bankVehicleRobberyInformation[xCoordinate][9] = -2197.1609;

    if (bankVehicleRobberyInformation[yCoordinate][9] != -2350.2166)
        bankVehicleRobberyInformation[yCoordinate][9] = -2350.2166;

    if (bankVehicleRobberyInformation[zCoordinate][9] != 30.7499)
        bankVehicleRobberyInformation[zCoordinate][9] = 30.7499;

    if (bankVehicleRobberyInformation[angleCoordinate][9] != 232.6705)
        bankVehicleRobberyInformation[angleCoordinate][9] = 232.6705;

    // 10 San Fierro
    if (bankVehicleRobberyInformation[xCoordinate][10] != -2012.1066)
        bankVehicleRobberyInformation[xCoordinate][10] = -2012.1066;

    if (bankVehicleRobberyInformation[yCoordinate][10] != 458.8560)
        bankVehicleRobberyInformation[yCoordinate][10] = 458.8560;

    if (bankVehicleRobberyInformation[zCoordinate][10] != 35.2140)
        bankVehicleRobberyInformation[zCoordinate][10] = 35.2140;

    if (bankVehicleRobberyInformation[angleCoordinate][10] != 358.8906)
        bankVehicleRobberyInformation[angleCoordinate][10] = 358.8906;

    // 11 Los Santos
    if (bankVehicleRobberyInformation[xCoordinate][11] != 599.3506)
        bankVehicleRobberyInformation[xCoordinate][11] = 599.3506;

    if (bankVehicleRobberyInformation[yCoordinate][11] != -1232.2286)
        bankVehicleRobberyInformation[yCoordinate][11] = -1232.2286;

    if (bankVehicleRobberyInformation[zCoordinate][11] != 18.1108)
        bankVehicleRobberyInformation[zCoordinate][11] = 18.1108;

    if (bankVehicleRobberyInformation[angleCoordinate][11] != 291.9365)
        bankVehicleRobberyInformation[angleCoordinate][11] = 291.9365;

    // 12 Las Venturas
    if (bankVehicleRobberyInformation[xCoordinate][12] != 2433.0476)
        bankVehicleRobberyInformation[xCoordinate][12] = 2433.0476;

    if (bankVehicleRobberyInformation[yCoordinate][12] != 2246.0503)
        bankVehicleRobberyInformation[yCoordinate][12] = 2246.0503;

    if (bankVehicleRobberyInformation[zCoordinate][12] != 10.8654)
        bankVehicleRobberyInformation[zCoordinate][12] = 10.8654;

    if (bankVehicleRobberyInformation[angleCoordinate][12] != 179.7251)
        bankVehicleRobberyInformation[angleCoordinate][12] = 179.7251;
    return 1;
}