forward RestoreAccountInformation(const playerid);
public RestoreAccountInformation(const playerid) {
    if (accountInformation[playerid][name][0] != EOS)
        accountInformation[playerid][name][0] = EOS;

    if (accountInformation[playerid][skin] != 0)
        accountInformation[playerid][skin] = 0;

    if (accountInformation[playerid][level] != 0)
        accountInformation[playerid][level] = 0;

    if (accountInformation[playerid][cashInHand] != 0)
        accountInformation[playerid][cashInHand] = 0;

    if (accountInformation[playerid][cashInTheBank] != 0)
        accountInformation[playerid][cashInTheBank] = 0;

    if (accountInformation[playerid][lifeInsurance] != 0)
        accountInformation[playerid][lifeInsurance] = 0;

    if (accountInformation[playerid][inGame])
        accountInformation[playerid][inGame] = false;

    if (accountInformation[playerid][administrativeLevel] != 0)
        accountInformation[playerid][administrativeLevel] = 0;

    if (accountInformation[playerid][onDuty])
        accountInformation[playerid][onDuty] = false;

    if (accountInformation[playerid][warnings] != 0)
        accountInformation[playerid][warnings] = 0;

    if (accountInformation[playerid][deaths] != 0)
        accountInformation[playerid][deaths] = 0;

    if (accountInformation[playerid][killings] != 0)
        accountInformation[playerid][killings] = 0;

    if (accountInformation[playerid][jailTime] != 0)
        accountInformation[playerid][jailTime] = 0;

    if (accountInformation[playerid][muteTime] != 0)
        accountInformation[playerid][muteTime] = 0;

    if (accountInformation[playerid][banTime] != 0)
        accountInformation[playerid][banTime] = 0;

    if (accountInformation[playerid][banReason][0] != EOS)
        accountInformation[playerid][banReason][0] = EOS;

    if (accountInformation[playerid][banDate][0] != EOS)
        accountInformation[playerid][banDate][0] = EOS;

    if (accountInformation[playerid][assignedClan] != NO_TEAM)
        accountInformation[playerid][assignedClan] = NO_TEAM;

    if (accountInformation[playerid][weaponSlotOne] != 0)
        accountInformation[playerid][weaponSlotOne] = 0;

    if (accountInformation[playerid][ammoSlotOne] != 0)
        accountInformation[playerid][ammoSlotOne] = 0;

    if (accountInformation[playerid][weaponSlotTwo] != 0)
        accountInformation[playerid][weaponSlotTwo] = 0;

    if (accountInformation[playerid][ammoSlotTwo] != 0)
        accountInformation[playerid][ammoSlotTwo] = 0;

    if (accountInformation[playerid][weaponSlotThree] != 0)
        accountInformation[playerid][weaponSlotThree] = 0;

    if (accountInformation[playerid][ammoSlotThree] != 0)
        accountInformation[playerid][ammoSlotThree] = 0;

    if (accountInformation[playerid][weaponSlotFour] != 0)
        accountInformation[playerid][weaponSlotFour] = 0;

    if (accountInformation[playerid][ammoSlotFour] != 0)
        accountInformation[playerid][ammoSlotFour] = 0;

    if (accountInformation[playerid][weaponSlotFive] != 0)
        accountInformation[playerid][weaponSlotFive] = 0;

    if (accountInformation[playerid][ammoSlotFive] != 0)
        accountInformation[playerid][ammoSlotFive] = 0;

    if (accountInformation[playerid][weaponSlotSix] != 0)
        accountInformation[playerid][weaponSlotSix] = 0;

    if (accountInformation[playerid][ammoSlotSix] != 0)
        accountInformation[playerid][ammoSlotSix] = 0;

    if (accountInformation[playerid][weaponSlotSeven] != 0)
        accountInformation[playerid][weaponSlotSeven] = 0;

    if (accountInformation[playerid][ammoSlotSeven] != 0)
        accountInformation[playerid][ammoSlotSeven] = 0;

    if (accountInformation[playerid][weaponSlotEight] != 0)
        accountInformation[playerid][weaponSlotEight] = 0;

    if (accountInformation[playerid][ammoSlotEight] != 0)
        accountInformation[playerid][ammoSlotEight] = 0;

    if (accountInformation[playerid][weaponSlotNine] != 0)
        accountInformation[playerid][weaponSlotNine] = 0;

    if (accountInformation[playerid][ammoSlotNine] != 0)
        accountInformation[playerid][ammoSlotNine] = 0;

    if (accountInformation[playerid][weaponSlotTen] != 0)
        accountInformation[playerid][weaponSlotTen] = 0;

    if (accountInformation[playerid][ammoSlotTen] != 0)
        accountInformation[playerid][ammoSlotTen] = 0;

    if (accountInformation[playerid][weaponSlotEleven] != 0)
        accountInformation[playerid][weaponSlotEleven] = 0;

    if (accountInformation[playerid][ammoSlotEleven] != 0)
        accountInformation[playerid][ammoSlotEleven] = 0;

    if (accountInformation[playerid][weaponSlotTwelve] != 0)
        accountInformation[playerid][weaponSlotTwelve] = 0;

    if (accountInformation[playerid][ammoSlotTwelve] != 0)
        accountInformation[playerid][ammoSlotTwelve] = 0;

    if (accountInformation[playerid][weaponSlotThirteen] != 0)
        accountInformation[playerid][weaponSlotThirteen] = 0;

    if (accountInformation[playerid][ammoSlotThirteen] != 0)
        accountInformation[playerid][ammoSlotThirteen] = 0;

    if (accountInformation[playerid][armour] != 0.0)
        accountInformation[playerid][armour] = 0.0;

    if (accountInformation[playerid][drugs] != 0)
        accountInformation[playerid][drugs] = 0;

    if (accountInformation[playerid][loggedIn])
        accountInformation[playerid][loggedIn] = false;

    if (accountInformation[playerid][exists])
        accountInformation[playerid][exists] = false;
    return 1;
}

