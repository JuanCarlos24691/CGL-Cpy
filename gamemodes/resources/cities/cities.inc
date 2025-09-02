#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    for (new i = 0; i < MAX_PLAYERS; i++)
        citiesInformation[cityChangeTextDrawing][i] = PlayerText:INVALID_TEXT_DRAW;

    new const Float:coordinatesOfBayside[2][4] = {
        { -2276.6492, 2292.4656, 4.9685, 271.7232 },
        { -2276.6492, 2292.4656, 4.9685, 271.7232 }
    };

    for (new i = 0; i < sizeof(coordinatesOfBayside); i++) {
        citiesInformation[xCoordinateOfBayside][i] = coordinatesOfBayside[i][0];
        citiesInformation[yCoordinateOfBayside][i] = coordinatesOfBayside[i][1];
        citiesInformation[zCoordinateOfBayside][i] = coordinatesOfBayside[i][2];
        citiesInformation[angleCordinateOfBayside][i] = coordinatesOfBayside[i][3];
    }

    new const Float:coordinatesOfQuebrados[19][4] = {
        { -1476.0894, 2693.7061, 55.7612, 180.4238 },
        { -1471.3157, 2650.1047, 55.8359, 47.9223 },
        { -1504.4373, 2694.8699, 55.8359, 177.4941 },
        { -1595.8979, 2690.7341, 54.9694, 179.4918 },
        { -1395.8397, 2553.4495, 60.0199, 62.6886 },
        { -1219.1835, 2675.3518, 46.1992, 18.7134 },
        { -1305.7151, 2700.8262, 50.0625, 136.5671 },
        { -1555.3629, 2598.0940, 55.8359, 272.0252 },
        { -1395.8397, 2553.4495, 60.0199, 62.6886 },
        { -1568.3815, 2568.4136, 68.4229, 277.5711 },
        { -1464.3225, 2586.2144, 55.8403, 357.2526 },
        { -1490.5735, 2524.5984, 55.8393, 2.2379 },
        { -1481.1796, 2630.0950, 58.7813, 179.4256 },
        { -1333.3325, 2583.4995, 89.4283, 81.0831 },
        { -1528.4492, 2524.0054, 55.8029, 1.7998 },
        { -1504.4373, 2694.8699, 55.8359, 177.4941 },
        { -1485.0529, 2568.4412, 55.8359, 86.4750 },
        { -1555.3629, 2598.0940, 55.8359, 272.0252 },
        { -1476.0894, 2693.7061, 55.7612, 180.4238 }
    };

    for (new i = 0; i < sizeof(coordinatesOfQuebrados); i++) {
        citiesInformation[xCoordinateOfQuebrados][i] = coordinatesOfQuebrados[i][0];
        citiesInformation[yCoordinateOfQuebrados][i] = coordinatesOfQuebrados[i][1];
        citiesInformation[zCoordinateOfQuebrados][i] = coordinatesOfQuebrados[i][2];
        citiesInformation[angleCordinateOfQuebrados][i] = coordinatesOfQuebrados[i][3];
    }

    new const Float:coordinatesOfLasPayasadas[2][4] = {
        { -320.3244, 2690.2229, 62.6848, 5.9128 },
        { -320.3244, 2690.2229, 62.6848, 5.9128 }
    };

    for (new i = 0; i < sizeof(coordinatesOfLasPayasadas); i++) {
        citiesInformation[xCoordinateOfLasPayasadas][i] = coordinatesOfLasPayasadas[i][0];
        citiesInformation[yCoordinateOfLasPayasadas][i] = coordinatesOfLasPayasadas[i][1];
        citiesInformation[zCoordinateOfLasPayasadas][i] = coordinatesOfLasPayasadas[i][2];
        citiesInformation[angleCordinateOfLasPayasadas][i] = coordinatesOfLasPayasadas[i][3];
    }

    new const Float:coordinatesOfLasBarrancas[2][4] = {
        { -774.8425, 1501.6632, 24.1917, 185.3570 },
        { -774.8425, 1501.6632, 24.1917, 185.3570 }
    };

    for (new i = 0; i < sizeof(coordinatesOfLasBarrancas); i++) {
        citiesInformation[xCoordinateOfLasBarrancas][i] = coordinatesOfLasBarrancas[i][0];
        citiesInformation[yCoordinateOfLasBarrancas][i] = coordinatesOfLasBarrancas[i][1];
        citiesInformation[zCoordinateOfLasBarrancas][i] = coordinatesOfLasBarrancas[i][2];
        citiesInformation[angleCordinateOfLasBarrancas][i] = coordinatesOfLasBarrancas[i][3];
    }

    new const Float:coordinatesOfFortCarson[2][4] = {
        { -321.8741, 1056.1453, 19.7422, 350.1529 },
        { -321.8741, 1056.1453, 19.7422, 350.1529 }
    };

    for (new i = 0; i < sizeof(coordinatesOfFortCarson); i++) {
        citiesInformation[xCoordinateOfFortCarson][i] = coordinatesOfFortCarson[i][0];
        citiesInformation[yCoordinateOfFortCarson][i] = coordinatesOfFortCarson[i][1];
        citiesInformation[zCoordinateOfFortCarson][i] = coordinatesOfFortCarson[i][2];
        citiesInformation[angleCordinateOfFortCarson][i] = coordinatesOfFortCarson[i][3];
    }

    new const Float:coordinatesOfBlueberry[2][4] = {
        { 201.2381, -65.7956, 1.5781, 182.0077 },
        { 201.2381, -65.7956, 1.5781, 182.0077 }
    };

    for (new i = 0; i < sizeof(coordinatesOfBlueberry); i++) {
        citiesInformation[xCoordinateOfBlueberry][i] = coordinatesOfBlueberry[i][0];
        citiesInformation[yCoordinateOfBlueberry][i] = coordinatesOfBlueberry[i][1];
        citiesInformation[zCoordinateOfBlueberry][i] = coordinatesOfBlueberry[i][2];
        citiesInformation[angleCordinateOfBlueberry][i] = coordinatesOfBlueberry[i][3];
    }

    new const Float:coordinatesOfMontGomery[2][4] = {
        { 1243.9482, 333.7048, 19.5547, 339.5964 },
        { 1243.9482, 333.7048, 19.5547, 339.5964 }
    };

    for (new i = 0; i < sizeof(coordinatesOfMontGomery); i++) {
        citiesInformation[xCoordinateOfMontGomery][i] = coordinatesOfMontGomery[i][0];
        citiesInformation[yCoordinateOfMontGomery][i] = coordinatesOfMontGomery[i][1];
        citiesInformation[zCoordinateOfMontGomery][i] = coordinatesOfMontGomery[i][2];
        citiesInformation[angleCordinateOfMontGomery][i] = coordinatesOfMontGomery[i][3];
    }

    new const Float:coordinatesOfPalomino[2][4] = {
        { 2263.9500, -80.9177, 26.5438, 180.2437 },
        { 2263.9500, -80.9177, 26.5438, 180.2437 }
    };

    for (new i = 0; i < sizeof(coordinatesOfPalomino); i++) {
        citiesInformation[xCoordinateOfPalomino][i] = coordinatesOfPalomino[i][0];
        citiesInformation[yCoordinateOfPalomino][i] = coordinatesOfPalomino[i][1];
        citiesInformation[zCoordinateOfPalomino][i] = coordinatesOfPalomino[i][2];
        citiesInformation[angleCordinateOfPalomino][i] = coordinatesOfPalomino[i][3];
    }

    new const Float:coordinatesOfDillimore[2][4] = {
        { 817.4366, -536.5574, 16.3359, 359.1603 },
        { 817.4366, -536.5574, 16.3359, 359.1603 }
    };

    for (new i = 0; i < sizeof(coordinatesOfDillimore); i++) {
        citiesInformation[xCoordinateOfDillimore][i] = coordinatesOfDillimore[i][0];
        citiesInformation[yCoordinateOfDillimore][i] = coordinatesOfDillimore[i][1];
        citiesInformation[zCoordinateOfDillimore][i] = coordinatesOfDillimore[i][2];
        citiesInformation[angleCordinateOfDillimore][i] = coordinatesOfDillimore[i][3];
    }

    new const Float:coordinatesOfAngelpine[2][4] = {
        { -2208.2190, -2313.0520, 30.6181, 231.5906 },
        { -2208.2190, -2313.0520, 30.6181, 231.5906 }
    };

    for (new i = 0; i < sizeof(coordinatesOfAngelpine); i++) {
        citiesInformation[xCoordinateOfAngelpine][i] = coordinatesOfAngelpine[i][0];
        citiesInformation[yCoordinateOfAngelpine][i] = coordinatesOfAngelpine[i][1];
        citiesInformation[zCoordinateOfAngelpine][i] = coordinatesOfAngelpine[i][2];
        citiesInformation[angleCordinateOfAngelpine][i] = coordinatesOfAngelpine[i][3];
    }

    new const Float:coordinatesOfSanFierro[2][4] = {
        { -2661.3879, 631.1097, 14.4531, 178.5771 },
        { -2661.3879, 631.1097, 14.4531, 178.5771 }
    };

    for (new i = 0; i < sizeof(coordinatesOfSanFierro); i++) {
        citiesInformation[xCoordinateOfSanFierro][i] = coordinatesOfSanFierro[i][0];
        citiesInformation[yCoordinateOfSanFierro][i] = coordinatesOfSanFierro[i][1];
        citiesInformation[zCoordinateOfSanFierro][i] = coordinatesOfSanFierro[i][2];
        citiesInformation[angleCordinateOfSanFierro][i] = coordinatesOfSanFierro[i][3];
    }

    new const Float:coordinatesOfLosSantos[2][4] = {
        { 1181.8850, -1323.3717, 13.5818, 267.5497 },
        { 1181.8850, -1323.3717, 13.5818, 267.5497 }
    };

    for (new i = 0; i < sizeof(coordinatesOfLosSantos); i++) {
        citiesInformation[xCoordinateOfLosSantos][i] = coordinatesOfLosSantos[i][0];
        citiesInformation[yCoordinateOfLosSantos][i] = coordinatesOfLosSantos[i][1];
        citiesInformation[zCoordinateOfLosSantos][i] = coordinatesOfLosSantos[i][2];
        citiesInformation[angleCordinateOfLosSantos][i] = coordinatesOfLosSantos[i][3];
    }

    new const Float:coordinatesOfLasVenturas[2][4] = {
        { 1603.9337, 1819.9984, 10.8280, 0.9919 },
        { 1603.9337, 1819.9984, 10.8280, 0.9919 }
    };

    for (new i = 0; i < sizeof(coordinatesOfLasVenturas); i++) {
        citiesInformation[xCoordinateOfLasVenturas][i] = coordinatesOfLasVenturas[i][0];
        citiesInformation[yCoordinateOfLasVenturas][i] = coordinatesOfLasVenturas[i][1];
        citiesInformation[zCoordinateOfLasVenturas][i] = coordinatesOfLasVenturas[i][2];
        citiesInformation[angleCordinateOfLasVenturas][i] = coordinatesOfLasVenturas[i][3];
    }

    citiesInformation[selectedCity] = random(MAX_CITIES);
    SendRconCommand("game.map %s", cityNames[citiesInformation[selectedCity]]);

    SetTimerEx("UpdateCity", 1000, true, "ii", citiesInformation[selectedCity], false);
    SetTimerEx("AnnounceChangeOfCity", 1000, true, "i", false);
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    DestroyCityChangeTextDrawing(playerid);
    return 1;
}