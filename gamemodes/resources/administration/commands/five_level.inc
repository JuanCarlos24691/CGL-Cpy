YCMD:gmx(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 5)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 5  para poder usar este comando.");

    new time;

    if (sscanf(params, "I(0)", time))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /gmx <Tiempo>");

    if (time < 0 || time > 5 * 60)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Tiempo de reinicio inválido, debe estar entre 0 - 360 segundos.");

    if (time > 0) {
        new string[150];
        format(string, sizeof(string), ""COLOR_ROSA"**GMX: %s (%i) (ADMIN GMX) Un administrador ha iniciado un reinicio del servidor en %i segundos.", ReturnPlayerName(playerid), playerid, time);
        SendClientMessageToAll(-1, string);

        SetTimer("OnServerRequestRestart", time * 1000, false);
    } else {
        new string[150];
        format(string, sizeof(string), ""COLOR_ROSA"**GMX: %s (%i) (ADMIN GMX) Un administrador ha reiniciado el servidor, por favor espera mientras el servidor inicia de nuevo.", ReturnPlayerName(playerid), playerid);
        SendClientMessageToAll(-1, string);

        SendRconCommand("gmx");
    }
    return 1;
}

YCMD:setadminlevel(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 5)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 5 para poder usar este comando.");

    new destinationPlayerId, tempAdministrativeLevel;

    if (sscanf(params, "ui", destinationPlayerId, tempAdministrativeLevel))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /setadministrativelevel <ID Del Jugador> <Nivel>");

    if (!IsPlayerConnected(destinationPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (destinationPlayerId == playerid)
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes hacer esto con tigo mismo.");

    if (accountInformation[playerid][administrativeLevel] < accountInformation[destinationPlayerId][administrativeLevel])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

    if (tempAdministrativeLevel < 0 || tempAdministrativeLevel > 5)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Nivel inválido, debe estar entre 0 - 5.");

    if (accountInformation[destinationPlayerId][administrativeLevel] == tempAdministrativeLevel)
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador ya tiene ese nivel administrativo.");

    new string[150];

    if (tempAdministrativeLevel > accountInformation[destinationPlayerId][administrativeLevel]) {
        format(string, sizeof(string), ""COLOR_ROSA"**SETADMINLEVEL: %s (%i) (ADMIN SETADMINLEVEL) Un administrador te ha subido el nivel administrativo al nivel %i.", ReturnPlayerName(playerid), playerid, tempAdministrativeLevel);
        SendClientMessage(destinationPlayerId, -1, string);

        format(string, sizeof(string), ""COLOR_ROSA"**SETADMINLEVEL: %s (%i) (ADMIN SETADMINLEVEL) Has subido el nivel administrativo del jugador al nivel %i.", ReturnPlayerName(destinationPlayerId), destinationPlayerId, tempAdministrativeLevel);
        SendClientMessage(playerid, -1, string);
    } else {
        format(string, sizeof(string), ""COLOR_ROSA"**SETADMINLEVEL: %s (%i) (ADMIN SETADMINLEVEL) Un administrador te ha degradado el nivel administrativo al nivel %i.", ReturnPlayerName(playerid), playerid, tempAdministrativeLevel);
        SendClientMessage(destinationPlayerId, -1, string);

        format(string, sizeof(string), ""COLOR_ROSA"**SETADMINLEVEL: %s (%i) (ADMIN SETADMINLEVEL) Has degradado el nivel administrativo del jugador al nivel %i.", ReturnPlayerName(destinationPlayerId), destinationPlayerId, tempAdministrativeLevel);
        SendClientMessage(playerid, -1, string);
    }

    accountInformation[destinationPlayerId][administrativeLevel] = tempAdministrativeLevel;
    return 1;
}

YCMD:giveallweapon(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 5)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos nivel administrativo 5 para usar este comando.");

    new weaponId, ammo;

    if (sscanf(params, "iI(250)", weaponId, ammo))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /giveallweapon <ID del arma> <Cantidad de munición>");

    new WEAPON:weaponName;

    switch (weaponId) {
        case 0: weaponName = WEAPON_FIST;
        case 1: weaponName = WEAPON_BRASSKNUCKLE;
        case 2: weaponName = WEAPON_GOLFCLUB;
        case 3: weaponName = WEAPON_NITESTICK;
        case 4: weaponName = WEAPON_KNIFE;
        case 5: weaponName = WEAPON_BAT;
        case 6: weaponName = WEAPON_SHOVEL;
        case 7: weaponName = WEAPON_POOLSTICK;
        case 8: weaponName = WEAPON_KATANA;
        case 9: weaponName = WEAPON_CHAINSAW;
        case 10: weaponName = WEAPON_DILDO;
        case 11: weaponName = WEAPON_DILDO2;
        case 12: weaponName = WEAPON_VIBRATOR;
        case 13: weaponName = WEAPON_VIBRATOR2;
        case 14: weaponName = WEAPON_FLOWER;
        case 15: weaponName = WEAPON_CANE;
        case 16: weaponName = WEAPON_GRENADE;
        case 17: weaponName = WEAPON_TEARGAS;
        case 18: weaponName = WEAPON_MOLTOV;
        case 22: weaponName = WEAPON_COLT45;
        case 23: weaponName = WEAPON_SILENCED;
        case 24: weaponName = WEAPON_DEAGLE;
        case 25: weaponName = WEAPON_SHOTGUN;
        case 26: weaponName = WEAPON_SAWEDOFF;
        case 27: weaponName = WEAPON_SHOTGSPA;
        case 28: weaponName = WEAPON_UZI;
        case 29: weaponName = WEAPON_MP5;
        case 30: weaponName = WEAPON_AK47;
        case 31: weaponName = WEAPON_M4;
        case 32: weaponName = WEAPON_TEC9;
        case 33: weaponName = WEAPON_RIFLE;
        case 34: weaponName = WEAPON_SNIPER;
        case 35: weaponName = WEAPON_ROCKETLAUNCHER;
        case 36: weaponName = WEAPON_HEATSEEKER;
        case 37: weaponName = WEAPON_FLAMETHROWER;
        case 38: weaponName = WEAPON_MINIGUN;
        case 39: weaponName = WEAPON_SATCHEL;
        case 40: weaponName = WEAPON_BOMB;
        case 41: weaponName = WEAPON_SPRAYCAN;
        case 42: weaponName = WEAPON_FIREEXTINGUISHER;
        case 43: weaponName = WEAPON_CAMERA;
        case 44: weaponName = WEAPON_NIGHT_VISION_GOGGLES;
        case 45: weaponName = WEAPON_THERMAL_GOGGLES;
        case 46: weaponName = WEAPON_PARACHUTE;
        default:
            return SendClientMessage(playerid, -1, ""COLOR_RED"El ID del arma especificado no es válido.");
    }

    foreach (new i : Player)
        if (accountInformation[i][inGame])
            GivePlayerWeapon(i, weaponName, ammo);

    new string[144];
    format(string, sizeof(string), ""COLOR_ROSA"**GIVEALLWEAPON: %s (%i) (ADMIN GIVEALLWEAPON) Un administrador ha dado armas a todos los jugadores.", ReturnPlayerName(playerid), playerid);
    SendClientMessageToAll(-1, string);
    return 1;
}

YCMD:fakechat(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 5)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 5  para poder usar este comando.");

    new destinationPlayerId, text[129];
    if (sscanf(params, "us[129]", destinationPlayerId, text))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /fakechat <ID Del Jugador> <Texto>");

    if (!IsPlayerConnected(destinationPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (accountInformation[playerid][administrativeLevel] < accountInformation[destinationPlayerId][administrativeLevel])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

    PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**FAKECHAT: %s (%i) (ADMIN FAKECHAT) Un administrador te ha enviado un mensaje: %s", ReturnPlayerName(playerid), playerid, text);
    SendClientMessageToAll(-1, string);

    format(string, sizeof(string), ""COLOR_ROSA"**FAKECHAT: %s (%i) (ADMIN FAKECHAT) Has enviado un mensaje al jugador: %s", ReturnPlayerName(destinationPlayerId), destinationPlayerId, text);
    SendClientMessage(playerid, -1, string);
    return 1;
}

forward OnServerRequestRestart();
public 	OnServerRequestRestart() {
    SendRconCommand("gmx");
}