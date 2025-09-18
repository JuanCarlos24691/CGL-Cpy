#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    AddPClass();
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    RestoreSpawnSetInformation(playerid);
    return 1;
}

hook OnPlayerRequestSpawn(playerid) {
    if (hospitalInformation[playerid][hOInSkinSelection]) {
        if (accountInformation[playerid][skin] != GetPlayerSkin(playerid))
            accountInformation[playerid][skin] = GetPlayerSkin(playerid);

        SetPlayerSpawn(playerid, hospitalInformation[playerid][hOInteractionZoneXCoordinate], hospitalInformation[playerid][hOInteractionZoneYCoordinate], hospitalInformation[playerid][hOInteractionZoneZCoordinate], hospitalInformation[playerid][hOInteractionZoneAngle], true);
        RestoreHospitalInformation(playerid, true);
        return -1;
    }

    SetPlayerSpawn(playerid, 0.0, 0.0, 0.0, 0.0, true);
    return 1;
}

hook OnPlayerRequestClass(playerid, classid) {
    if (!hospitalInformation[playerid][hOInSkinSelection] && accountInformation[playerid][exists])
        SetPlayerSkin(playerid, accountInformation[playerid][skin]);

    if (hospitalInformation[playerid][hOInSkinSelection])
        PlayerView(playerid);
    return 1;
}

hook OnPlayerSpawn(playerid) {
    ResetPlayerWeapons(playerid);

    if (setPlayerSpawnInformation[playerid][weaponSlotOne] != 0)
        GivePlayerWeapon(playerid, WEAPON:setPlayerSpawnInformation[playerid][weaponSlotOne], setPlayerSpawnInformation[playerid][ammoSlotOne]);

    if (setPlayerSpawnInformation[playerid][weaponSlotTwo] != 0)
        GivePlayerWeapon(playerid, WEAPON:setPlayerSpawnInformation[playerid][weaponSlotTwo], setPlayerSpawnInformation[playerid][ammoSlotTwo]);

    if (setPlayerSpawnInformation[playerid][weaponSlotThree] != 0)
        GivePlayerWeapon(playerid, WEAPON:setPlayerSpawnInformation[playerid][weaponSlotThree], setPlayerSpawnInformation[playerid][ammoSlotThree]);

    if (setPlayerSpawnInformation[playerid][weaponSlotFour] != 0)
        GivePlayerWeapon(playerid, WEAPON:setPlayerSpawnInformation[playerid][weaponSlotFour], setPlayerSpawnInformation[playerid][ammoSlotFour]);

    if (setPlayerSpawnInformation[playerid][weaponSlotFive] != 0)
        GivePlayerWeapon(playerid, WEAPON:setPlayerSpawnInformation[playerid][weaponSlotFive], setPlayerSpawnInformation[playerid][ammoSlotFive]);

    if (setPlayerSpawnInformation[playerid][weaponSlotSix] != 0)
        GivePlayerWeapon(playerid, WEAPON:setPlayerSpawnInformation[playerid][weaponSlotSix], setPlayerSpawnInformation[playerid][ammoSlotSix]);

    if (setPlayerSpawnInformation[playerid][weaponSlotSeven] != 0)
        GivePlayerWeapon(playerid, WEAPON:setPlayerSpawnInformation[playerid][weaponSlotSeven], setPlayerSpawnInformation[playerid][ammoSlotSeven]);

    if (setPlayerSpawnInformation[playerid][weaponSlotEight] != 0)
        GivePlayerWeapon(playerid, WEAPON:setPlayerSpawnInformation[playerid][weaponSlotEight], setPlayerSpawnInformation[playerid][ammoSlotEight]);

    if (setPlayerSpawnInformation[playerid][weaponSlotNine] != 0)
        GivePlayerWeapon(playerid, WEAPON:setPlayerSpawnInformation[playerid][weaponSlotNine], setPlayerSpawnInformation[playerid][ammoSlotNine]);

    if (setPlayerSpawnInformation[playerid][weaponSlotTen] != 0)
        GivePlayerWeapon(playerid, WEAPON:setPlayerSpawnInformation[playerid][weaponSlotTen], setPlayerSpawnInformation[playerid][ammoSlotTen]);

    if (setPlayerSpawnInformation[playerid][weaponSlotEleven] != 0)
        GivePlayerWeapon(playerid, WEAPON:setPlayerSpawnInformation[playerid][weaponSlotEleven], setPlayerSpawnInformation[playerid][ammoSlotEleven]);

    if (setPlayerSpawnInformation[playerid][weaponSlotTwelve] != 0)
        GivePlayerWeapon(playerid, WEAPON:setPlayerSpawnInformation[playerid][weaponSlotTwelve], setPlayerSpawnInformation[playerid][ammoSlotTwelve]);

    if (setPlayerSpawnInformation[playerid][weaponSlotThirteen] != 0)
        GivePlayerWeapon(playerid, WEAPON:setPlayerSpawnInformation[playerid][weaponSlotThirteen], setPlayerSpawnInformation[playerid][ammoSlotThirteen]);

    if (setPlayerSpawnInformation[playerid][armour] != 0.0)
        SetPlayerArmour(playerid, setPlayerSpawnInformation[playerid][armour]);
    return 1;
}