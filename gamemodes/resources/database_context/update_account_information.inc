#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    for (new i = 0; i < MAX_PLAYERS; i++)
        accountInformation[i][assignedClan] = NO_TEAM;
    return 1;
}

hook OnPlayerRequestSpawn(playerid) {
    accountInformationOld[playerid] = accountInformation[playerid];
    return 1;
}

hook OnPlayerStateChange(playerid, PLAYER_STATE:newstate, PLAYER_STATE:oldstate) {
    if (newstate == PLAYER_STATE_NONE || newstate == PLAYER_STATE_NONE || newstate == PLAYER_STATE_WASTED || newstate == PLAYER_STATE_SPAWNED || newstate == PLAYER_STATE_SPECTATING && accountInformation[playerid][inGame])
        accountInformation[playerid][inGame] = false;
    else
        accountInformation[playerid][inGame] = true;
    return 1;
}

hook OnPlayerUpdate(playerid) {
    if (accountInformation[playerid][lastUpdate] != GetTickCount())
        accountInformation[playerid][lastUpdate] = GetTickCount();

    UpdateAccountInformation(playerid);
    UpdateWeaponsInformation(playerid);
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    if (accountInformation[playerid][inGame])
        accountInformation[playerid][inGame] = false;

    if (accountInformation[playerid][loggedIn]) {
        if (accountInformation[playerid][lifeInsurance] == 0) {
            if (accountInformation[playerid][weaponSlotOne] != 0 && accountInformation[playerid][weaponSlotOne] != 9) {
                accountInformation[playerid][weaponSlotOne] = 0;
                accountInformation[playerid][ammoSlotOne] = 0;
            }

            if (accountInformation[playerid][weaponSlotTwo] != 0 && accountInformation[playerid][weaponSlotOne] != 24) {
                accountInformation[playerid][weaponSlotTwo] = 0;
                accountInformation[playerid][ammoSlotTwo] = 0;
            }

            if (accountInformation[playerid][weaponSlotThree] != 0 && accountInformation[playerid][weaponSlotOne] != 26) {
                accountInformation[playerid][weaponSlotThree] = 0;
                accountInformation[playerid][ammoSlotThree] = 0;
            }

            if (accountInformation[playerid][weaponSlotFour] != 0 && accountInformation[playerid][weaponSlotOne] != 32) {
                accountInformation[playerid][weaponSlotFour] = 0;
                accountInformation[playerid][ammoSlotFour] = 0;
            }

            if (accountInformation[playerid][weaponSlotFive] != 0 && accountInformation[playerid][weaponSlotOne] != 31) {
                accountInformation[playerid][weaponSlotFive] = 0;
                accountInformation[playerid][ammoSlotFive] = 0;
            }

            if (accountInformation[playerid][weaponSlotSix] != 0 && accountInformation[playerid][weaponSlotOne] != 34) {
                accountInformation[playerid][weaponSlotSix] = 0;
                accountInformation[playerid][ammoSlotSix] = 0;
            }

            if (accountInformation[playerid][weaponSlotSeven] != 0) {
                accountInformation[playerid][weaponSlotSeven] = 0;
                accountInformation[playerid][ammoSlotSeven] = 0;
            }

            if (accountInformation[playerid][weaponSlotEight] != 0) {
                accountInformation[playerid][weaponSlotEight] = 0;
                accountInformation[playerid][ammoSlotEight] = 0;
            }

            if (accountInformation[playerid][weaponSlotNine] != 0) {
                accountInformation[playerid][weaponSlotNine] = 0;
                accountInformation[playerid][ammoSlotNine] = 0;
            }

            if (accountInformation[playerid][weaponSlotTen] != 0) {
                accountInformation[playerid][weaponSlotTen] = 0;
                accountInformation[playerid][ammoSlotTen] = 0;
            }

            if (accountInformation[playerid][weaponSlotEleven] != 0) {
                accountInformation[playerid][weaponSlotEleven] = 0;
                accountInformation[playerid][ammoSlotEleven] = 0;
            }

            if (accountInformation[playerid][weaponSlotTwelve] != 0) {
                accountInformation[playerid][weaponSlotTwelve] = 0;
                accountInformation[playerid][ammoSlotTwelve] = 0;
            }

            if (accountInformation[playerid][weaponSlotThirteen] != 0) {
                accountInformation[playerid][weaponSlotThirteen] = 0;
                accountInformation[playerid][ammoSlotThirteen] = 0;
            }

            if (accountInformation[playerid][armour] != 0)
                accountInformation[playerid][armour] = 0;
        }

        inline const ISaveAccountInformation(const result) {
            if (result == 0)
                return printf("[CUENTA] Se ha producido un error al intentar guardar los datos de la cuenta (ID: %d).", playerid);

            printf("[CUENTA] Se ha guardado la cuenta (ID: %d).", playerid);
        }

        SaveAccountInformation(playerid, accountInformation[playerid][name], using inline ISaveAccountInformation);
    }

    RestoreAccountInformation(playerid);
    RestoreAccountInformationOld(playerid);
    return 1;
}

