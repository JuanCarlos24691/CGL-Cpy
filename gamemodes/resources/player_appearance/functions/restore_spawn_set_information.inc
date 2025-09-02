forward RestoreSpawnSetInformation(const playerid);
public RestoreSpawnSetInformation(const playerid) {
    if (setPlayerSpawnInformation[playerid][RandomNumber] != 0)
        setPlayerSpawnInformation[playerid][RandomNumber] = 0;

    if (setPlayerSpawnInformation[playerid][skin] != 0)
        setPlayerSpawnInformation[playerid][skin] = 0;

    if (setPlayerSpawnInformation[playerid][spawnXCoordinate] != 0.0)
        setPlayerSpawnInformation[playerid][spawnXCoordinate] = 0.0;

    if (setPlayerSpawnInformation[playerid][spawnYCoordinate] != 0.0)
        setPlayerSpawnInformation[playerid][spawnYCoordinate] = 0.0;

    if (setPlayerSpawnInformation[playerid][spawnZCoordinate] != 0.0)
        setPlayerSpawnInformation[playerid][spawnZCoordinate] = 0.0;

    if (setPlayerSpawnInformation[playerid][spawnAngleCoordinate] != 0.0)
        setPlayerSpawnInformation[playerid][spawnAngleCoordinate] = 0.0;

    if (setPlayerSpawnInformation[playerid][inside] != 0)
        setPlayerSpawnInformation[playerid][inside] = 0;

    if (setPlayerSpawnInformation[playerid][virtualWorld] != 0)
        setPlayerSpawnInformation[playerid][virtualWorld] = 0;

    if (setPlayerSpawnInformation[playerid][assignedClan] != NO_TEAM)
        setPlayerSpawnInformation[playerid][assignedClan] = NO_TEAM;

    if (setPlayerSpawnInformation[playerid][weaponSlotOne] != 0)
        setPlayerSpawnInformation[playerid][weaponSlotOne] = 0;

    if (setPlayerSpawnInformation[playerid][ammoSlotOne] != 0)
        setPlayerSpawnInformation[playerid][ammoSlotOne] = 0;

    if (setPlayerSpawnInformation[playerid][weaponSlotTwo] != 0)
        setPlayerSpawnInformation[playerid][weaponSlotTwo] = 0;

    if (setPlayerSpawnInformation[playerid][ammoSlotTwo] != 0)
        setPlayerSpawnInformation[playerid][ammoSlotTwo] = 0;

    if (setPlayerSpawnInformation[playerid][weaponSlotThree] != 0)
        setPlayerSpawnInformation[playerid][weaponSlotThree] = 0;

    if (setPlayerSpawnInformation[playerid][ammoSlotThree] != 0)
        setPlayerSpawnInformation[playerid][ammoSlotThree] = 0;

    if (setPlayerSpawnInformation[playerid][weaponSlotFour] != 0)
        setPlayerSpawnInformation[playerid][weaponSlotFour] = 0;

    if (setPlayerSpawnInformation[playerid][ammoSlotFour] != 0)
        setPlayerSpawnInformation[playerid][ammoSlotFour] = 0;

    if (setPlayerSpawnInformation[playerid][weaponSlotFive] != 0)
        setPlayerSpawnInformation[playerid][weaponSlotFive] = 0;

    if (setPlayerSpawnInformation[playerid][ammoSlotFive] != 0)
        setPlayerSpawnInformation[playerid][ammoSlotFive] = 0;

    if (setPlayerSpawnInformation[playerid][weaponSlotSix] != 0)
        setPlayerSpawnInformation[playerid][weaponSlotSix] = 0;

    if (setPlayerSpawnInformation[playerid][ammoSlotSix] != 0)
        setPlayerSpawnInformation[playerid][ammoSlotSix] = 0;

    if (setPlayerSpawnInformation[playerid][weaponSlotSeven] != 0)
        setPlayerSpawnInformation[playerid][weaponSlotSeven] = 0;

    if (setPlayerSpawnInformation[playerid][ammoSlotSeven] != 0)
        setPlayerSpawnInformation[playerid][ammoSlotSeven] = 0;

    if (setPlayerSpawnInformation[playerid][weaponSlotEight] != 0)
        setPlayerSpawnInformation[playerid][weaponSlotEight] = 0;

    if (setPlayerSpawnInformation[playerid][ammoSlotEight] != 0)
        setPlayerSpawnInformation[playerid][ammoSlotEight] = 0;

    if (setPlayerSpawnInformation[playerid][weaponSlotNine] != 0)
        setPlayerSpawnInformation[playerid][weaponSlotNine] = 0;

    if (setPlayerSpawnInformation[playerid][ammoSlotNine] != 0)
        setPlayerSpawnInformation[playerid][ammoSlotNine] = 0;

    if (setPlayerSpawnInformation[playerid][weaponSlotTen] != 0)
        setPlayerSpawnInformation[playerid][weaponSlotTen] = 0;

    if (setPlayerSpawnInformation[playerid][ammoSlotTen] != 0)
        setPlayerSpawnInformation[playerid][ammoSlotTen] = 0;

    if (setPlayerSpawnInformation[playerid][weaponSlotEleven] != 0)
        setPlayerSpawnInformation[playerid][weaponSlotEleven] = 0;

    if (setPlayerSpawnInformation[playerid][ammoSlotEleven] != 0)
        setPlayerSpawnInformation[playerid][ammoSlotEleven] = 0;

    if (setPlayerSpawnInformation[playerid][weaponSlotTwelve] != 0)
        setPlayerSpawnInformation[playerid][weaponSlotTwelve] = 0;
    if (setPlayerSpawnInformation[playerid][ammoSlotTwelve] != 0)
        setPlayerSpawnInformation[playerid][ammoSlotTwelve] = 0;

    if (setPlayerSpawnInformation[playerid][weaponSlotThirteen] != 0)
        setPlayerSpawnInformation[playerid][weaponSlotThirteen] = 0;

    if (setPlayerSpawnInformation[playerid][ammoSlotThirteen] != 0)
        setPlayerSpawnInformation[playerid][ammoSlotThirteen] = 0;

    if (setPlayerSpawnInformation[playerid][armour] != 0.0)
        setPlayerSpawnInformation[playerid][armour] = 0.0;
    return 1;
}