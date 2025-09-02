forward SetDefaultSpawnSetInformation(const playerid, const Float:playerPositionX, const Float:playerPositionY, const Float:playerPositionZ, const Float:playerAngle);
public SetDefaultSpawnSetInformation(const playerid, const Float:playerPositionX, const Float:playerPositionY, const Float:playerPositionZ, const Float:playerAngle) {
    if (setPlayerSpawnInformation[playerid][skin] == 0)
        setPlayerSpawnInformation[playerid][skin] = GetPlayerSkin(playerid);

    if (playerPositionX != 0.0 && playerPositionY != 0.0 && playerPositionZ != 0.0 && playerAngle != 0.0) {
        if (setPlayerSpawnInformation[playerid][spawnXCoordinate] != playerPositionX)
            setPlayerSpawnInformation[playerid][spawnXCoordinate] = playerPositionX;

        if (setPlayerSpawnInformation[playerid][spawnYCoordinate] != playerPositionY)
            setPlayerSpawnInformation[playerid][spawnYCoordinate] = playerPositionY;

        if (setPlayerSpawnInformation[playerid][spawnZCoordinate] != playerPositionZ)
            setPlayerSpawnInformation[playerid][spawnZCoordinate] = playerPositionZ;

        if (setPlayerSpawnInformation[playerid][spawnAngleCoordinate] != playerAngle)
            setPlayerSpawnInformation[playerid][spawnAngleCoordinate] = playerAngle;
    } else {
        if (citiesInformation[selectedCity] == 1)
            setPlayerSpawnInformation[playerid][RandomNumber] = random(19);
        else
            setPlayerSpawnInformation[playerid][RandomNumber] = random(2);

        switch (citiesInformation[selectedCity]) {
            case 0: { // Bayside
                if (setPlayerSpawnInformation[playerid][spawnXCoordinate] != citiesInformation[xCoordinateOfBayside][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnXCoordinate] = citiesInformation[xCoordinateOfBayside][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnYCoordinate] != citiesInformation[yCoordinateOfBayside][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnYCoordinate] = citiesInformation[yCoordinateOfBayside][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnZCoordinate] != citiesInformation[zCoordinateOfBayside][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnZCoordinate] = citiesInformation[zCoordinateOfBayside][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnAngleCoordinate] != citiesInformation[angleCordinateOfBayside][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnAngleCoordinate] = citiesInformation[angleCordinateOfBayside][setPlayerSpawnInformation[playerid][RandomNumber]];
            }
            case 1: { // El Quebrados
                if (setPlayerSpawnInformation[playerid][spawnXCoordinate] != citiesInformation[xCoordinateOfQuebrados][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnXCoordinate] = citiesInformation[xCoordinateOfQuebrados][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnYCoordinate] != citiesInformation[yCoordinateOfQuebrados][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnYCoordinate] = citiesInformation[yCoordinateOfQuebrados][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnZCoordinate] != citiesInformation[zCoordinateOfQuebrados][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnZCoordinate] = citiesInformation[zCoordinateOfQuebrados][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnAngleCoordinate] != citiesInformation[angleCordinateOfQuebrados][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnAngleCoordinate] = citiesInformation[angleCordinateOfQuebrados][setPlayerSpawnInformation[playerid][RandomNumber]];
            }
            case 2: { // Las Payasadas
                if (setPlayerSpawnInformation[playerid][spawnXCoordinate] != citiesInformation[xCoordinateOfLasPayasadas][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnXCoordinate] = citiesInformation[xCoordinateOfLasPayasadas][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnYCoordinate] != citiesInformation[yCoordinateOfLasPayasadas][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnYCoordinate] = citiesInformation[yCoordinateOfLasPayasadas][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnZCoordinate] != citiesInformation[zCoordinateOfLasPayasadas][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnZCoordinate] = citiesInformation[zCoordinateOfLasPayasadas][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnAngleCoordinate] != citiesInformation[angleCordinateOfLasPayasadas][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnAngleCoordinate] = citiesInformation[angleCordinateOfLasPayasadas][setPlayerSpawnInformation[playerid][RandomNumber]];
            }
            case 3: { // Las Barrancas
                if (setPlayerSpawnInformation[playerid][spawnXCoordinate] != citiesInformation[xCoordinateOfLasBarrancas][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnXCoordinate] = citiesInformation[xCoordinateOfLasBarrancas][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnYCoordinate] != citiesInformation[yCoordinateOfLasBarrancas][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnYCoordinate] = citiesInformation[yCoordinateOfLasBarrancas][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnZCoordinate] != citiesInformation[zCoordinateOfLasBarrancas][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnZCoordinate] = citiesInformation[zCoordinateOfLasBarrancas][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnAngleCoordinate] != citiesInformation[angleCordinateOfLasBarrancas][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnAngleCoordinate] = citiesInformation[angleCordinateOfLasBarrancas][setPlayerSpawnInformation[playerid][RandomNumber]];
            }
            case 4: { // Fort Carson
                if (setPlayerSpawnInformation[playerid][spawnXCoordinate] != citiesInformation[xCoordinateOfFortCarson][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnXCoordinate] = citiesInformation[xCoordinateOfFortCarson][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnYCoordinate] != citiesInformation[yCoordinateOfFortCarson][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnYCoordinate] = citiesInformation[yCoordinateOfFortCarson][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnZCoordinate] != citiesInformation[zCoordinateOfFortCarson][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnZCoordinate] = citiesInformation[zCoordinateOfFortCarson][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnAngleCoordinate] != citiesInformation[angleCordinateOfFortCarson][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnAngleCoordinate] = citiesInformation[angleCordinateOfFortCarson][setPlayerSpawnInformation[playerid][RandomNumber]];
            }
            case 5: { // Blueberry
                if (setPlayerSpawnInformation[playerid][spawnXCoordinate] != citiesInformation[xCoordinateOfBlueberry][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnXCoordinate] = citiesInformation[xCoordinateOfBlueberry][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnYCoordinate] != citiesInformation[yCoordinateOfBlueberry][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnYCoordinate] = citiesInformation[yCoordinateOfBlueberry][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnZCoordinate] != citiesInformation[zCoordinateOfBlueberry][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnZCoordinate] = citiesInformation[zCoordinateOfBlueberry][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnAngleCoordinate] != citiesInformation[angleCordinateOfBlueberry][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnAngleCoordinate] = citiesInformation[angleCordinateOfBlueberry][setPlayerSpawnInformation[playerid][RandomNumber]];
            }
            case 6: { // Montgomery
                if (setPlayerSpawnInformation[playerid][spawnXCoordinate] != citiesInformation[xCoordinateOfMontGomery][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnXCoordinate] = citiesInformation[xCoordinateOfMontGomery][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnYCoordinate] != citiesInformation[yCoordinateOfMontGomery][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnYCoordinate] = citiesInformation[yCoordinateOfMontGomery][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnZCoordinate] != citiesInformation[zCoordinateOfMontGomery][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnZCoordinate] = citiesInformation[zCoordinateOfMontGomery][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnAngleCoordinate] != citiesInformation[angleCordinateOfMontGomery][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnAngleCoordinate] = citiesInformation[angleCordinateOfMontGomery][setPlayerSpawnInformation[playerid][RandomNumber]];
            }
            case 7: { // Palomino Creek
                if (setPlayerSpawnInformation[playerid][spawnXCoordinate] != citiesInformation[xCoordinateOfPalomino][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnXCoordinate] = citiesInformation[xCoordinateOfPalomino][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnYCoordinate] != citiesInformation[yCoordinateOfPalomino][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnYCoordinate] = citiesInformation[yCoordinateOfPalomino][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnZCoordinate] != citiesInformation[zCoordinateOfPalomino][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnZCoordinate] = citiesInformation[zCoordinateOfPalomino][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnAngleCoordinate] != citiesInformation[angleCordinateOfPalomino][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnAngleCoordinate] = citiesInformation[angleCordinateOfPalomino][setPlayerSpawnInformation[playerid][RandomNumber]];
            }
            case 8: { // Dillimore
                if (setPlayerSpawnInformation[playerid][spawnXCoordinate] != citiesInformation[xCoordinateOfDillimore][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnXCoordinate] = citiesInformation[xCoordinateOfDillimore][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnYCoordinate] != citiesInformation[yCoordinateOfDillimore][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnYCoordinate] = citiesInformation[yCoordinateOfDillimore][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnZCoordinate] != citiesInformation[zCoordinateOfDillimore][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnZCoordinate] = citiesInformation[zCoordinateOfDillimore][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnAngleCoordinate] != citiesInformation[angleCordinateOfDillimore][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnAngleCoordinate] = citiesInformation[angleCordinateOfDillimore][setPlayerSpawnInformation[playerid][RandomNumber]];
            }
            case 9: { // Angel Pine
                if (setPlayerSpawnInformation[playerid][spawnXCoordinate] != citiesInformation[xCoordinateOfAngelpine][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnXCoordinate] = citiesInformation[xCoordinateOfAngelpine][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnYCoordinate] != citiesInformation[yCoordinateOfAngelpine][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnYCoordinate] = citiesInformation[yCoordinateOfAngelpine][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnZCoordinate] != citiesInformation[zCoordinateOfAngelpine][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnZCoordinate] = citiesInformation[zCoordinateOfAngelpine][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnAngleCoordinate] != citiesInformation[angleCordinateOfAngelpine][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnAngleCoordinate] = citiesInformation[angleCordinateOfAngelpine][setPlayerSpawnInformation[playerid][RandomNumber]];
            }
            case 10: { // San Fierro
                if (setPlayerSpawnInformation[playerid][spawnXCoordinate] != citiesInformation[xCoordinateOfSanFierro][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnXCoordinate] = citiesInformation[xCoordinateOfSanFierro][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnYCoordinate] != citiesInformation[yCoordinateOfSanFierro][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnYCoordinate] = citiesInformation[yCoordinateOfSanFierro][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnZCoordinate] != citiesInformation[zCoordinateOfSanFierro][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnZCoordinate] = citiesInformation[zCoordinateOfSanFierro][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnAngleCoordinate] != citiesInformation[angleCordinateOfSanFierro][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnAngleCoordinate] = citiesInformation[angleCordinateOfSanFierro][setPlayerSpawnInformation[playerid][RandomNumber]];
            }
            case 11: { // Los Santos
                if (setPlayerSpawnInformation[playerid][spawnXCoordinate] != citiesInformation[xCoordinateOfLosSantos][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnXCoordinate] = citiesInformation[xCoordinateOfLosSantos][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnYCoordinate] != citiesInformation[yCoordinateOfLosSantos][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnYCoordinate] = citiesInformation[yCoordinateOfLosSantos][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnZCoordinate] != citiesInformation[zCoordinateOfLosSantos][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnZCoordinate] = citiesInformation[zCoordinateOfLosSantos][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnAngleCoordinate] != citiesInformation[angleCordinateOfLosSantos][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnAngleCoordinate] = citiesInformation[angleCordinateOfLosSantos][setPlayerSpawnInformation[playerid][RandomNumber]];
            }
            case 12: { // Las Venturas
                if (setPlayerSpawnInformation[playerid][spawnXCoordinate] != citiesInformation[xCoordinateOfLasVenturas][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnXCoordinate] = citiesInformation[xCoordinateOfLasVenturas][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnYCoordinate] != citiesInformation[yCoordinateOfLasVenturas][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnYCoordinate] = citiesInformation[yCoordinateOfLasVenturas][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnZCoordinate] != citiesInformation[zCoordinateOfLasVenturas][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnZCoordinate] = citiesInformation[zCoordinateOfLasVenturas][setPlayerSpawnInformation[playerid][RandomNumber]];
                
                if (setPlayerSpawnInformation[playerid][spawnAngleCoordinate] != citiesInformation[angleCordinateOfLasVenturas][setPlayerSpawnInformation[playerid][RandomNumber]])
                    setPlayerSpawnInformation[playerid][spawnAngleCoordinate] = citiesInformation[angleCordinateOfLasVenturas][setPlayerSpawnInformation[playerid][RandomNumber]];
            }
        }
    }

    if (setPlayerSpawnInformation[playerid][inside] != 0)
        setPlayerSpawnInformation[playerid][inside] = 0;

    if (setPlayerSpawnInformation[playerid][virtualWorld] != 0)
        setPlayerSpawnInformation[playerid][virtualWorld] = 0;

    if (setPlayerSpawnInformation[playerid][assignedClan] != NO_TEAM)
        setPlayerSpawnInformation[playerid][assignedClan] = NO_TEAM;

    if (setPlayerSpawnInformation[playerid][weaponSlotTwo] != 9) {
        setPlayerSpawnInformation[playerid][weaponSlotTwo] = 9;
        setPlayerSpawnInformation[playerid][ammoSlotTwo] = 1;
    }

    if (setPlayerSpawnInformation[playerid][weaponSlotThree] != 24) {
        setPlayerSpawnInformation[playerid][weaponSlotThree] = 24;
        setPlayerSpawnInformation[playerid][ammoSlotThree] = 150;
    }

    if (setPlayerSpawnInformation[playerid][weaponSlotFour] != 26) {
        setPlayerSpawnInformation[playerid][weaponSlotFour] = 26;
        setPlayerSpawnInformation[playerid][ammoSlotFour] = 400;
    }

    if (setPlayerSpawnInformation[playerid][weaponSlotFive] != 32) {
        setPlayerSpawnInformation[playerid][weaponSlotFive] = 32;
        setPlayerSpawnInformation[playerid][ammoSlotFive] = 1000;
    }

    if (setPlayerSpawnInformation[playerid][weaponSlotSix] != 31) {
        setPlayerSpawnInformation[playerid][weaponSlotSix] = 31;
        setPlayerSpawnInformation[playerid][ammoSlotSix] = 500;
    }

    if (setPlayerSpawnInformation[playerid][weaponSlotSeven] != 34) {
        setPlayerSpawnInformation[playerid][weaponSlotSeven] = 34;
        setPlayerSpawnInformation[playerid][ammoSlotSeven] = 100;
    }
    return 1;
}