forward SetPlayerSpawn(const playerid, const Float:playerPositionX, const Float:playerPositionY, const Float:playerPositionZ, const Float:playerAngle, const bool:forceSpawn);
public SetPlayerSpawn(const playerid, const Float:playerPositionX, const Float:playerPositionY, const Float:playerPositionZ, const Float:playerAngle, const bool:forceSpawn) {
    RestoreSpawnSetInformation(playerid);

    if (playerPositionX != 0.0 && playerPositionY != 0.0 && playerPositionZ != 0.0 && playerAngle != 0.0)
        SetDefaultSpawnSetInformation(playerid, playerPositionX, playerPositionY, playerPositionZ, playerAngle);
    else
        SetDefaultSpawnSetInformation(playerid, 0.0, 0.0, 0.0, 0.0);

    if (accountInformation[playerid][loggedIn]) {
        if (setPlayerSpawnInformation[playerid][skin] != accountInformation[playerid][skin])
            setPlayerSpawnInformation[playerid][skin] = accountInformation[playerid][skin];

        /* if (setPlayerSpawnInformation[playerid][assignedClan] != accountInformation[playerid][assignedClan])
            setPlayerSpawnInformation[playerid][assignedClan] = accountInformation[playerid][assignedClan]; */ // Activar solo si quieres que los jugadores de los clanes no reciban daño entre sí

        if (accountInformation[playerid][jailTime] > 0) {
            if (setPlayerSpawnInformation[playerid][spawnXCoordinate] != 197.6661)
                setPlayerSpawnInformation[playerid][spawnXCoordinate] = 197.6661;

            if (setPlayerSpawnInformation[playerid][spawnYCoordinate] != 173.8179)
                setPlayerSpawnInformation[playerid][spawnYCoordinate] = 173.8179;

            if (setPlayerSpawnInformation[playerid][spawnZCoordinate] != 1003.0234)
                setPlayerSpawnInformation[playerid][spawnZCoordinate] = 1003.0234;

            if (setPlayerSpawnInformation[playerid][spawnAngleCoordinate] != -1)
                setPlayerSpawnInformation[playerid][spawnAngleCoordinate] = -1;

            if (setPlayerSpawnInformation[playerid][inside] != 3)
                setPlayerSpawnInformation[playerid][inside] = 3;

            setPlayerSpawnInformation[playerid][virtualWorld] = ((playerid + 1) * 2654435760) & 0x7FFFFFFF;

            if (accountInformation[playerid][onDuty])
                accountInformation[playerid][onDuty] = false;

            if (playerJailTimer[playerid] == INVALID_TIMER)
                playerJailTimer[playerid] = SetTimerEx("UpdatePlayerJailTime", 1000, true, "i", playerid);
        } else if (accountInformation[playerid][administrativeLevel] >= 1 && accountInformation[playerid][administrativeLevel] <= 5 && accountInformation[playerid][onDuty]) {
            if (accountInformation[playerid][administrativeLevel] >= 1 && accountInformation[playerid][administrativeLevel] <= 5)
                setPlayerSpawnInformation[playerid][skin] = (accountInformation[playerid][administrativeLevel] == 4 || accountInformation[playerid][administrativeLevel] == 5) ? 294 : 217;

            GivePlayerWeapon(playerid, WEAPON_MINIGUN, 999999);
            SetPlayerHealth(playerid, FLOAT_INFINITY);

            if (!IsValidDynamic3DTextLabel(textOnDuty[playerid]))
                textOnDuty[playerid] = CreateDynamic3DTextLabel("Modo God", 0xde0909FF, 0.0, 0.0, 0.3, 40.0, playerid, .testlos = 1, .streamdistance = 40.0);
        }

        if (accountInformation[playerid][weaponSlotOne] != 0) {
            setPlayerSpawnInformation[playerid][weaponSlotOne] = accountInformation[playerid][weaponSlotOne];
            setPlayerSpawnInformation[playerid][ammoSlotOne] = accountInformation[playerid][ammoSlotOne];
        }

        if (accountInformation[playerid][weaponSlotTwo] != 0) {
            setPlayerSpawnInformation[playerid][weaponSlotTwo] = accountInformation[playerid][weaponSlotTwo];
            setPlayerSpawnInformation[playerid][ammoSlotTwo] = accountInformation[playerid][ammoSlotTwo];
        }

        if (accountInformation[playerid][weaponSlotThree] != 0) {
            setPlayerSpawnInformation[playerid][weaponSlotThree] = accountInformation[playerid][weaponSlotThree];
            setPlayerSpawnInformation[playerid][ammoSlotThree] = accountInformation[playerid][ammoSlotThree];
        }

        if (accountInformation[playerid][weaponSlotFour] != 0) {
            setPlayerSpawnInformation[playerid][weaponSlotFour] = accountInformation[playerid][weaponSlotFour];
            setPlayerSpawnInformation[playerid][ammoSlotFour] = accountInformation[playerid][ammoSlotFour];
        }

        if (accountInformation[playerid][weaponSlotFive] != 0) {
            setPlayerSpawnInformation[playerid][weaponSlotFive] = accountInformation[playerid][weaponSlotFive];
            setPlayerSpawnInformation[playerid][ammoSlotFive] = accountInformation[playerid][ammoSlotFive];
        }

        if (accountInformation[playerid][weaponSlotSix] != 0) {
            setPlayerSpawnInformation[playerid][weaponSlotSix] = accountInformation[playerid][weaponSlotSix];
            setPlayerSpawnInformation[playerid][ammoSlotSix] = accountInformation[playerid][ammoSlotSix];
        }

        if (accountInformation[playerid][weaponSlotSeven] != 0) {
            setPlayerSpawnInformation[playerid][weaponSlotSeven] = accountInformation[playerid][weaponSlotSeven];
            setPlayerSpawnInformation[playerid][ammoSlotSeven] = accountInformation[playerid][ammoSlotSeven];
        }

        if (accountInformation[playerid][weaponSlotEight] != 0) {
            setPlayerSpawnInformation[playerid][weaponSlotEight] = accountInformation[playerid][weaponSlotEight];
            setPlayerSpawnInformation[playerid][ammoSlotEight] = accountInformation[playerid][ammoSlotEight];
        }

        if (accountInformation[playerid][weaponSlotNine] != 0) {
            setPlayerSpawnInformation[playerid][weaponSlotNine] = accountInformation[playerid][weaponSlotNine];
            setPlayerSpawnInformation[playerid][ammoSlotNine] = accountInformation[playerid][ammoSlotNine];
        }

        if (accountInformation[playerid][weaponSlotTen] != 0) {
            setPlayerSpawnInformation[playerid][weaponSlotTen] = accountInformation[playerid][weaponSlotTen];
            setPlayerSpawnInformation[playerid][ammoSlotTen] = accountInformation[playerid][ammoSlotTen];
        }

        if (accountInformation[playerid][weaponSlotEleven] != 0) {
            setPlayerSpawnInformation[playerid][weaponSlotEleven] = accountInformation[playerid][weaponSlotEleven];
            setPlayerSpawnInformation[playerid][ammoSlotEleven] = accountInformation[playerid][ammoSlotEleven];
        }

        if (accountInformation[playerid][weaponSlotTwelve] != 0) {
            setPlayerSpawnInformation[playerid][weaponSlotTwelve] = accountInformation[playerid][weaponSlotTwelve];
            setPlayerSpawnInformation[playerid][ammoSlotTwelve] = accountInformation[playerid][ammoSlotTwelve];
        }

        if (accountInformation[playerid][weaponSlotThirteen] != 0) {
            setPlayerSpawnInformation[playerid][weaponSlotThirteen] = accountInformation[playerid][weaponSlotThirteen];
            setPlayerSpawnInformation[playerid][ammoSlotThirteen] = accountInformation[playerid][ammoSlotThirteen];
        }

        if (accountInformation[playerid][armour] != 0.0)
            setPlayerSpawnInformation[playerid][armour] = accountInformation[playerid][armour];
    }

    AssignPlayerName(playerid);
    AssignPlayerColor(playerid);

    SetSpawnInfo(playerid, setPlayerSpawnInformation[playerid][assignedClan], setPlayerSpawnInformation[playerid][skin], setPlayerSpawnInformation[playerid][spawnXCoordinate], setPlayerSpawnInformation[playerid][spawnYCoordinate], setPlayerSpawnInformation[playerid][spawnZCoordinate], setPlayerSpawnInformation[playerid][spawnAngleCoordinate], WEAPON:0, 0, WEAPON:0, 0, WEAPON:0, 0);
    SetPlayerInterior(playerid, setPlayerSpawnInformation[playerid][inside]);
    SetPlayerVirtualWorld(playerid, setPlayerSpawnInformation[playerid][virtualWorld]);

    if (forceSpawn)
        SpawnPlayer(playerid);
    return 1;
}