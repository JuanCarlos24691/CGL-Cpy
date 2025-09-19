forward RestoreBankVehicleRobberyInfo(const bool:skipVehicleRestoration);
public RestoreBankVehicleRobberyInfo(const bool:skipVehicleRestoration) {
    if (skipVehicleRestoration == false && bankVehicleRobberyInformation[bVVehicle] != INVALID_VEHICLE_ID) {
        DestroyVehicle(bankVehicleRobberyInformation[bVVehicle]);
        bankVehicleRobberyInformation[bVVehicle] = INVALID_VEHICLE_ID;
    }

    if (bankVehicleRobberyInformation[bVLabel3D] != INVALID_3DTEXT_ID) {
        DestroyDynamic3DTextLabel(bankVehicleRobberyInformation[bVLabel3D]);
        bankVehicleRobberyInformation[bVLabel3D] = INVALID_3DTEXT_ID;
    }

    if (bankVehicleRobberyInformation[bVPickup] != INVALID_PICKUP) {
        DestroyDynamicPickup(bankVehicleRobberyInformation[bVPickup]);
        bankVehicleRobberyInformation[bVPickup] = INVALID_PICKUP;
    }

    if (bankVehicleRobberyInformation[bVC4Placed] != false)
        bankVehicleRobberyInformation[bVC4Placed] = false;

    if (bankVehicleRobberyInformation[bVC4Timer] != INVALID_TIMER) {
        KillTimer(bankVehicleRobberyInformation[bVC4Timer]);
        bankVehicleRobberyInformation[bVC4Timer] = INVALID_TIMER;
    }

    if (bankVehicleRobberyInformation[bVC4PlacedTimer] != INVALID_TIMER) {
        KillTimer(bankVehicleRobberyInformation[bVC4PlacedTimer]);
        bankVehicleRobberyInformation[bVC4PlacedTimer] = INVALID_TIMER;
    }

    // 0 Bayside
    if (bankVehicleRobberyInformation[bVXCoordinate][0] != -2433.3406)
        bankVehicleRobberyInformation[bVXCoordinate][0] = -2433.3406;

    if (bankVehicleRobberyInformation[bVYCoordinate][0] != 2255.4504)
        bankVehicleRobberyInformation[bVYCoordinate][0] = 2255.4504;

    if (bankVehicleRobberyInformation[bVZCoordinate][0] != 5.1097)
        bankVehicleRobberyInformation[bVZCoordinate][0] = 5.1097;

    if (bankVehicleRobberyInformation[bVAngleCoordinate][0] != 179.0392)
        bankVehicleRobberyInformation[bVAngleCoordinate][0] = 179.0392;

    // 1 El Quebrados
    if (bankVehicleRobberyInformation[bVXCoordinate][1] != -1483.0491)
        bankVehicleRobberyInformation[bVXCoordinate][1] = -1483.0491;

    if (bankVehicleRobberyInformation[bVYCoordinate][1] != 2572.1045)
        bankVehicleRobberyInformation[bVYCoordinate][1] = 2572.1045;

    if (bankVehicleRobberyInformation[bVZCoordinate][1] != 55.8259)
        bankVehicleRobberyInformation[bVZCoordinate][1] = 55.8259;

    if (bankVehicleRobberyInformation[bVAngleCoordinate][1] != 89.3231)
        bankVehicleRobberyInformation[bVAngleCoordinate][1] = 89.3231;

    // 2 Las Payasadas
    if (bankVehicleRobberyInformation[bVXCoordinate][2] != -282.7227)
        bankVehicleRobberyInformation[bVXCoordinate][2] = -282.7227;

    if (bankVehicleRobberyInformation[bVYCoordinate][2] != 2688.2173)
        bankVehicleRobberyInformation[bVYCoordinate][2] = 2688.2173;

    if (bankVehicleRobberyInformation[bVZCoordinate][2] != 62.7921)
        bankVehicleRobberyInformation[bVZCoordinate][2] = 62.7921;

    if (bankVehicleRobberyInformation[bVAngleCoordinate][2] != 1.0103)
        bankVehicleRobberyInformation[bVAngleCoordinate][2] = 1.0103;

    // 3 Las Barrancas
    if (bankVehicleRobberyInformation[bVXCoordinate][3] != -836.9164)
        bankVehicleRobberyInformation[bVXCoordinate][3] = -836.9164;

    if (bankVehicleRobberyInformation[bVYCoordinate][3] != 1505.8367)
        bankVehicleRobberyInformation[bVYCoordinate][3] = 1505.8367;

    if (bankVehicleRobberyInformation[bVZCoordinate][3] != 19.9273)
        bankVehicleRobberyInformation[bVZCoordinate][3] = 19.9273;

    if (bankVehicleRobberyInformation[bVAngleCoordinate][3] != 179.3971)
        bankVehicleRobberyInformation[bVAngleCoordinate][3] = 179.3971;

    // 4 Fort Carson
    if (bankVehicleRobberyInformation[bVXCoordinate][4] != -177.6183)
        bankVehicleRobberyInformation[bVXCoordinate][4] = -177.6183;

    if (bankVehicleRobberyInformation[bVYCoordinate][4] != 1126.6404)
        bankVehicleRobberyInformation[bVYCoordinate][4] = 1126.6404;

    if (bankVehicleRobberyInformation[bVZCoordinate][4] != 19.8709)
        bankVehicleRobberyInformation[bVZCoordinate][4] = 19.8709;

    if (bankVehicleRobberyInformation[bVAngleCoordinate][4] != 89.0931)
        bankVehicleRobberyInformation[bVAngleCoordinate][4] = 89.0931;

    // 5 Blueberry
    if (bankVehicleRobberyInformation[bVXCoordinate][5] != 1251.6636)
        bankVehicleRobberyInformation[bVXCoordinate][5] = 1251.6636;

    if (bankVehicleRobberyInformation[bVYCoordinate][5] != 244.5062)
        bankVehicleRobberyInformation[bVYCoordinate][5] = 244.5062;

    if (bankVehicleRobberyInformation[bVZCoordinate][5] != 19.6795)
        bankVehicleRobberyInformation[bVZCoordinate][5] = 19.6795;

    if (bankVehicleRobberyInformation[bVAngleCoordinate][5] != 65.1091)
        bankVehicleRobberyInformation[bVAngleCoordinate][5] = 65.1091;

    // 6 Montgomery
    if (bankVehicleRobberyInformation[bVXCoordinate][6] != 1252.0305)
        bankVehicleRobberyInformation[bVXCoordinate][6] = 1252.0305;

    if (bankVehicleRobberyInformation[bVYCoordinate][6] != 244.2284)
        bankVehicleRobberyInformation[bVYCoordinate][6] = 244.2284;

    if (bankVehicleRobberyInformation[bVZCoordinate][6] != 19.6788)
        bankVehicleRobberyInformation[bVZCoordinate][6] = 19.6788;

    if (bankVehicleRobberyInformation[bVAngleCoordinate][6] != 65.4302)
        bankVehicleRobberyInformation[bVAngleCoordinate][6] = 65.4302;

    // 7 Palomino creek
    if (bankVehicleRobberyInformation[bVXCoordinate][7] != 2299.5173)
        bankVehicleRobberyInformation[bVXCoordinate][7] = 2299.5173;

    if (bankVehicleRobberyInformation[bVYCoordinate][7] != -8.1754)
        bankVehicleRobberyInformation[bVYCoordinate][7] = -8.1754;

    if (bankVehicleRobberyInformation[bVZCoordinate][7] != 26.5281)
        bankVehicleRobberyInformation[bVZCoordinate][7] = 26.5281;

    if (bankVehicleRobberyInformation[bVAngleCoordinate][7] != 179.6973)
        bankVehicleRobberyInformation[bVAngleCoordinate][7] = 179.6973;

    // 8 Dillimore
    if (bankVehicleRobberyInformation[bVXCoordinate][8] != 844.5677)
        bankVehicleRobberyInformation[bVXCoordinate][8] = 844.5677;

    if (bankVehicleRobberyInformation[bVYCoordinate][8] != -598.2328)
        bankVehicleRobberyInformation[bVYCoordinate][8] = -598.2328;

    if (bankVehicleRobberyInformation[bVZCoordinate][8] != 18.4898)
        bankVehicleRobberyInformation[bVZCoordinate][8] = 18.4898;

    if (bankVehicleRobberyInformation[bVAngleCoordinate][8] != 1.9319)
        bankVehicleRobberyInformation[bVAngleCoordinate][8] = 1.9319;

    // 9 Angel Pine
    if (bankVehicleRobberyInformation[bVXCoordinate][9] != -2197.1609)
        bankVehicleRobberyInformation[bVXCoordinate][9] = -2197.1609;

    if (bankVehicleRobberyInformation[bVYCoordinate][9] != -2350.2166)
        bankVehicleRobberyInformation[bVYCoordinate][9] = -2350.2166;

    if (bankVehicleRobberyInformation[bVZCoordinate][9] != 30.7499)
        bankVehicleRobberyInformation[bVZCoordinate][9] = 30.7499;

    if (bankVehicleRobberyInformation[bVAngleCoordinate][9] != 232.6705)
        bankVehicleRobberyInformation[bVAngleCoordinate][9] = 232.6705;

    // 10 San Fierro
    if (bankVehicleRobberyInformation[bVXCoordinate][10] != -2012.1066)
        bankVehicleRobberyInformation[bVXCoordinate][10] = -2012.1066;

    if (bankVehicleRobberyInformation[bVYCoordinate][10] != 458.8560)
        bankVehicleRobberyInformation[bVYCoordinate][10] = 458.8560;

    if (bankVehicleRobberyInformation[bVZCoordinate][10] != 35.2140)
        bankVehicleRobberyInformation[bVZCoordinate][10] = 35.2140;

    if (bankVehicleRobberyInformation[bVAngleCoordinate][10] != 358.8906)
        bankVehicleRobberyInformation[bVAngleCoordinate][10] = 358.8906;

    // 11 Los Santos
    if (bankVehicleRobberyInformation[bVXCoordinate][11] != 599.3506)
        bankVehicleRobberyInformation[bVXCoordinate][11] = 599.3506;

    if (bankVehicleRobberyInformation[bVYCoordinate][11] != -1232.2286)
        bankVehicleRobberyInformation[bVYCoordinate][11] = -1232.2286;

    if (bankVehicleRobberyInformation[bVZCoordinate][11] != 18.1108)
        bankVehicleRobberyInformation[bVZCoordinate][11] = 18.1108;

    if (bankVehicleRobberyInformation[bVAngleCoordinate][11] != 291.9365)
        bankVehicleRobberyInformation[bVAngleCoordinate][11] = 291.9365;

    // 12 Las Venturas
    if (bankVehicleRobberyInformation[bVXCoordinate][12] != 2433.0476)
        bankVehicleRobberyInformation[bVXCoordinate][12] = 2433.0476;

    if (bankVehicleRobberyInformation[bVYCoordinate][12] != 2246.0503)
        bankVehicleRobberyInformation[bVYCoordinate][12] = 2246.0503;

    if (bankVehicleRobberyInformation[bVZCoordinate][12] != 10.8654)
        bankVehicleRobberyInformation[bVZCoordinate][12] = 10.8654;

    if (bankVehicleRobberyInformation[bVAngleCoordinate][12] != 179.7251)
        bankVehicleRobberyInformation[bVAngleCoordinate][12] = 179.7251;
    return 1;
}