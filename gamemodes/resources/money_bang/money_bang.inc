#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    new const Float:moneyBangCoordinates[MAX_MONEY_BANG][3] = {
        {-2432.5957, -1620.1436, 526.8685},
        {-2528.2793, -1025.5176, 102.1070},
        {-2172.0171, -1843.8499, 214.7547},
        {-2432.5957, -1620.1436, 526.8685},
        {-2528.2793, -1025.5176, 102.1070},
        {-8.2656, -266.3369, 11.9437},
        {-2120.4558, -1300.9391, 77.9728},
        {-1956.4731, 764.5522, 55.7254},
        {-1963.7705, 487.2920, 31.9687},
        {-2542.7930, -353.2107, 37.0313},
        {-1509.4563, 1370.2919, 3.0108},
        {-2189.1086, -269.0943, 40.7195},
        {-1933.9781, 211.7276, 25.3226},
        {-2576.5107, 1187.6368, 41.8775},
        {2667.6277, 2307.3535, 24.0614},
        {-1074.6843, -1234.5952, 129.2188},
        {-2807.5503, 1162.7417, 20.3125},
        {-2268.7791, 2664.1946, 73.5156},
        {-1205.4790, -2349.8513, 2.0340},
        {-743.1037, -1933.7535, 7.9191},
        {471.4406, -269.6804, 7.3002},
        {1271.9558, 295.4855, 20.6563},
        {2189.4036, -697.5020, 56.4319},
        {2372.1699, -2135.6299, 27.1750},
        {2274.2246, -2563.0544, 19.9043},
        {1926.8618, -2692.0869, 19.3672},
        {1024.0765, -313.3355, 73.9931},
        {1629.1864, 7.0049, 9.2344},
        {2146.2021, 94.8287, 27.1627},
        {2634.9646, 263.1964, 54.3462},
        {2581.4714, -1473.8392, 24.0000},
        {2438.9673, -1901.5713, 13.5534},
        {2476.8198, -1972.9170, 16.6281},
        {2545.9392, -2248.8154, 13.5469},
        {836.7835, -1856.7886, 8.3893},
        {664.9876, -1380.3512, 21.8417},
        {588.3129, -1555.4790, 15.6424},
        {459.0752, -1276.6705, 15.4114},
        {770.7070, -1084.6780, 24.0859},
        {1435.1244, -1093.3391, 17.5879},
        {2792.7664, 698.0993, 9.8893},
        {2892.5449, 948.4681, 10.6730},
        {2345.3472, 1293.8081, 67.4688},
        {2243.4036, 1131.7672, 10.8203},
        {-781.4629, 2147.3931, 60.3828},
        {-86.8024, 2642.1128, 58.6177},
        {384.6790, 2435.0015, 16.5000},
        {826.2070, 2665.7825, 28.9297},
        {1047.2354, 2921.5979, 48.3125},
        {1400.8108, 2767.2092, 10.8203},
        {2465.7429, 2226.0747, 10.8203},
        {2479.1763, 1921.0494, 10.4679},
        {1765.3286, 592.7733, 13.0000},
        {586.6403, 392.7565, 15.8715},
        {1407.5444, 2142.0837, 12.0156},
        {2626.3064, 2417.3677, 10.8132},
        {2879.5156, 1595.7340, 10.8203},
        {2819.0471, 1670.2314, 10.8203}
    };

    for (new i = 0; i < MAX_MONEY_BANG; i++) {
        moneyBangInformation[moneyBangXCoordinate][i] = moneyBangCoordinates[i][0];
        moneyBangInformation[moneyBangYCoordinate][i] = moneyBangCoordinates[i][1];
        moneyBangInformation[moneyBangZCoordinate][i] = moneyBangCoordinates[i][2];
    }

    moneyBangInformation[moneyBangIndex] = -1;
    moneyBangInformation[moneyBagPickup] = INVALID_PICKUP;

    CreateMoneyBang();

    SetTimerEx("UpdateMoneyBang", 1000, true);
    SetTimerEx("MoneyBangAnnouncements", 1000, true);
    return 1;
}

hook OnPlayerPickUpDynPickup(playerid, pickupid) {
    if (pickupid == moneyBangInformation[moneyBagPickup] && moneyBangInformation[moneyBagPickup] != INVALID_PICKUP) {
        new randonMoney = 450000 + random(300001);
        accountInformation[playerid][cashInHand] += randonMoney;

        GameTextForPlayer(playerid, "~w~Encontraste ~g~$%d", 4500, 4, randonMoney);
        va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE2"Felicidades!! Encontraste La Bolsa Del Dinero.");

        va_SendClientMessageToAll(-1, ""COLOR_AQUAMARINE"%s (%d) "COLOR_AQUAMARINE2"En Encontró La MoneyBag Con "COLOR_AQUAMARINE"$%d "COLOR_AQUAMARINE2"Dentro, En "COLOR_AQUAMARINE"%s", accountInformation[playerid][name], playerid, randonMoney, moneyBangLocations[moneyBangInformation[moneyBangIndex]]);
        ApplyAnimation(playerid, "CARRY", "liftup", 3.0, false, false, false, false, SYNC_NONE);

        RestoreMoneyBangInformation();

        if (!moneyBangInformation[moneyBangLocated])
            moneyBangInformation[moneyBangLocated] = true;
    }
    return 1;
}