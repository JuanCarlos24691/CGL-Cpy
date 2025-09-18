#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    for (new i = 0; i < MAX_PLAYERS; i++)
        RestoreArmoryInformation(i);
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    RestoreArmoryInformation(playerid);
    return 1;
}

hook OnPlayerKeyStateChange(playerid, KEY:newkeys, KEY:oldkeys) {
    if (newkeys & KEY_FIRE && armoryInformation[playerid][aRInOperation])
        RestoreARTextDrawings(playerid);
    return 1;
}

hook OnPlayerText(playerid, text[]) {
    if (armoryInformation[playerid][aRInOperation]) {
        if (isequal(text, "1", true) || isequal(text, "2", true) || isequal(text, "3", true) || isequal(text, "4", true)  || isequal(text, "5", true) || isequal(text, "6", true) || isequal(text, "7", true) || isequal(text, "8", true) || isequal(text, "9", true) || isequal(text, "10", true) || isequal(text, "11", true) || isequal(text, "12", true) || isequal(text, "13", true) || isequal(text, "14", true) || isequal(text, "15", true) || isequal(text, "16", true) || isequal(text, "17", true) || isequal(text, "18", true) || isequal(text, "19", true) || isequal(text, "20", true))
            ApplyAnimation(playerid, "INT_SHOP", "shop_pay", 3.0, false, false, false, false, SYNC_NONE);

        if (isequal(text, "1", true)) {
            if (accountInformation[playerid][cashInHand] < 1000) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas por lo menos $1000 para poder comprar un Palo de golf.");
                return ~0;
            }

            accountInformation[playerid][weaponSlotTwo] = 2;
            accountInformation[playerid][ammoSlotTwo] = 1;

            GivePlayerWeapon(playerid, WEAPON_GOLFCLUB, accountInformation[playerid][ammoSlotTwo]);
            SetPlayerAmmo(playerid, WEAPON_GOLFCLUB, accountInformation[playerid][ammoSlotTwo]);

            accountInformation[playerid][cashInHand] -= 1000;
            va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Ha comprado un Palo de golf. Gracias por Comprar en Ammunation.");
            return ~0;
        } else if (isequal(text, "2", true)) {
            if (accountInformation[playerid][cashInHand] < 1000) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas por lo menos $1000 para poder comprar un Bate de beisbol.");
                return ~0;
            }

            accountInformation[playerid][weaponSlotTwo] = 5;
            accountInformation[playerid][ammoSlotTwo] = 1;

            GivePlayerWeapon(playerid, WEAPON_BAT, accountInformation[playerid][ammoSlotTwo]);
            SetPlayerAmmo(playerid, WEAPON_BAT, accountInformation[playerid][ammoSlotTwo]);

            accountInformation[playerid][cashInHand] -= 1000;
            va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Ha comprado un Bate de beisbol. Gracias por Comprar en Ammunation.");
            return ~0;
        } else if (isequal(text, "3", true)) {
            if (accountInformation[playerid][cashInHand] < 1000) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas por lo menos $1000 para poder comprar una Pala.");
                return ~0;
            }

            accountInformation[playerid][weaponSlotTwo] = 6;
            accountInformation[playerid][ammoSlotTwo] = 1;

            GivePlayerWeapon(playerid, WEAPON_SHOVEL, accountInformation[playerid][ammoSlotTwo]);
            SetPlayerAmmo(playerid, WEAPON_SHOVEL, accountInformation[playerid][ammoSlotTwo]);

            accountInformation[playerid][cashInHand] -= 1000;
            va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Ha comprado un Pala. Gracias por Comprar en Ammunation.");
            return ~0;
        } else if (isequal(text, "4", true)) {
            if (accountInformation[playerid][cashInHand] < 1000) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas por lo menos $1000 para poder comprar un Palo de billar.");
                return ~0;
            }

            accountInformation[playerid][weaponSlotTwo] = 7;
            accountInformation[playerid][ammoSlotTwo] = 1;

            GivePlayerWeapon(playerid, WEAPON_POOLSTICK, accountInformation[playerid][ammoSlotTwo]);
            SetPlayerAmmo(playerid, WEAPON_POOLSTICK, accountInformation[playerid][ammoSlotTwo]);

            accountInformation[playerid][cashInHand] -= 1000;
            va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Ha comprado un Palo de billar. Gracias por Comprar en Ammunation.");
            return ~0;
        } else if (isequal(text, "5", true)) {
            if (accountInformation[playerid][cashInHand] < 1000) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas por lo menos $1000 para poder comprar un Baston.");
                return ~0;
            }

            accountInformation[playerid][weaponSlotEleven] = 7;
            accountInformation[playerid][ammoSlotEleven] = 1;

            GivePlayerWeapon(playerid, WEAPON_CANE, accountInformation[playerid][ammoSlotEleven]);
            SetPlayerAmmo(playerid, WEAPON_CANE, accountInformation[playerid][ammoSlotEleven]);

            accountInformation[playerid][cashInHand] -= 1000;
            va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Ha comprado un Baston. Gracias por Comprar en Ammunation.");
            return ~0;
        } else if (isequal(text, "6", true)) {
            if (accountInformation[playerid][cashInHand] < 10000) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas por lo menos $10000 para poder comprar una Motosierra.");
                return ~0;
            }

            accountInformation[playerid][weaponSlotTwo] = 7;
            accountInformation[playerid][ammoSlotTwo] = 1;

            GivePlayerWeapon(playerid, WEAPON_CHAINSAW, accountInformation[playerid][ammoSlotTwo]);
            SetPlayerAmmo(playerid, WEAPON_CHAINSAW, accountInformation[playerid][ammoSlotTwo]);

            accountInformation[playerid][cashInHand] -= 10000;
            va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Ha comprado un Motosierra. Gracias por Comprar en Ammunation.");
            return ~0;
        } else if (isequal(text, "7", true)) {
            if (accountInformation[playerid][cashInHand] < 2500) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas por lo menos $2500 para poder comprar una Pistola.");
                return ~0;
            }

            if (accountInformation[playerid][weaponSlotThree] == 22)
                accountInformation[playerid][ammoSlotThree] += 150;
            else
                accountInformation[playerid][ammoSlotThree] = 150;

            accountInformation[playerid][weaponSlotThree] = 22;

            GivePlayerWeapon(playerid, WEAPON_COLT45, accountInformation[playerid][ammoSlotThree]);
            SetPlayerAmmo(playerid, WEAPON_COLT45, accountInformation[playerid][ammoSlotThree]);

            accountInformation[playerid][cashInHand] -= 2500;
            va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Ha comprado una Pistola 150 Municion. Gracias por Comprar en Ammunation.");
            return ~0;
        } else if (isequal(text, "8", true)) {
            if (accountInformation[playerid][cashInHand] < 3000) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas por lo menos $3000 para poder comprar una Pistola silenciada.");
                return ~0;
            }

            if (accountInformation[playerid][weaponSlotThree] == 23)
                accountInformation[playerid][ammoSlotThree] += 150;
            else
                accountInformation[playerid][ammoSlotThree] = 150;

            accountInformation[playerid][weaponSlotThree] = 23;

            GivePlayerWeapon(playerid, WEAPON_SILENCED, accountInformation[playerid][ammoSlotThree]);
            SetPlayerAmmo(playerid, WEAPON_SILENCED, accountInformation[playerid][ammoSlotThree]);

            accountInformation[playerid][cashInHand] -= 3000;
            va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Ha comprado una Pistola silenciada 150 Municion. Gracias por Comprar en Ammunation.");
            return ~0;
        } else if (isequal(text, "9", true)) {
            if (accountInformation[playerid][cashInHand] < 5000) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas por lo menos $5000 para poder comprar una Desert Eagle.");
                return ~0;
            }

            if (accountInformation[playerid][weaponSlotThree] == 24)
                accountInformation[playerid][ammoSlotThree] += 150;
            else
                accountInformation[playerid][ammoSlotThree] = 150;

            accountInformation[playerid][weaponSlotThree] = 24;

            GivePlayerWeapon(playerid, WEAPON_DEAGLE, accountInformation[playerid][ammoSlotThree]);
            SetPlayerAmmo(playerid, WEAPON_DEAGLE, accountInformation[playerid][ammoSlotThree]);

            accountInformation[playerid][cashInHand] -= 5000;
            va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Ha comprado una Dsert Eagle 150 Municion. Gracias por Comprar en Ammunation.");
            return ~0;
        } else if (isequal(text, "10", true)) {
            if (accountInformation[playerid][cashInHand] < 5000) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas por lo menos $5000 para poder comprar una Escopeta.");
                return ~0;
            }

            if (accountInformation[playerid][weaponSlotFour] == 25)
                accountInformation[playerid][ammoSlotFour] += 150;
            else
                accountInformation[playerid][ammoSlotFour] = 150;

            accountInformation[playerid][weaponSlotFour] = 25;

            GivePlayerWeapon(playerid, WEAPON_SHOTGUN, accountInformation[playerid][ammoSlotFour]);
            SetPlayerAmmo(playerid, WEAPON_SHOTGUN, accountInformation[playerid][ammoSlotFour]);

            accountInformation[playerid][cashInHand] -= 5000;
            va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Ha comprado una Escopeta 150 Municion. Gracias por Comprar en Ammunation.");
            return ~0;
        } else if (isequal(text, "11", true)) {
            if (accountInformation[playerid][cashInHand] < 7500) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas por lo menos $7500 para poder comprar una Escopeta recortada.");
                return ~0;
            }

            if (accountInformation[playerid][weaponSlotFour] == 26)
                accountInformation[playerid][ammoSlotFour] += 150;
            else
                accountInformation[playerid][ammoSlotFour] = 150;

            accountInformation[playerid][weaponSlotFour] = 26;

            GivePlayerWeapon(playerid, WEAPON_SAWEDOFF, accountInformation[playerid][ammoSlotFour]);
            SetPlayerAmmo(playerid, WEAPON_SAWEDOFF, accountInformation[playerid][ammoSlotFour]);

            accountInformation[playerid][cashInHand] -= 7500;
            va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Ha comprado una Escopeta recortada 150 Municion. Gracias por Comprar en Ammunation.");
            return ~0;
        } else if (isequal(text, "12", true)) {
            if (accountInformation[playerid][cashInHand] < 7500) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas por lo menos $7500 para poder comprar una Escopeta de combate.");
                return ~0;
            }

            if (accountInformation[playerid][weaponSlotFour] == 27)
                accountInformation[playerid][ammoSlotFour] += 150;
            else
                accountInformation[playerid][ammoSlotFour] = 150;

            accountInformation[playerid][weaponSlotFour] = 27;

            GivePlayerWeapon(playerid, WEAPON_SHOTGSPA, accountInformation[playerid][ammoSlotFour]);
            SetPlayerAmmo(playerid, WEAPON_SHOTGSPA, accountInformation[playerid][ammoSlotFour]);

            accountInformation[playerid][cashInHand] -= 7500;
            va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Ha comprado una Escopeta de combate 150 Municion. Gracias por Comprar en Ammunation.");
            return ~0;
        } else if (isequal(text, "13", true)) {
            if (accountInformation[playerid][cashInHand] < 10000) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas por lo menos $10000 para poder comprar una Mac10.");
                return ~0;
            }

            if (accountInformation[playerid][weaponSlotFive] == 28)
                accountInformation[playerid][ammoSlotFive] += 200;
            else
                accountInformation[playerid][ammoSlotFive] = 200;

            accountInformation[playerid][weaponSlotFive] = 28;

            GivePlayerWeapon(playerid, WEAPON_UZI, accountInformation[playerid][ammoSlotFive]);
            SetPlayerAmmo(playerid, WEAPON_UZI, accountInformation[playerid][ammoSlotFive]);

            accountInformation[playerid][cashInHand] -= 10000;
            va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Ha comprado una Mac10 200 Municion. Gracias por Comprar en Ammunation.");
            return ~0;
        } else if (isequal(text, "14", true)) {
            if (accountInformation[playerid][cashInHand] < 10000) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas por lo menos $10000 para poder comprar una Tec9.");
                return ~0;
            }

            if (accountInformation[playerid][weaponSlotFive] == 32)
                accountInformation[playerid][ammoSlotFive] += 200;
            else
                accountInformation[playerid][ammoSlotFive] = 200;

            accountInformation[playerid][weaponSlotFive] = 32;

            GivePlayerWeapon(playerid, WEAPON_TEC9, accountInformation[playerid][ammoSlotFive]);
            SetPlayerAmmo(playerid, WEAPON_TEC9, accountInformation[playerid][ammoSlotFive]);

            accountInformation[playerid][cashInHand] -= 10000;
            va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Ha comprado una Tec9 200 Municion. Gracias por Comprar en Ammunation.");
            return ~0;
        } else if (isequal(text, "15", true)) {
            if (accountInformation[playerid][cashInHand] < 12500) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas por lo menos $12500 para poder comprar una MP5.");
                return ~0;
            }

            if (accountInformation[playerid][weaponSlotFive] == 29)
                accountInformation[playerid][ammoSlotFive] += 200;
            else
                accountInformation[playerid][ammoSlotFive] = 200;

            accountInformation[playerid][weaponSlotFive] = 29;

            GivePlayerWeapon(playerid, WEAPON_MP5, accountInformation[playerid][ammoSlotFive]);
            SetPlayerAmmo(playerid, WEAPON_MP5, accountInformation[playerid][ammoSlotFive]);

            accountInformation[playerid][cashInHand] -= 12500;
            va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Ha comprado una MP5 200 Municion. Gracias por Comprar en Ammunation.");
            return ~0;
        } else if (isequal(text, "16", true)) {
            if (accountInformation[playerid][cashInHand] < 15000) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas por lo menos $15000 para poder comprar una AK47.");
                return ~0;
            }

            if (accountInformation[playerid][weaponSlotSix] == 30)
                accountInformation[playerid][ammoSlotSix] += 200;
            else
                accountInformation[playerid][ammoSlotSix] = 200;

            accountInformation[playerid][weaponSlotSix] = 30;

            GivePlayerWeapon(playerid, WEAPON_AK47, accountInformation[playerid][ammoSlotSix]);
            SetPlayerAmmo(playerid, WEAPON_AK47, accountInformation[playerid][ammoSlotSix]);

            accountInformation[playerid][cashInHand] -= 15000;
            va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Ha comprado una AK47 200 Municion. Gracias por Comprar en Ammunation.");
            return ~0;
        } else if (isequal(text, "17", true)) {
            if (accountInformation[playerid][cashInHand] < 20000) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas por lo menos $20000 para poder comprar una M4.");
                return ~0;
            }

            if (accountInformation[playerid][weaponSlotSix] == 31)
                accountInformation[playerid][ammoSlotSix] += 200;
            else
                accountInformation[playerid][ammoSlotSix] = 200;

            accountInformation[playerid][weaponSlotSix] = 31;

            GivePlayerWeapon(playerid, WEAPON_M4, accountInformation[playerid][ammoSlotSix]);
            SetPlayerAmmo(playerid, WEAPON_M4, accountInformation[playerid][ammoSlotSix]);

            accountInformation[playerid][cashInHand] -= 20000;
            va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Ha comprado una M4 200 Municion. Gracias por Comprar en Ammunation.");
            return ~0;
        } else if (isequal(text, "18", true)) {
            if (accountInformation[playerid][cashInHand] < 15000) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas por lo menos $15000 para poder comprar una Rifle.");
                return ~0;
            }

            if (accountInformation[playerid][weaponSlotSeven] == 33)
                accountInformation[playerid][ammoSlotSeven] += 100;
            else
                accountInformation[playerid][ammoSlotSeven] = 100;

            accountInformation[playerid][weaponSlotSeven] = 33;

            GivePlayerWeapon(playerid, WEAPON_RIFLE, accountInformation[playerid][ammoSlotSeven]);
            SetPlayerAmmo(playerid, WEAPON_RIFLE, accountInformation[playerid][ammoSlotSeven]);

            accountInformation[playerid][cashInHand] -= 15000;
            va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Ha comprado un Rifle 100 Municion. Gracias por Comprar en Ammunation.");
            return ~0;
        } else if (isequal(text, "19", true)) {
            if (accountInformation[playerid][cashInHand] < 25000) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas por lo menos $25000 para poder comprar una Francotirador.");
                return ~0;
            }

            if (accountInformation[playerid][weaponSlotSeven] == 34)
                accountInformation[playerid][ammoSlotSeven] += 100;
            else
                accountInformation[playerid][ammoSlotSeven] = 100;

            accountInformation[playerid][weaponSlotSeven] = 34;

            GivePlayerWeapon(playerid, WEAPON_SNIPER, accountInformation[playerid][ammoSlotSeven]);
            SetPlayerAmmo(playerid, WEAPON_SNIPER, accountInformation[playerid][ammoSlotSeven]);

            accountInformation[playerid][cashInHand] -= 25000;
            va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Ha comprado un Francotirador 100 Municion. Gracias por Comprar en Ammunation.");
            return ~0;
        } else if (isequal(text, "20", true)) {
            if (accountInformation[playerid][cashInHand] < 500) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas por lo menos $500 para poder comprar una Armadura.");
                return ~0;
            }

            accountInformation[playerid][armour] = 100;
            SetPlayerArmour(playerid, accountInformation[playerid][armour]);

            accountInformation[playerid][cashInHand] -= 500;
            va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Ha comprado una Armadura. Gracias por Comprar en Ammunation.");
            return ~0;
        }
    }
    return 1;
}