forward RestoreAccountInformationOld(const playerid);
public RestoreAccountInformationOld(const playerid) {
    if (accountInformationOld[playerid][name][0] != EOS)
        accountInformationOld[playerid][name][0] = EOS;

    if (accountInformationOld[playerid][skin] != 0)
        accountInformationOld[playerid][skin] = 0;

    if (accountInformationOld[playerid][level] != 0)
        accountInformationOld[playerid][level] = 0;

    if (accountInformationOld[playerid][cashInHand] != 0)
        accountInformationOld[playerid][cashInHand] = 0;

    if (accountInformationOld[playerid][cashInTheBank] != 0)
        accountInformationOld[playerid][cashInTheBank] = 0;

    if (accountInformationOld[playerid][lifeInsurance] != 0)
        accountInformationOld[playerid][lifeInsurance] = 0;

    if (accountInformationOld[playerid][inGame] != false)
        accountInformationOld[playerid][inGame] = false;

    if (accountInformationOld[playerid][administrativeLevel] != 0)
        accountInformationOld[playerid][administrativeLevel] = 0;

    if (accountInformationOld[playerid][onDuty] != false)
        accountInformationOld[playerid][onDuty] = false;

    if (accountInformationOld[playerid][warnings] != 0)
        accountInformationOld[playerid][warnings] = 0;

    if (accountInformationOld[playerid][deaths] != 0)
        accountInformationOld[playerid][deaths] = 0;

    if (accountInformationOld[playerid][killings] != 0)
        accountInformationOld[playerid][killings] = 0;

    if (accountInformationOld[playerid][jailTime] != 0)
        accountInformationOld[playerid][jailTime] = 0;

    if (accountInformationOld[playerid][muteTime] != 0)
        accountInformationOld[playerid][muteTime] = 0;

    if (accountInformationOld[playerid][banTime] != 0)
        accountInformationOld[playerid][banTime] = 0;

    if (accountInformationOld[playerid][banReason][0] != EOS)
        accountInformationOld[playerid][banReason][0] = EOS;

    if (accountInformationOld[playerid][banDate][0] != EOS)
        accountInformationOld[playerid][banDate][0] = EOS;

    if (accountInformationOld[playerid][assignedClan] != NO_TEAM)
        accountInformationOld[playerid][assignedClan] = NO_TEAM;

    if (accountInformationOld[playerid][weaponSlotOne] != 0)
        accountInformationOld[playerid][weaponSlotOne] = 0;

    if (accountInformationOld[playerid][ammoSlotOne] != 0)
        accountInformationOld[playerid][ammoSlotOne] = 0;

    if (accountInformationOld[playerid][weaponSlotTwo] != 0)
        accountInformationOld[playerid][weaponSlotTwo] = 0;

    if (accountInformationOld[playerid][ammoSlotTwo] != 0)
        accountInformationOld[playerid][ammoSlotTwo] = 0;

    if (accountInformationOld[playerid][weaponSlotThree] != 0)
        accountInformationOld[playerid][weaponSlotThree] = 0;

    if (accountInformationOld[playerid][ammoSlotThree] != 0)
        accountInformationOld[playerid][ammoSlotThree] = 0;

    if (accountInformationOld[playerid][weaponSlotFour] != 0)
        accountInformationOld[playerid][weaponSlotFour] = 0;

    if (accountInformationOld[playerid][ammoSlotFour] != 0)
        accountInformationOld[playerid][ammoSlotFour] = 0;

    if (accountInformationOld[playerid][weaponSlotFive] != 0)
        accountInformationOld[playerid][weaponSlotFive] = 0;

    if (accountInformationOld[playerid][ammoSlotFive] != 0)
        accountInformationOld[playerid][ammoSlotFive] = 0;

    if (accountInformationOld[playerid][weaponSlotSix] != 0)
        accountInformationOld[playerid][weaponSlotSix] = 0;

    if (accountInformationOld[playerid][ammoSlotSix] != 0)
        accountInformationOld[playerid][ammoSlotSix] = 0;

    if (accountInformationOld[playerid][weaponSlotSeven] != 0)
        accountInformationOld[playerid][weaponSlotSeven] = 0;

    if (accountInformationOld[playerid][ammoSlotSeven] != 0)
        accountInformationOld[playerid][ammoSlotSeven] = 0;

    if (accountInformationOld[playerid][weaponSlotEight] != 0)
        accountInformationOld[playerid][weaponSlotEight] = 0;

    if (accountInformationOld[playerid][ammoSlotEight] != 0)
        accountInformationOld[playerid][ammoSlotEight] = 0;

    if (accountInformationOld[playerid][weaponSlotNine] != 0)
        accountInformationOld[playerid][weaponSlotNine] = 0;

    if (accountInformationOld[playerid][ammoSlotNine] != 0)
        accountInformationOld[playerid][ammoSlotNine] = 0;

    if (accountInformationOld[playerid][weaponSlotTen] != 0)
        accountInformationOld[playerid][weaponSlotTen] = 0;

    if (accountInformationOld[playerid][ammoSlotTen] != 0)
        accountInformationOld[playerid][ammoSlotTen] = 0;

    if (accountInformationOld[playerid][weaponSlotEleven] != 0)
        accountInformationOld[playerid][weaponSlotEleven] = 0;

    if (accountInformationOld[playerid][ammoSlotEleven] != 0)
        accountInformationOld[playerid][ammoSlotEleven] = 0;

    if (accountInformationOld[playerid][weaponSlotTwelve] != 0)
        accountInformationOld[playerid][weaponSlotTwelve] = 0;

    if (accountInformationOld[playerid][ammoSlotTwelve] != 0)
        accountInformationOld[playerid][ammoSlotTwelve] = 0;

    if (accountInformationOld[playerid][weaponSlotThirteen] != 0)
        accountInformationOld[playerid][weaponSlotThirteen] = 0;

    if (accountInformationOld[playerid][ammoSlotThirteen] != 0)
        accountInformationOld[playerid][ammoSlotThirteen] = 0;

    if (accountInformationOld[playerid][armour] != 0.0)
        accountInformationOld[playerid][armour] = 0.0;

    if (accountInformationOld[playerid][drugs] != 0)
        accountInformationOld[playerid][drugs] = 0;

    if (accountInformationOld[playerid][loggedIn])
        accountInformationOld[playerid][loggedIn] = false;

    if (accountInformationOld[playerid][exists])
        accountInformationOld[playerid][exists] = false;
    return 1;
}