forward Reward(const playerid, const killerid, const weapon);
public Reward(const playerid, const killerid, const weapon) {
    if (killerid == playerid || killerid == INVALID_PLAYER_ID)
        return 1;

    if (accountInformation[killerid][onDuty])
        return 1;

    if (weapon != 0 && weapon != 1 && weapon != 2 && weapon != 3 && weapon != 4 && weapon != 5 && weapon != 6 && weapon != 7 && weapon != 8 && weapon != 9 && weapon != 10 && weapon != 11 && weapon != 12 && weapon != 13 && weapon != 14 && weapon != 15 && weapon != 16 && weapon != 17 && weapon != 18 && weapon != 22 && weapon != 23 && weapon != 24 && weapon != 25 && weapon != 26 && weapon != 27 && weapon != 28 && weapon != 29 && weapon != 30 && weapon != 31 && weapon != 32 && weapon != 33 && weapon != 34 && weapon != 36 && weapon != 37 && weapon != 38 && weapon != 40 && weapon != 41 && weapon != 42 && weapon != 49 && weapon != 51)
        return 1;

    // Recompensar al asesino
    accountInformation[killerid][killings]++;

    if (accountInformation[killerid][level] <= 5328)
        accountInformation[killerid][level]++;

    if (accountInformation[killerid][assignedClan] != NO_TEAM)
        clanInformation[SearchClanIndex(accountInformation[killerid][assignedClan])][level]++;

    if (assaultPlayerInformation[playerid][assaultCompleted]) {
        accountInformation[killerid][cashInHand] += 170000;

        va_SendClientMessageToAll(-1, ""COLOR_DARK_RED"%s (%d) Asesinó A %s (%d) Y Cobro La Recompensa Que %s Ofrecia Por Su Muerte.", accountInformation[killerid][name], killerid, accountInformation[playerid][name], playerid, nameOfAssaultLocations[citiesInformation[selectedCity]][0]);
        va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE3"Recibiste $170000 Extra Por Detener A %s (%d) Mientras Realizaba El Robo.", accountInformation[playerid][name], playerid);
    }

    switch (weapon) {
        case 0: {
            accountInformation[killerid][cashInHand] += 3000;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $3000 Por Matar A %s (%d) Con Los Puños.", accountInformation[playerid][name], playerid);
        }
        case 1: {
            accountInformation[killerid][cashInHand] += 1500;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $1500 Por Matar A %s (%d) Con Unos Nudillos De Bronce.", accountInformation[playerid][name], playerid);
        }
        case 2: {
            accountInformation[killerid][cashInHand] += 3000;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $3000 Por Matar A %s (%d) Con Palo De Golf.", accountInformation[playerid][name], playerid);
        }
        case 3: {
            accountInformation[killerid][cashInHand] += 1500;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $1500 Por Matar A %s (%d) Con Porra De Policía.", accountInformation[playerid][name], playerid);
        }
        case 4: {
            accountInformation[killerid][cashInHand] += 1500;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $1500 Por Matar A %s (%d) Con Cuchillo.", accountInformation[playerid][name], playerid);
        }
        case 5: {
            accountInformation[killerid][cashInHand] += 3000;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $3000 Por Matar A %s (%d) Con Bate De Béisbol.", accountInformation[playerid][name], playerid);
        }
        case 6: {
            accountInformation[killerid][cashInHand] += 3000;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $3000 Por Matar A %s (%d) Con Pala.", accountInformation[playerid][name], playerid);
        }
        case 7: {
            accountInformation[killerid][cashInHand] += 3000;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $3000 Por Matar A %s (%d) Con Taco De Billar.", accountInformation[playerid][name], playerid);
        }
        case 8: {
            accountInformation[killerid][cashInHand] += 1500;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $1500 Por Matar A %s (%d) Con Katana.", accountInformation[playerid][name], playerid);
        }
        case 9: {
            accountInformation[killerid][cashInHand] += 1500;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $1500 Por Matar A %s (%d) Con Motosierra.", accountInformation[playerid][name], playerid);
        }
        case 10: {
            accountInformation[killerid][cashInHand] += 1500;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $1500 Por Matar A %s (%d) Con Consolador Morado.", accountInformation[playerid][name], playerid);
        }
        case 11: {
            accountInformation[killerid][cashInHand] += 1500;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $1500 Por Matar A %s (%d) Con Consolador.", accountInformation[playerid][name], playerid);
        }
        case 12: {
            accountInformation[killerid][cashInHand] += 1500;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $1500 Por Matar A %s (%d) Con Vibrador.", accountInformation[playerid][name], playerid);
        }
        case 13: {
            accountInformation[killerid][cashInHand] += 1500;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $1500 Por Matar A %s (%d) Con Vibrador De Plata.", accountInformation[playerid][name], playerid);
        }
        case 14: {
            accountInformation[killerid][cashInHand] += 2000;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $2000 Por Matar A %s (%d) Con Unas Flores.", accountInformation[playerid][name], playerid);
        }
        case 15: {
            accountInformation[killerid][cashInHand] += 3000;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $3000 Por Matar A %s (%d) Con Bastón.", accountInformation[playerid][name], playerid);
        }
        case 16: {
            accountInformation[killerid][cashInHand] += 1500;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $1500 Por Matar A %s (%d) Con Granada.", accountInformation[playerid][name], playerid);
        }
        case 17: {
            accountInformation[killerid][cashInHand] += 1500;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $1500 Por Matar A %s (%d) Con Gas Lacrimógeno.", accountInformation[playerid][name], playerid);
        }
        case 18: {
            accountInformation[killerid][cashInHand] += 1500;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $1500 Por Matar A %s (%d) Con Cóctel Molotov.", accountInformation[playerid][name], playerid);
        }
        case 22: {
            accountInformation[killerid][cashInHand] += 3500;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $3500 Por Matar A %s (%d) Con 9mm.", accountInformation[playerid][name], playerid);
        }
        case 23: {
            accountInformation[killerid][cashInHand] += 3500;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $3500 Por Matar A %s (%d) Con 9mm Silenciada.", accountInformation[playerid][name], playerid);
        }
        case 24: {
            accountInformation[killerid][cashInHand] += 2500;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $2500 Por Matar A %s (%d) Con Desert Eagle.", accountInformation[playerid][name], playerid);
        }
        case 25: {
            accountInformation[killerid][cashInHand] += 2500;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $2500 Por Matar A %s (%d) Con Escopeta.", accountInformation[playerid][name], playerid);
        }
        case 26: {
            accountInformation[killerid][cashInHand] += 2500;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $2500 Por Matar A %s (%d) Con Escopeta Recortada.", accountInformation[playerid][name], playerid);
        }
        case 27: {
            accountInformation[killerid][cashInHand] += 2500;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $2500 Por Matar A %s (%d) Con Escopeta De Combate.", accountInformation[playerid][name], playerid);
        }
        case 28: {
            accountInformation[killerid][cashInHand] += 2500;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $2500 Por Matar A %s (%d) Con Micro Uzi.", accountInformation[playerid][name], playerid);
        }
        case 29: {
            accountInformation[killerid][cashInHand] += 2500;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $2500 Por Matar A %s (%d) Con MP5.", accountInformation[playerid][name], playerid);
        }
        case 30: {
            accountInformation[killerid][cashInHand] += 2000;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $2000 Por Matar A %s (%d) Con AK-47.", accountInformation[playerid][name], playerid);
        }
        case 31: {
            accountInformation[killerid][cashInHand] += 3000;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $3000 Por Matar A %s (%d) Con M4.", accountInformation[playerid][name], playerid);
        }
        case 32: {
            accountInformation[killerid][cashInHand] += 2500;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $2500 Por Matar A %s (%d) Con Tec-9.", accountInformation[playerid][name], playerid);
        }
        case 33: {
            accountInformation[killerid][cashInHand] += 3000;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $3000 Por Matar A %s (%d) Con Rifle De Campo.", accountInformation[playerid][name], playerid);
        }
        case 34: {
            accountInformation[killerid][cashInHand] += 2500;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $2500 Por Matar A %s (%d) Con Rifle De Francotirador.", accountInformation[playerid][name], playerid);
        }
        case 36: {
            accountInformation[killerid][cashInHand] += 1500;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $1500 Por Matar A %s (%d) Con HS Rocket.", accountInformation[playerid][name], playerid);
        }
        case 37: {
            accountInformation[killerid][cashInHand] += 1500;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $1500 Por Matar A %s (%d) Con Lanzallamas.", accountInformation[playerid][name], playerid);
        }
        case 38: {
            accountInformation[killerid][cashInHand] += 0;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"No has recibido dinero por matar Con Minigun.", accountInformation[playerid][name], playerid);
        }
        case 40: {
            accountInformation[killerid][cashInHand] += 1500;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $1500 Por Matar A %s (%d) Con Detonador.", accountInformation[playerid][name], playerid);
        }
        case 41: {
            accountInformation[killerid][cashInHand] += 1500;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $1500 Por Matar A %s (%d) Con Lata De Aerosol.", accountInformation[playerid][name], playerid);
        }
        case 42: {
            accountInformation[killerid][cashInHand] += 1500;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $1500 Por Matar A %s (%d) Con Extintor De Incendios.", accountInformation[playerid][name], playerid);
        }
        case 49: {
            accountInformation[killerid][cashInHand] += 1000;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $1000 Por Matar A %s (%d) Con Drive-By.", accountInformation[playerid][name], playerid);
        }
        case 51: {
            accountInformation[killerid][cashInHand] += 1500;
            va_SendClientMessage(killerid, -1, ""COLOR_AQUAMARINE_GREEN"Has Obtenido $1500 Por Matar A %s (%d) Con RPG.", accountInformation[playerid][name], playerid);
        }
    }
    return 1;
}