forward UpdateAccountInformation(const playerid);
public UpdateAccountInformation(const playerid) {
    ResetPlayerMoney(playerid);
    GivePlayerMoney(playerid, accountInformation[playerid][cashInHand]);

    SetPlayerScore(playerid, accountInformation[playerid][level]);

    if (!accountInformation[playerid][loggedIn])
        return 1;

    if (isequal(accountInformation[playerid][name], accountInformationOld[playerid][name], true) &&
            accountInformation[playerid][skin] == accountInformationOld[playerid][skin] &&
            accountInformation[playerid][level] == accountInformationOld[playerid][level] &&
            accountInformation[playerid][cashInHand] == accountInformationOld[playerid][cashInHand] &&
            accountInformation[playerid][cashInTheBank] == accountInformationOld[playerid][cashInTheBank] &&
            accountInformation[playerid][lifeInsurance] == accountInformationOld[playerid][lifeInsurance] &&
            accountInformation[playerid][inGame] == accountInformationOld[playerid][inGame] &&
            accountInformation[playerid][administrativeLevel] == accountInformationOld[playerid][administrativeLevel] &&
            accountInformation[playerid][onDuty] == accountInformationOld[playerid][onDuty] &&
            accountInformation[playerid][warnings] == accountInformationOld[playerid][warnings] &&
            accountInformation[playerid][deaths] == accountInformationOld[playerid][deaths] &&
            accountInformation[playerid][killings] == accountInformationOld[playerid][killings] &&
            accountInformation[playerid][jailTime] == accountInformationOld[playerid][jailTime] &&
            accountInformation[playerid][muteTime] == accountInformationOld[playerid][muteTime] &&
            accountInformation[playerid][banTime] == accountInformationOld[playerid][banTime] &&
            isequal(accountInformation[playerid][banReason], accountInformationOld[playerid][banReason], true) &&
            isequal(accountInformation[playerid][banDate], accountInformationOld[playerid][banDate], true) &&
            accountInformation[playerid][assignedClan] == accountInformationOld[playerid][assignedClan] &&
            accountInformation[playerid][weaponSlotOne] == accountInformationOld[playerid][weaponSlotOne] &&
            accountInformation[playerid][ammoSlotOne] == accountInformationOld[playerid][ammoSlotOne] &&
            accountInformation[playerid][weaponSlotTwo] == accountInformationOld[playerid][weaponSlotTwo] &&
            accountInformation[playerid][ammoSlotTwo] == accountInformationOld[playerid][ammoSlotTwo] &&
            accountInformation[playerid][weaponSlotThree] == accountInformationOld[playerid][weaponSlotThree] &&
            accountInformation[playerid][ammoSlotThree] == accountInformationOld[playerid][ammoSlotThree] &&
            accountInformation[playerid][weaponSlotFour] == accountInformationOld[playerid][weaponSlotFour] &&
            accountInformation[playerid][ammoSlotFour] == accountInformationOld[playerid][ammoSlotFour] &&
            accountInformation[playerid][weaponSlotFive] == accountInformationOld[playerid][weaponSlotFive] &&
            accountInformation[playerid][ammoSlotFive] == accountInformationOld[playerid][ammoSlotFive] &&
            accountInformation[playerid][weaponSlotSix] == accountInformationOld[playerid][weaponSlotSix] &&
            accountInformation[playerid][ammoSlotSix] == accountInformationOld[playerid][ammoSlotSix] &&
            accountInformation[playerid][weaponSlotSeven] == accountInformationOld[playerid][weaponSlotSeven] &&
            accountInformation[playerid][ammoSlotSeven] == accountInformationOld[playerid][ammoSlotSeven] &&
            accountInformation[playerid][weaponSlotEight] == accountInformationOld[playerid][weaponSlotEight] &&
            accountInformation[playerid][ammoSlotEight] == accountInformationOld[playerid][ammoSlotEight] &&
            accountInformation[playerid][weaponSlotNine] == accountInformationOld[playerid][weaponSlotNine] &&
            accountInformation[playerid][ammoSlotNine] == accountInformationOld[playerid][ammoSlotNine] &&
            accountInformation[playerid][weaponSlotTen] == accountInformationOld[playerid][weaponSlotTen] &&
            accountInformation[playerid][ammoSlotTen] == accountInformationOld[playerid][ammoSlotTen] &&
            accountInformation[playerid][weaponSlotEleven] == accountInformationOld[playerid][weaponSlotEleven] &&
            accountInformation[playerid][ammoSlotEleven] == accountInformationOld[playerid][ammoSlotEleven] &&
            accountInformation[playerid][weaponSlotTwelve] == accountInformationOld[playerid][weaponSlotTwelve] &&
            accountInformation[playerid][ammoSlotTwelve] == accountInformationOld[playerid][ammoSlotTwelve] &&
            accountInformation[playerid][weaponSlotThirteen] == accountInformationOld[playerid][weaponSlotThirteen] &&
            accountInformation[playerid][ammoSlotThirteen] == accountInformationOld[playerid][ammoSlotThirteen] &&
            accountInformation[playerid][armour] == accountInformationOld[playerid][armour] &&
            accountInformation[playerid][drugs] == accountInformationOld[playerid][drugs] &&
            accountInformation[playerid][aspirin] == accountInformationOld[playerid][aspirin] &&
            accountInformation[playerid][chlamydia] == accountInformationOld[playerid][chlamydia] &&
            accountInformation[playerid][gonorrhea] == accountInformationOld[playerid][gonorrhea] &&
            accountInformation[playerid][syphilis] == accountInformationOld[playerid][syphilis] &&
            accountInformation[playerid][condoms] == accountInformationOld[playerid][condoms] &&
            accountInformation[playerid][pet] == accountInformationOld[playerid][pet] &&
            isequal(accountInformation[playerid][petName], accountInformationOld[playerid][petName], true))
        return 1;

    inline const ISaveAccountInformation(const result) {
        if (result == 0)
            return printf("[CUENTA] Se ha producido un error al intentar guardar los datos de la cuenta (ID: %d).", playerid);

        printf("[CUENTA] Se ha guardado la cuenta (ID: %d).", playerid);
    }

    SaveAccountInformation(playerid, accountInformation[playerid][name], using inline ISaveAccountInformation);
    accountInformationOld[playerid] = accountInformation[playerid];
    return 1;
}

