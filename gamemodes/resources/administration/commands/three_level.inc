YCMD:get(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 3)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 3 para poder usar este comando.");

    if (GetPlayerState(playerid) == PLAYER_STATE_SPECTATING)
        return 1;

    new destinationPlayerId;

    if (sscanf(params, "u", destinationPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /get <ID Del Jugador>");

    if (!IsPlayerConnected(destinationPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (destinationPlayerId == playerid)
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes traerte a ti mismo.");

    if (accountInformation[playerid][administrativeLevel] < accountInformation[destinationPlayerId][administrativeLevel])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

    new Float:x, Float:y, Float:z;
    GetPlayerPos(playerid, x, y, z);

    if (GetPlayerState(destinationPlayerId) == PLAYER_STATE_DRIVER) {
        new vehicleid = GetPlayerVehicleID(destinationPlayerId);
        SetVehiclePos(vehicleid, x, y + 2.5, z);
        LinkVehicleToInterior(vehicleid, GetPlayerInterior(playerid));
        SetVehicleVirtualWorld(vehicleid, GetPlayerVirtualWorld(playerid));
    } else {
        SetPlayerPos(destinationPlayerId, x, y + 2.0, z);
    }

    SetPlayerInterior(destinationPlayerId, GetPlayerInterior(playerid));
    SetPlayerVirtualWorld(destinationPlayerId, GetPlayerVirtualWorld(playerid));
    PlayerPlaySound(destinationPlayerId, 1057, 0.0, 0.0, 0.0);
    PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**GET: %s (%i) (ADMIN GET) Un administrador te ha teletransportado a su pocisión.", ReturnPlayerName(playerid), playerid);
    SendClientMessage(destinationPlayerId, -1, string);

    format(string, sizeof(string), ""COLOR_ROSA"**GET: %s (%i) (ADMIN GET) Has teletransportado al jugador a tu pocisión.", ReturnPlayerName(destinationPlayerId), destinationPlayerId);
    SendClientMessage(playerid, -1, string);
    return 1;
}

YCMD:armourall(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 3)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 3 para poder usar este comando.");

    foreach (new i : Player) {
        SetPlayerArmour(i, 100.0);
        PlayerPlaySound(i, 1057, 0.0, 0.0, 0.0);
    }

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**ARMOURALL: %s (%i) (ADMIN ARMOURALL) Un administrador ha dado chaleco a todos los jugadores.", ReturnPlayerName(playerid), playerid);
    SendClientMessageToAll(-1, string);
    return 1;
}

YCMD:sethealth(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 3)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 3 para poder usar este comando.");

    new destinationPlayerId, Float:amount;

    if (sscanf(params, "uf", destinationPlayerId, amount))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /sethealth <ID Del Jugador> <Cantidad>");

    if (!IsPlayerConnected(destinationPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (accountInformation[playerid][administrativeLevel] < accountInformation[destinationPlayerId][administrativeLevel])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

    SetPlayerHealth(destinationPlayerId, amount);
    PlayerPlaySound(destinationPlayerId, 1057, 0.0, 0.0, 0.0);
    PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**SETHEALTH: %s (%i) (ADMIN SETHEALTH) Un administrador ha establecido tu vída al: %0.2f.", ReturnPlayerName(playerid), playerid, amount);
    SendClientMessage(destinationPlayerId, -1, string);

    format(string, sizeof(string), ""COLOR_ROSA"**SETHEALTH: %s (%i) (ADMIN SETHEALTH) Has establecido la vida del jugador al: %0.2f.", ReturnPlayerName(destinationPlayerId), destinationPlayerId, amount);
    SendClientMessage(playerid, -1, string);
    return 1;
}

YCMD:setarmour(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 3)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 3 para poder usar este comando.");

    new destinationPlayerId, Float:amount;
    if (sscanf(params, "uf", destinationPlayerId, amount))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /setarmour <ID Del Jugador> <Cantidad>");

    if (!IsPlayerConnected(destinationPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (accountInformation[playerid][administrativeLevel] < accountInformation[destinationPlayerId][administrativeLevel])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

    SetPlayerArmour(destinationPlayerId, amount);

    PlayerPlaySound(destinationPlayerId, 1057, 0.0, 0.0, 0.0);
    PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**SETARMOUR: %s (%i) (ADMIN SETARMOUR) Un administrador ha establecido tu chaleco al: %0.2f.", ReturnPlayerName(playerid), playerid, amount);
    SendClientMessage(destinationPlayerId, -1, string);

    format(string, sizeof(string), ""COLOR_ROSA"**SETARMOUR: %s (%i) (ADMIN SETARMOUR) Has estanlecido el chaleco del jugador al: %0.2f.", ReturnPlayerName(destinationPlayerId), destinationPlayerId, amount);
    SendClientMessage(playerid, -1, string);
    return 1;
}

YCMD:freeze(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 3)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 3 para poder usar este comando.");

    new destinationPlayerId, _reason[35];

    if (sscanf(params, "uS(No reason specified)[35]", destinationPlayerId, _reason))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /freeze <ID Del Jugador> <Razón>");

    if (!IsPlayerConnected(destinationPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (accountInformation[playerid][administrativeLevel] < accountInformation[destinationPlayerId][administrativeLevel])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

    TogglePlayerControllable(destinationPlayerId, false);

    PlayerPlaySound(destinationPlayerId, 1057, 0.0, 0.0, 0.0);
    PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**FREEZE: %s (%i) (ADMIN FREEZE) Un administrador te ha congelado por la razón: %s.", ReturnPlayerName(playerid), playerid, _reason);
    SendClientMessage(destinationPlayerId, -1, string);

    format(string, sizeof(string), ""COLOR_ROSA"**FREEZE: %s (%i) (ADMIN FREEZE) Has congelado al jugador por la razón: %s.", ReturnPlayerName(destinationPlayerId), destinationPlayerId, _reason);
    SendClientMessage(playerid, -1, string);
    return 1;
}

YCMD:setkills(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 3)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos nivel administrativo 3 para usar este comando.");

    new destinationPlayerId, amount;

    if (sscanf(params, "ui", destinationPlayerId, amount))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /setkills <ID jugador> <Cantidad de kills>");

    if (!IsPlayerConnected(destinationPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (accountInformation[playerid][administrativeLevel] < accountInformation[destinationPlayerId][administrativeLevel])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando sobre un administrador de mayor nivel.");

    accountInformation[destinationPlayerId][killings] = amount;

    new string[144];
    format(string, sizeof(string), ""COLOR_ROSA"**SETKILLS: %s (%i) (ADMIN SETKILLS) Un administrador ha establecido tus muertes en %i.", ReturnPlayerName(playerid), playerid, amount);
    SendClientMessage(destinationPlayerId, -1, string);
    PlayerPlaySound(destinationPlayerId, 1057, 0.0, 0.0, 0.0);

    format(string, sizeof(string), ""COLOR_ROSA"**SETKILLS: %s (%i) (ADMIN SETKILLS) Has establecido %i muertes al jugador.", ReturnPlayerName(destinationPlayerId), destinationPlayerId, amount);
    SendClientMessage(playerid, -1, string);
    PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);
    return 1;
}

YCMD:setdeaths(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 3)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos nivel administrativo 3 para usar este comando.");

    new destinationPlayerId, amount;

    if (sscanf(params, "ui", destinationPlayerId, amount))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /setdeaths <ID jugador> <cantidad>");

    if (!IsPlayerConnected(destinationPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (accountInformation[playerid][administrativeLevel] < accountInformation[destinationPlayerId][administrativeLevel])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando sobre un administrador de mayor nivel.");

    accountInformation[destinationPlayerId][deaths] = amount;

    new string[144];
    format(string, sizeof(string), ""COLOR_ROSA"**SETDEATHS: %s (%i) (ADMIN SETDEATHS) Un administrador ha establecido tus muertes en %i.", ReturnPlayerName(playerid), playerid, amount);
    SendClientMessage(destinationPlayerId, -1, string);
    PlayerPlaySound(destinationPlayerId, 1057, 0.0, 0.0, 0.0);

    format(string, sizeof(string), ""COLOR_ROSA"**SETDEATHS: %s (%i) (ADMIN SETDEATHS) Has establecido %i muertes al jugador.", ReturnPlayerName(destinationPlayerId), destinationPlayerId, amount);
    SendClientMessage(playerid, -1, string);
    PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);
    return 1;
}

YCMD:unfreeze(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 3)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 3 para poder usar este comando.");

    new destinationPlayerId;

    if (sscanf(params, "u", destinationPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /unfreeze <ID Del Jugador>");

    if (!IsPlayerConnected(destinationPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (accountInformation[playerid][administrativeLevel] < accountInformation[destinationPlayerId][administrativeLevel])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

    TogglePlayerControllable(destinationPlayerId, true);

    PlayerPlaySound(destinationPlayerId, 1057, 0.0, 0.0, 0.0);
    PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**UNFREEZE: %s (%i) (ADMIN UNFREEZE) Un administrador te ha descongelado.", ReturnPlayerName(playerid), playerid);
    SendClientMessage(destinationPlayerId, -1, string);

    format(string, sizeof(string), ""COLOR_ROSA"**UNFREEZE: %s (%i) (ADMIN UNFREEZE) Has descongelado al jugador.", ReturnPlayerName(destinationPlayerId), destinationPlayerId);
    SendClientMessage(playerid, -1, string);
    return 1;
}

YCMD:giveweapon(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 3)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos nivel administrativo 3 para usar este comando.");

    new destinationPlayerId, weaponId, ammo;

    if (sscanf(params, "uiI(250)", destinationPlayerId, weaponId, ammo))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /giveweapon <ID del jugador> <ID del arma> <Cabtidad de munición>");

    if (!IsPlayerConnected(destinationPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (accountInformation[playerid][administrativeLevel] < accountInformation[destinationPlayerId][administrativeLevel])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando sobre un administrador con nivel mayor al tuyo.");

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

    GivePlayerWeapon(destinationPlayerId, weaponName, ammo);

    new string[144];
    format(string, sizeof(string), ""COLOR_ROSA"**GIVEWEAPON: %s (%i) (ADMIN GIVEWEAPON) Un administrador te ha dado el arma (%i) con %i balas.", ReturnPlayerName(playerid), playerid, weaponId, ammo);
    SendClientMessage(destinationPlayerId, -1, string);

    format(string, sizeof(string), ""COLOR_ROSA"**GIVEWEAPON: %s (%i) (ADMIN GIVEWEAPON) Has dado el arma (%i) con %i balas al jugador.", ReturnPlayerName(destinationPlayerId), destinationPlayerId, weaponId, ammo);
    SendClientMessage(playerid, -1, string);
    return 1;
}

YCMD:setcash(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 3)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 3 para poder usar este comando.");

    new destinationPlayerId, amount;

    if (sscanf(params, "ui", destinationPlayerId, amount))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /setcash <ID Del Jugador> <Cantidad>");

    if (!IsPlayerConnected(destinationPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (accountInformation[playerid][administrativeLevel] < accountInformation[destinationPlayerId][administrativeLevel])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

    accountInformation[destinationPlayerId][cashInHand] = amount;

    ResetPlayerMoney(destinationPlayerId);
    GivePlayerMoney(destinationPlayerId, amount);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**SETCASH: %s (%i) (ADMIN SETCASH) Un administrador ha establecido tu dinero a $%i de dinero.", ReturnPlayerName(playerid), playerid, amount);
    SendClientMessage(destinationPlayerId, -1, string);

    format(string, sizeof(string), ""COLOR_ROSA"**SETCASH: %s (%i) (ADMIN SETCASH) Le has establecido el dinero del jugador a $%i de dinero.", ReturnPlayerName(destinationPlayerId), destinationPlayerId, amount);
    SendClientMessage(playerid, -1, string);
    return 1;
}

YCMD:setscore(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 3)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 3 para poder usar este comando.");

    new destinationPlayerId, amount;

    if (sscanf(params, "ui", destinationPlayerId, amount))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /setscore <ID Del Jugador> [Cantidad]");

    if (!IsPlayerConnected(destinationPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (accountInformation[playerid][administrativeLevel] < accountInformation[destinationPlayerId][administrativeLevel])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

    accountInformation[destinationPlayerId][level] = amount;
    SetPlayerScore(destinationPlayerId, amount);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**SETSCORE: %s (%i) (ADMIN SETSCORE) Un administrador ha establecido tu nivel al nivel %i.", ReturnPlayerName(playerid), playerid, amount);
    SendClientMessage(destinationPlayerId, -1, string);

    format(string, sizeof(string), ""COLOR_ROSA"**SETSCORE: %s (%i) (ADMIN SETSCORE) Has establecido el nivel del jugador al nivel %i.", ReturnPlayerName(destinationPlayerId), destinationPlayerId, amount);
    SendClientMessage(playerid, -1, string);
    return 1;
}

YCMD:givecash(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 3)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 3 para poder usar este comando.");

    new destinationPlayerId, amount;

    if (sscanf(params, "ui", destinationPlayerId, amount))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /givecash <ID Del Jugador> <Cantidad>");

    if (!IsPlayerConnected(destinationPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    accountInformation[destinationPlayerId][cashInHand] += amount;
    GivePlayerMoney(destinationPlayerId, amount);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**GIVECASH: %s (%i) (ADMIN GIVECASH) Un administrador te dado $%i de dinero.", ReturnPlayerName(playerid), playerid, amount);
    SendClientMessage(destinationPlayerId, -1, string);

    format(string, sizeof(string), ""COLOR_ROSA"**GIVECASH: %s (%i) (ADMIN GIVECASH) Has dado $%i de dinero al jugador.", ReturnPlayerName(destinationPlayerId), destinationPlayerId, amount);
    SendClientMessage(playerid, -1, string);
    return 1;
}

YCMD:givescore(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 3)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 3 para poder usar este comando.");

    new destinationPlayerId, amount;
    if (sscanf(params, "ui", destinationPlayerId, amount))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /givescore <ID Del Jugador> <Cantidad>");

    if (!IsPlayerConnected(destinationPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    SetPlayerScore(destinationPlayerId, amount);
    accountInformation[destinationPlayerId][level] = amount;

    PlayerPlaySound(destinationPlayerId, 1057, 0.0, 0.0, 0.0);
    PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**GIVESCORE: %s (%i) (ADMIN GIVESCORE) Un administrador te dado %i de nivel.", ReturnPlayerName(playerid), playerid, amount);
    SendClientMessage(destinationPlayerId, -1, string);

    format(string, sizeof(string), ""COLOR_ROSA"**GIVESCORE: %s (%i) (ADMIN GIVESCORE) Has dado %i de nivel al jugador.", ReturnPlayerName(destinationPlayerId), destinationPlayerId, amount);
    SendClientMessage(playerid, -1, string);
    return 1;
}

YCMD:spawncar(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 3)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 3 para poder usar este comando.");

    new vehicleId;

    if (sscanf(params, "i", vehicleId))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /spawncar <ID del Vehículo>");

    if (! IsValidVehicle(vehicleId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El vehículo especificado no está creado.");

    SetVehicleToRespawn(vehicleId);
    PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**SPAWNCAR: %s (%i) (ADMIN SPAWNCAR) Un administrador ha respawneado un vehículo (%i).", ReturnPlayerName(playerid), playerid, vehicleId);
    SendClientMessageToAll(-1, string);
    return 1;
}

YCMD:destroycar(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 3)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 3 para poder usar este comando.");

    new vehicleId;

    if (sscanf(params, "i", vehicleId))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /destroycar <ID del Vehículo>");

    if (!IsValidVehicle(vehicleId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El vehículo especificado no está creado.");

    SetVehicleToRespawn(vehicleId);
    PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**SPAWNCAR: %s (%i) (ADMIN SPAWNCAR) Un administrador ha destruido un vehículo (%i).", ReturnPlayerName(playerid), playerid, vehicleId);
    SendClientMessageToAll(-1, string);
    return 1;
}

YCMD:spawncars(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 3)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 3 para poder usar este comando.");

    for (new i; i < MAX_VEHICLES; i++) {
        foreach (new p : Player) {
            if (GetPlayerVehicleID(p) == i)
                break;
            else
                SetVehicleToRespawn(i);
        }
    }

    foreach (new i : Player)
        PlayerPlaySound(i, 1057, 0.0, 0.0, 0.0);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**SPAWNCARS: %s (%i) (ADMIN SPAWNCARS) Un administrador ha respawneado todos los vehículos.", ReturnPlayerName(playerid), playerid);
    SendClientMessageToAll(-1, string);
    return 1;
}