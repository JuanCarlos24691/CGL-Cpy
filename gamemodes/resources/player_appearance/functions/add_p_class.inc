forward AddPClass();
public AddPClass() {
    for (new i = 0; i <= MAX_SKINS; i++) {
        if (i != 0 && i != 1 && i != 2 && i != 74 && i != 294 && i != 149 && i != 86 && i != 217 && i != 269 && i != 270 && i != 271 && i != 298) {
            new randomSpawnPosition;

            if (citiesInformation[selectedCity] == 1)
                randomSpawnPosition = random(19);
            else
                randomSpawnPosition = random(2);

            switch (citiesInformation[selectedCity]) {
                case 0: AddPlayerClass(i, citiesInformation[xCoordinateOfBayside][randomSpawnPosition], citiesInformation[yCoordinateOfBayside][randomSpawnPosition], citiesInformation[zCoordinateOfBayside][randomSpawnPosition], citiesInformation[angleCordinateOfBayside][randomSpawnPosition], WEAPON:0, 0, WEAPON:0, 0, WEAPON:0, 0);
                case 1: AddPlayerClass(i, citiesInformation[xCoordinateOfQuebrados][randomSpawnPosition], citiesInformation[yCoordinateOfQuebrados][randomSpawnPosition], citiesInformation[zCoordinateOfQuebrados][randomSpawnPosition], citiesInformation[angleCordinateOfQuebrados][randomSpawnPosition], WEAPON:0, 0, WEAPON:0, 0, WEAPON:0, 0);
                case 2: AddPlayerClass(i, citiesInformation[xCoordinateOfLasPayasadas][randomSpawnPosition], citiesInformation[yCoordinateOfLasPayasadas][randomSpawnPosition], citiesInformation[zCoordinateOfLasPayasadas][randomSpawnPosition], citiesInformation[angleCordinateOfLasPayasadas][randomSpawnPosition], WEAPON:0, 0, WEAPON:0, 0, WEAPON:0, 0);
                case 3: AddPlayerClass(i, citiesInformation[xCoordinateOfLasBarrancas][randomSpawnPosition], citiesInformation[yCoordinateOfLasBarrancas][randomSpawnPosition], citiesInformation[zCoordinateOfLasBarrancas][randomSpawnPosition], citiesInformation[angleCordinateOfLasBarrancas][randomSpawnPosition], WEAPON:0, 0, WEAPON:0, 0, WEAPON:0, 0);
                case 4: AddPlayerClass(i, citiesInformation[xCoordinateOfFortCarson][randomSpawnPosition], citiesInformation[yCoordinateOfFortCarson][randomSpawnPosition], citiesInformation[zCoordinateOfFortCarson][randomSpawnPosition], citiesInformation[angleCordinateOfFortCarson][randomSpawnPosition], WEAPON:0, 0, WEAPON:0, 0, WEAPON:0, 0);
                case 5: AddPlayerClass(i, citiesInformation[xCoordinateOfBlueberry][randomSpawnPosition], citiesInformation[yCoordinateOfBlueberry][randomSpawnPosition], citiesInformation[zCoordinateOfBlueberry][randomSpawnPosition], citiesInformation[angleCordinateOfBlueberry][randomSpawnPosition], WEAPON:0, 0, WEAPON:0, 0, WEAPON:0, 0);
                case 6: AddPlayerClass(i, citiesInformation[xCoordinateOfMontGomery][randomSpawnPosition], citiesInformation[yCoordinateOfMontGomery][randomSpawnPosition], citiesInformation[zCoordinateOfMontGomery][randomSpawnPosition], citiesInformation[angleCordinateOfMontGomery][randomSpawnPosition], WEAPON:0, 0, WEAPON:0, 0, WEAPON:0, 0);
                case 7: AddPlayerClass(i, citiesInformation[xCoordinateOfPalomino][randomSpawnPosition], citiesInformation[yCoordinateOfPalomino][randomSpawnPosition], citiesInformation[zCoordinateOfPalomino][randomSpawnPosition], citiesInformation[angleCordinateOfPalomino][randomSpawnPosition], WEAPON:0, 0, WEAPON:0, 0, WEAPON:0, 0);
                case 8: AddPlayerClass(i, citiesInformation[xCoordinateOfDillimore][randomSpawnPosition], citiesInformation[yCoordinateOfDillimore][randomSpawnPosition], citiesInformation[zCoordinateOfDillimore][randomSpawnPosition], citiesInformation[angleCordinateOfDillimore][randomSpawnPosition], WEAPON:0, 0, WEAPON:0, 0, WEAPON:0, 0);
                case 9: AddPlayerClass(i, citiesInformation[xCoordinateOfAngelpine][randomSpawnPosition], citiesInformation[yCoordinateOfAngelpine][randomSpawnPosition], citiesInformation[zCoordinateOfAngelpine][randomSpawnPosition], citiesInformation[angleCordinateOfAngelpine][randomSpawnPosition], WEAPON:0, 0, WEAPON:0, 0, WEAPON:0, 0);
                case 10: AddPlayerClass(i, citiesInformation[xCoordinateOfSanFierro][randomSpawnPosition], citiesInformation[yCoordinateOfSanFierro][randomSpawnPosition], citiesInformation[zCoordinateOfSanFierro][randomSpawnPosition], citiesInformation[angleCordinateOfSanFierro][randomSpawnPosition], WEAPON:0, 0, WEAPON:0, 0, WEAPON:0, 0);
                case 11: AddPlayerClass(i, citiesInformation[xCoordinateOfLosSantos][randomSpawnPosition], citiesInformation[yCoordinateOfLosSantos][randomSpawnPosition], citiesInformation[zCoordinateOfLosSantos][randomSpawnPosition], citiesInformation[angleCordinateOfLosSantos][randomSpawnPosition], WEAPON:0, 0, WEAPON:0, 0, WEAPON:0, 0);
                case 12: AddPlayerClass(i, citiesInformation[xCoordinateOfLasVenturas][randomSpawnPosition], citiesInformation[yCoordinateOfLasVenturas][randomSpawnPosition], citiesInformation[zCoordinateOfLasVenturas][randomSpawnPosition], citiesInformation[angleCordinateOfLasVenturas][randomSpawnPosition], WEAPON:0, 0, WEAPON:0, 0, WEAPON:0, 0);
            }
        }
    }
    return 1;
}