forward UpdateWeaponsInformation(const playerid);
public UpdateWeaponsInformation(const playerid) {
    if (!accountInformation[playerid][loggedIn])
        return 1;

    new weapons[13][2];

    for (new i = 0; i <= 12; i++)
        GetPlayerWeaponData(playerid, WEAPON_SLOT:i, WEAPON:weapons[i][0], weapons[i][1]);

    new Float:vest;
    GetPlayerArmour(playerid, vest);

    if (accountInformation[playerid][weaponSlotOne] != weapons[0][0])
        accountInformation[playerid][weaponSlotOne] = weapons[0][0];

    if (accountInformation[playerid][ammoSlotOne] != weapons[0][1])
        accountInformation[playerid][ammoSlotOne] = weapons[0][1];

    if (accountInformation[playerid][weaponSlotTwo] != weapons[1][0])
        accountInformation[playerid][weaponSlotTwo] = weapons[1][0];

    if (accountInformation[playerid][ammoSlotTwo] != weapons[1][1])
        accountInformation[playerid][ammoSlotTwo] = weapons[1][1];

    if (accountInformation[playerid][weaponSlotThree] != weapons[2][0])
        accountInformation[playerid][weaponSlotThree] = weapons[2][0];

    if (accountInformation[playerid][ammoSlotThree] != weapons[2][1])
        accountInformation[playerid][ammoSlotThree] = weapons[2][1];

    if (accountInformation[playerid][weaponSlotFour] != weapons[3][0])
        accountInformation[playerid][weaponSlotFour] = weapons[3][0];

    if (accountInformation[playerid][ammoSlotFour] != weapons[3][1])
        accountInformation[playerid][ammoSlotFour] = weapons[3][1];

    if (accountInformation[playerid][weaponSlotFive] != weapons[4][0])
        accountInformation[playerid][weaponSlotFive] = weapons[4][0];

    if (accountInformation[playerid][ammoSlotFive] != weapons[4][1])
        accountInformation[playerid][ammoSlotFive] = weapons[4][1];

    if (accountInformation[playerid][weaponSlotSix] != weapons[5][0])
        accountInformation[playerid][weaponSlotSix] = weapons[5][0];

    if (accountInformation[playerid][ammoSlotSix] != weapons[5][1])
        accountInformation[playerid][ammoSlotSix] = weapons[5][1];

    if (accountInformation[playerid][weaponSlotSeven] != weapons[6][0])
        accountInformation[playerid][weaponSlotSeven] = weapons[6][0];

    if (accountInformation[playerid][ammoSlotSeven] != weapons[6][1])
        accountInformation[playerid][ammoSlotSeven] = weapons[6][1];

    if (accountInformation[playerid][weaponSlotEight] != weapons[7][0])
        accountInformation[playerid][weaponSlotEight] = weapons[7][0];

    if (accountInformation[playerid][ammoSlotEight] != weapons[7][1])
        accountInformation[playerid][ammoSlotEight] = weapons[7][1];

    if (accountInformation[playerid][weaponSlotNine] != weapons[8][0])
        accountInformation[playerid][weaponSlotNine] = weapons[8][0];

    if (accountInformation[playerid][ammoSlotNine] != weapons[8][1])
        accountInformation[playerid][ammoSlotNine] = weapons[8][1];

    if (accountInformation[playerid][weaponSlotTen] != weapons[9][0])
        accountInformation[playerid][weaponSlotTen] = weapons[9][0];

    if (accountInformation[playerid][ammoSlotTen] != weapons[9][1])
        accountInformation[playerid][ammoSlotTen] = weapons[9][1];

    if (accountInformation[playerid][weaponSlotEleven] != weapons[10][0])
        accountInformation[playerid][weaponSlotEleven] = weapons[10][0];

    if (accountInformation[playerid][ammoSlotEleven] != weapons[10][1])
        accountInformation[playerid][ammoSlotEleven] = weapons[10][1];

    if (accountInformation[playerid][weaponSlotTwelve] != weapons[11][0])
        accountInformation[playerid][weaponSlotTwelve] = weapons[11][0];

    if (accountInformation[playerid][ammoSlotTwelve] != weapons[11][1])
        accountInformation[playerid][ammoSlotTwelve] = weapons[11][1];

    if (accountInformation[playerid][weaponSlotThirteen] != weapons[12][0])
        accountInformation[playerid][weaponSlotThirteen] = weapons[12][0];

    if (accountInformation[playerid][ammoSlotThirteen] != weapons[12][1])
        accountInformation[playerid][ammoSlotThirteen] = weapons[12][1];

    if (accountInformation[playerid][armour] != vest)
        accountInformation[playerid][armour] = vest;
    return 1;
}