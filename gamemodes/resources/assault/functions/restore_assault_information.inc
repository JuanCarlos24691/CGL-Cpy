forward RestoreAssaultInformation(bool:onlyWaitTimeToStealAgain, bool:skipWaitTimeToStealAgain, bool:skipThiefCheckPoint, bool:skipRobberyLocationMapIcon);
public RestoreAssaultInformation(bool:onlyWaitTimeToStealAgain, bool:skipWaitTimeToStealAgain, bool:skipThiefCheckPoint, bool:skipRobberyLocationMapIcon) {
    if (assaultInformation[waitTimeToStealAgain] != INVALID_TIMER && skipWaitTimeToStealAgain == false)  {
        KillTimer(assaultInformation[waitTimeToStealAgain]);
        assaultInformation[waitTimeToStealAgain] = INVALID_TIMER;

        if (onlyWaitTimeToStealAgain)
            return 1;
    }

    if (assaultInformation[timerProcessTheft] != INVALID_TIMER)  {
        KillTimer(assaultInformation[timerProcessTheft]);
        assaultInformation[timerProcessTheft] = INVALID_TIMER;
    }

    if (assaultInformation[atTheAssaultCheckPoint] != false)
        assaultInformation[atTheAssaultCheckPoint] = false;

    // 1) Bayside Marina - robar
    if (assaultInformation[xCoordinateOfTheft][0] != -2190.0405)
        assaultInformation[xCoordinateOfTheft][0] = -2190.0405;

    if (assaultInformation[yCoordinateOfTheft][0] != 2413.4983)
        assaultInformation[yCoordinateOfTheft][0] = 2413.4983;

    if (assaultInformation[zCoordinateOfTheft][0] != 5.1563)
        assaultInformation[zCoordinateOfTheft][0] = 5.1563;

    // 1) Aldea Malvada - entregar
    if (assaultInformation[deliveryCoordinateX][0] != -1299.7253)
        assaultInformation[deliveryCoordinateX][0] = -1299.7253;

    if (assaultInformation[deliveryCoordinateY][0] != 2517.3701)
        assaultInformation[deliveryCoordinateY][0] = 2517.3701;

    if (assaultInformation[deliveryCoordinateZ][0] != 87.1921)
        assaultInformation[deliveryCoordinateZ][0] = 87.1921;

    // 2) Valle Ocultado - robar
    if (assaultInformation[xCoordinateOfTheft][1] != -902.8610)
        assaultInformation[xCoordinateOfTheft][1] = -902.8610;

    if (assaultInformation[yCoordinateOfTheft][1] != 2681.7078)
        assaultInformation[yCoordinateOfTheft][1] = 2681.7078;

    if (assaultInformation[zCoordinateOfTheft][1] != 42.3703)
        assaultInformation[zCoordinateOfTheft][1] = 42.3703;

    // 2) The Big Ear - entregar
    if (assaultInformation[deliveryCoordinateX][1] != -301.7474)
        assaultInformation[deliveryCoordinateX][1] = -301.7474;

    if (assaultInformation[deliveryCoordinateY][1] != 1510.6263)
        assaultInformation[deliveryCoordinateY][1] = 1510.6263;

    if (assaultInformation[deliveryCoordinateZ][1] != 75.3594)
        assaultInformation[deliveryCoordinateZ][1] = 75.3594;

    // 3) Tierra Robada - robar
    if (assaultInformation[xCoordinateOfTheft][2] != -553.8516)
        assaultInformation[xCoordinateOfTheft][2] = -553.8516;

    if (assaultInformation[yCoordinateOfTheft][2] != 2593.8042)
        assaultInformation[yCoordinateOfTheft][2] = 2593.8042;

    if (assaultInformation[zCoordinateOfTheft][2] != 53.9348)
        assaultInformation[zCoordinateOfTheft][2] = 53.9348;

    // 3) Green Palms - entregar
    if (assaultInformation[deliveryCoordinateX][2] != 277.0944)
        assaultInformation[deliveryCoordinateX][2] = 277.0944;

    if (assaultInformation[deliveryCoordinateY][2] != 1409.8733)
        assaultInformation[deliveryCoordinateY][2] = 1409.8733;

    if (assaultInformation[deliveryCoordinateZ][2] != 10.4332)
        assaultInformation[deliveryCoordinateZ][2] = 10.4332;

    // 4) Las Barrancas - robar
    if (assaultInformation[xCoordinateOfTheft][3] != -740.1541)
        assaultInformation[xCoordinateOfTheft][3] = -740.1541;

    if (assaultInformation[yCoordinateOfTheft][3] != 1602.3328)
        assaultInformation[yCoordinateOfTheft][3] = 1602.3328;

    if (assaultInformation[zCoordinateOfTheft][3] != 27.1172)
        assaultInformation[zCoordinateOfTheft][3] = 27.1172;

    // 4) The Panopticon - entregar
    if (assaultInformation[deliveryCoordinateX][3] != -510.8915)
        assaultInformation[deliveryCoordinateX][3] = -510.8915;

    if (assaultInformation[deliveryCoordinateY][3] != -82.2848)
        assaultInformation[deliveryCoordinateY][3] = -82.2848;

    if (assaultInformation[deliveryCoordinateZ][3] != 62.1745)
        assaultInformation[deliveryCoordinateZ][3] = 62.1745;

    // 5) Fort Carson - robar
    if (assaultInformation[xCoordinateOfTheft][4] != 110.4706)
        assaultInformation[xCoordinateOfTheft][4] = 110.4706;

    if (assaultInformation[yCoordinateOfTheft][4] != 1106.6663)
        assaultInformation[yCoordinateOfTheft][4] = 1106.6663;

    if (assaultInformation[zCoordinateOfTheft][4] != 13.6094)
        assaultInformation[zCoordinateOfTheft][4] = 13.6094;

    // 5) Red County - entregar
    if (assaultInformation[deliveryCoordinateX][4] != 1560.0460)
        assaultInformation[deliveryCoordinateX][4] = 1560.0460;

    if (assaultInformation[deliveryCoordinateY][4] != 14.2280)
        assaultInformation[deliveryCoordinateY][4] = 14.2280;

    if (assaultInformation[deliveryCoordinateZ][4] != 24.1641)
        assaultInformation[deliveryCoordinateZ][4] = 24.1641;

    // 6) Red County - robar
    if (assaultInformation[xCoordinateOfTheft][5] != -50.6113)
        assaultInformation[xCoordinateOfTheft][5] = -50.6113;

    if (assaultInformation[yCoordinateOfTheft][5] != -233.6617)
        assaultInformation[yCoordinateOfTheft][5] = -233.6617;

    if (assaultInformation[zCoordinateOfTheft][5] != 6.7646)
        assaultInformation[zCoordinateOfTheft][5] = 6.7646;

    // 6) Flint Range - entregar
    if (assaultInformation[deliveryCoordinateX][5] != -380.3593)
        assaultInformation[deliveryCoordinateX][5] = -380.3593;

    if (assaultInformation[deliveryCoordinateY][5] != -1402.9561)
        assaultInformation[deliveryCoordinateY][5] = -1402.9561;

    if (assaultInformation[deliveryCoordinateZ][5] != 24.7733)
        assaultInformation[deliveryCoordinateZ][5] = 24.7733;

    // 7) Montgomery - robar
    if (assaultInformation[xCoordinateOfTheft][6] != 1417.9377)
        assaultInformation[xCoordinateOfTheft][6] = 1417.9377;

    if (assaultInformation[yCoordinateOfTheft][6] != 222.2681)
        assaultInformation[yCoordinateOfTheft][6] = 222.2681;

    if (assaultInformation[zCoordinateOfTheft][6] != 19.5547)
        assaultInformation[zCoordinateOfTheft][6] = 19.5547;

    // 7) North Rock - entregar
    if (assaultInformation[deliveryCoordinateX][6] != 2378.1738)
        assaultInformation[deliveryCoordinateX][6] = 2378.1738;

    if (assaultInformation[deliveryCoordinateY][6] != -646.1629)
        assaultInformation[deliveryCoordinateY][6] = -646.1629;

    if (assaultInformation[deliveryCoordinateZ][6] != 127.3716)
        assaultInformation[deliveryCoordinateZ][6] = 127.3716;

    // 8) Polomino Creek - robar
    if (assaultInformation[xCoordinateOfTheft][7] != 2160.5359)
        assaultInformation[xCoordinateOfTheft][7] = 2160.5359;

    if (assaultInformation[yCoordinateOfTheft][7] != -101.7875)
        assaultInformation[yCoordinateOfTheft][7] = -101.7875;

    if (assaultInformation[zCoordinateOfTheft][7] != 2.7500)
        assaultInformation[zCoordinateOfTheft][7] = 2.7500;

    // 8) Fern Ridge - entregar
    if (assaultInformation[deliveryCoordinateX][7] != 884.6713)
        assaultInformation[deliveryCoordinateX][7] = 884.6713;

    if (assaultInformation[deliveryCoordinateY][7] != -32.1758)
        assaultInformation[deliveryCoordinateY][7] = -32.1758;

    if (assaultInformation[deliveryCoordinateZ][7] != 63.1953)
        assaultInformation[deliveryCoordinateZ][7] = 63.1953;

    // 9) Hilltop Farm - robar
    if (assaultInformation[xCoordinateOfTheft][8] != 1116.0779)
        assaultInformation[xCoordinateOfTheft][8] = 1116.0779;

    if (assaultInformation[yCoordinateOfTheft][8] != -297.6582)
        assaultInformation[yCoordinateOfTheft][8] = -297.6582;

    if (assaultInformation[zCoordinateOfTheft][8] != 74.3906)
        assaultInformation[zCoordinateOfTheft][8] = 74.3906;

    // 9) The Farm - entregar
    if (assaultInformation[deliveryCoordinateX][8] != -1050.8990)
        assaultInformation[deliveryCoordinateX][8] = -1050.8990;

    if (assaultInformation[deliveryCoordinateY][8] != -1206.2340)
        assaultInformation[deliveryCoordinateY][8] = -1206.2340;

    if (assaultInformation[deliveryCoordinateZ][8] != 128.9297)
        assaultInformation[deliveryCoordinateZ][8] = 128.9297;

    // 10) Mount Chiliad - robar
    if (assaultInformation[xCoordinateOfTheft][9] != -2410.1609)
        assaultInformation[xCoordinateOfTheft][9] = -2410.1609;

    if (assaultInformation[yCoordinateOfTheft][9] != -2189.8787)
        assaultInformation[yCoordinateOfTheft][9] = -2189.8787;

    if (assaultInformation[zCoordinateOfTheft][9] != 34.0391)
        assaultInformation[zCoordinateOfTheft][9] = 34.0391;

    // 10) Leafy Hollow - entregar
    if (assaultInformation[deliveryCoordinateX][9] != -1080.4067)
        assaultInformation[deliveryCoordinateX][9] = -1080.4067;

    if (assaultInformation[deliveryCoordinateY][9] != -1647.0546)
        assaultInformation[deliveryCoordinateY][9] = -1647.0546;

    if (assaultInformation[deliveryCoordinateZ][9] != 76.3323)
        assaultInformation[deliveryCoordinateZ][9] = 76.3323;

    // 11) Queens - robar
    if (assaultInformation[xCoordinateOfTheft][10] != -2456.1494)
        assaultInformation[xCoordinateOfTheft][10] = -2456.1494;

    if (assaultInformation[yCoordinateOfTheft][10] != 503.8811)
        assaultInformation[yCoordinateOfTheft][10] = 503.8811;

    if (assaultInformation[zCoordinateOfTheft][10] != 30.0781)
        assaultInformation[zCoordinateOfTheft][10] = 30.0781;

    // 11) Fallen Tree - entregar
    if (assaultInformation[deliveryCoordinateX][10] != -577.3101)
        assaultInformation[deliveryCoordinateX][10] = -577.3101;

    if (assaultInformation[deliveryCoordinateY][10] != -491.0469)
        assaultInformation[deliveryCoordinateY][10] = -491.0469;

    if (assaultInformation[deliveryCoordinateZ][10] != 25.5234)
        assaultInformation[deliveryCoordinateZ][10] = 25.5234;

    // 12) Vinewood - robar
    if (assaultInformation[xCoordinateOfTheft][11] != 725.3527)
        assaultInformation[xCoordinateOfTheft][11] = 725.3527;

    if (assaultInformation[yCoordinateOfTheft][11] != -1276.2394)
        assaultInformation[yCoordinateOfTheft][11] = -1276.2394;

    if (assaultInformation[zCoordinateOfTheft][11] != 13.6484)
        assaultInformation[zCoordinateOfTheft][11] = 13.6484;

    // 12) Shady Creeks - entregar
    if (assaultInformation[deliveryCoordinateX][11] != -1670.1283)
        assaultInformation[deliveryCoordinateX][11] = -1670.1283;

    if (assaultInformation[deliveryCoordinateY][11] != -2244.0122)
        assaultInformation[deliveryCoordinateY][11] = -2244.0122;

    if (assaultInformation[deliveryCoordinateZ][11] != 34.7460)
        assaultInformation[deliveryCoordinateZ][11] = 34.7460;

    // 13) Pirates in Mens Pants - robar
    if (assaultInformation[xCoordinateOfTheft][12] != 1965.0397)
        assaultInformation[xCoordinateOfTheft][12] = 1965.0397;

    if (assaultInformation[yCoordinateOfTheft][12] != 1623.0986)
        assaultInformation[yCoordinateOfTheft][12] = 1623.0986;

    if (assaultInformation[zCoordinateOfTheft][12] != 12.8628)
        assaultInformation[zCoordinateOfTheft][12] = 12.8628;

    // 13) Verdant Meadows - entregar
    if (assaultInformation[deliveryCoordinateX][12] != 424.7174)
        assaultInformation[deliveryCoordinateX][12] = 424.7174;

    if (assaultInformation[deliveryCoordinateY][12] != 2512.9126)
        assaultInformation[deliveryCoordinateY][12] = 2512.9126;

    if (assaultInformation[deliveryCoordinateZ][12] != 16.4844)
        assaultInformation[deliveryCoordinateZ][12] = 16.4844;

    if (assaultInformation[thiefCheckPoint] != INVALID_STREAMER_ID && skipThiefCheckPoint == false)  {
        DestroyDynamicCP(assaultInformation[thiefCheckPoint]);
        assaultInformation[thiefCheckPoint] = INVALID_STREAMER_ID;
    }

    if (assaultInformation[robberyLocationMapIcon] != INVALID_STREAMER_ID && skipRobberyLocationMapIcon == false)  {
        DestroyDynamicMapIcon(assaultInformation[robberyLocationMapIcon]);
        assaultInformation[robberyLocationMapIcon] = INVALID_STREAMER_ID;
    }

    return 1;
}