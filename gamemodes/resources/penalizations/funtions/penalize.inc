forward Penalize(const playerid, const killerid);
public Penalize(const playerid, const killerid) {
    if (killerid != INVALID_PLAYER_ID && accountInformation[killerid][onDuty])
        return 1;

    // Penalizar al jugador muerto
    accountInformation[playerid][deaths]++;

    if (accountInformation[playerid][level] > 0)
        accountInformation[playerid][level]--;

    if (accountInformation[playerid][lifeInsurance] > 0) {
        if (accountInformation[playerid][lifeInsurance] > 0)
            accountInformation[playerid][lifeInsurance]--;

        va_SendClientMessage(playerid, -1, ""COLOR_DARK_GREEN"Tus Gastos Medicos Fueron Gratis Por Contar Con Seguro De Vida.");
    } else {
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

        if (accountInformation[playerid][cashInHand] > 0) {
            va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE2"Te Mataron Sin Seguro De Vida, Tuviste Que Pagar $%d De Gastos Medicos.", (accountInformation[playerid][cashInHand] / 2));

            if (accountInformation[playerid][cashInHand] == 1)
                accountInformation[playerid][cashInHand] = 0;
            else
                accountInformation[playerid][cashInHand] -= (accountInformation[playerid][cashInHand] / 2);
        } else {
            va_SendClientMessage(playerid, -1, ""COLOR_RED"Grrrr, Consigue Dinero Que Ni Para Pagar Tus Gastos Medicos Tienes!!!");
        }
    }
    return 1;
}