hook OnPlayerEnterDynamicCP(playerid, checkpoint) {
    for (new i = 0; i < numberOfCheckPointsCreated; i++) {
        if (checkpoint == checkPointsInformation[i][outsideCheckPoint] && checkPointsInformation[i][type] == 1) {
            SetPlayerPos(playerid, checkPointsInformation[i][insideXCoordinate], checkPointsInformation[i][insideYCoordinate], checkPointsInformation[i][insideZCoordinate]);
            SetPlayerFacingAngle(playerid, checkPointsInformation[i][insideAngle]);
            SetCameraBehindPlayer(playerid);

            SetPlayerInterior(playerid, checkPointsInformation[i][inside]);
            SetPlayerVirtualWorld(playerid, checkPointsInformation[i][virtualWorld]);
            return -1;
        } else if (checkpoint == checkPointsInformation[i][insideCheckPoint] && checkPointsInformation[i][type] == 1) {
            SetPlayerPos(playerid, checkPointsInformation[i][outsideXCoordinate], checkPointsInformation[i][outsideYCoordinate], checkPointsInformation[i][outsideZCoordinate]);
            SetPlayerFacingAngle(playerid, checkPointsInformation[i][outsideAngle]);
            SetCameraBehindPlayer(playerid);

            SetPlayerInterior(playerid, 0);
            SetPlayerVirtualWorld(playerid, 0);
            return -1;
        } else if (checkpoint == checkPointsInformation[i][interactionZoneCheckPoint] && checkPointsInformation[i][type] == 1) {
            CreateARTextDrawings(playerid);
            CreateARInOperation(playerid);
            CreateARTExitFromTheCheckPoint(playerid);
            return -1;
        }
    }
    return 1;
}