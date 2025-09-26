YCMD:ann(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 2)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 2 para poder usar este comando.");

    new message[35];
    if (sscanf(params, "s[35]", message))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /ann <Mensaje>");

    GameTextForAll(message, 5000, 3);
    return 1;
}

YCMD:jetpack(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 2)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 2 para poder usar este comando.");

    new targetPlayerId;

    if (sscanf(params, "u", targetPlayerId) || ! sscanf(params, "u", targetPlayerId) && playerid == targetPlayerId) {
        SetPlayerSpecialAction(playerid, SPECIAL_ACTION_USEJETPACK);
        PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);
        return 1;
    }

    if (!IsPlayerConnected(targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (accountInformation[playerid][administrativeLevel] < accountInformation[targetPlayerId][administrativeLevel])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

    SetPlayerSpecialAction(targetPlayerId, SPECIAL_ACTION_USEJETPACK);
    PlayerPlaySound(targetPlayerId, 1057, 0.0, 0.0, 0.0);
    PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**JETPACK: %s (%i) (ADMIN JETPACK) Un administrador te ha dado un jetpack.", ReturnPlayerName(playerid), playerid);
    SendClientMessage(targetPlayerId, -1, string);

    format(string, sizeof(string), ""COLOR_ROSA"**JETPACK: %s (%i) (ADMIN JETPACK) Le has dado un jetpack al jugador.", ReturnPlayerName(targetPlayerId), targetPlayerId);
    SendClientMessage(playerid, -1, string);
    return 1;
}

YCMD:aweaps(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 2)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 2 para poder usar este comando.");

    if (GetPlayerState(playerid) == PLAYER_STATE_SPECTATING)
        return 1;

    GivePlayerWeapon(playerid, WEAPON_CHAINSAW, 1); // Chainsaw
    GivePlayerWeapon(playerid, WEAPON_TEC9, 999999); // Tec-9
    GivePlayerWeapon(playerid, WEAPON_GRENADE, 999999); // Grenades
    GivePlayerWeapon(playerid, WEAPON_DEAGLE, 999999); // Deagle
    GivePlayerWeapon(playerid, WEAPON_SAWEDOFF, 999999); // Sawn off
    GivePlayerWeapon(playerid, WEAPON_MP5, 999999); // Mp5
    GivePlayerWeapon(playerid, WEAPON_M4, 999999); // M4
    GivePlayerWeapon(playerid, WEAPON_SNIPER, 999999); // Sniper
    GivePlayerWeapon(playerid, WEAPON_MINIGUN, 999999); // Minigun

    PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);

    GameTextForPlayer(playerid, "~b~¡Te has dado armas de administrador!", 5000, 3);
    return 1;
}

YCMD:text(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 2)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 2 para poder usar este comando.");

    new targetPlayerId, message[35];

    if (sscanf(params, "us[35]", targetPlayerId, message))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /text <ID Del Jugador> <Mensaje>");

    if (!IsPlayerConnected(targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (targetPlayerId == playerid)
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes enviarte un mensaje a ti mismo.");

    GameTextForPlayer(targetPlayerId, message, 5000, 3);

    PlayerPlaySound(targetPlayerId, 1057, 0.0, 0.0, 0.0);
    PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**TEXT: %s (%i) (ADMIN TEXT) Un administrador te enviado un mensaje en pantalla.", ReturnPlayerName(playerid), playerid);
    SendClientMessage(targetPlayerId, -1, string);

    format(string, sizeof(string), ""COLOR_ROSA"**TEXT: %s (%i) (ADMIN TEXT) La has enviado un mensaje en pantalla al jugador.", ReturnPlayerName(targetPlayerId), targetPlayerId);
    SendClientMessage(playerid, -1, string);
    return 1;
}

YCMD:eject(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 2)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 2 para poder usar este comando.");

    new targetPlayerId;

    if (sscanf(params, "u", targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /eject <ID Del Jugador>");

    if (!IsPlayerConnected(targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (accountInformation[playerid][administrativeLevel] < accountInformation[targetPlayerId][administrativeLevel])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

    if (!IsPlayerInAnyVehicle(targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está en un vehículo.");

    new Float:x, Float:y, Float:z;
    GetPlayerPos(targetPlayerId, x, y, z);
    SetPlayerPos(targetPlayerId, x, y, z + 1.0);
    PlayerPlaySound(targetPlayerId, 1057, 0.0, 0.0, 0.0);
    PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**EJECT: %s (%i) (ADMIN EJECT) Un administrador te ha expulsado de tu vehículo.", ReturnPlayerName(playerid), playerid);
    SendClientMessage(targetPlayerId, -1, string);

    format(string, sizeof(string), ""COLOR_ROSA"**EJECT: %s (%i) (ADMIN EJECT) Has expulsado al jugador de su vehículo.", ReturnPlayerName(targetPlayerId), targetPlayerId);
    SendClientMessage(playerid, -1, string);
    return 1;
}

YCMD:carpaint(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 2)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 2 para poder usar este comando.");

    new targetPlayerId, paint;

    if (sscanf(params, "ui", targetPlayerId, paint))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /carpaint <ID Del Jugador> <Paintjob>");

    if (!IsPlayerConnected(targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (accountInformation[playerid][administrativeLevel] < accountInformation[targetPlayerId][administrativeLevel])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

    if (!IsPlayerInAnyVehicle(targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está en un vehículo.");

    if (paint < 0 || paint > 3)
        return SendClientMessage(playerid, -1, ""COLOR_RED"ID de pintura inválido, debe estar entre 0 y 3.");

    ChangeVehiclePaintjob(GetPlayerVehicleID(targetPlayerId), paint);
    PlayerPlaySound(targetPlayerId, 1133, 0.0, 0.0, 0.0);
    PlayerPlaySound(playerid, 1133, 0.0, 0.0, 0.0);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**CARPAINT: %s (%i) (ADMIN CARPAINT) Un administrador ha cambiado la pintura de tu vehículo al numero: %i.", ReturnPlayerName(playerid), playerid, paint);
    SendClientMessage(targetPlayerId, -1, string);

    format(string, sizeof(string), ""COLOR_ROSA"*CARPAINT: %s (%i) (ADMIN CARPAINT) Has cambiado la pintura del vehículo del jugador al numero: %i.", ReturnPlayerName(targetPlayerId), targetPlayerId, paint);
    SendClientMessage(playerid, -1, string);
    return 1;
}

YCMD:carcolor(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 2)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 2 para poder usar este comando.");

    new targetPlayerId, colorOne, colorTwo;

    if (sscanf(params, "uiI(-1)", targetPlayerId, colorOne, colorTwo))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /carcolor <ID Del Jugador> <Primer color> <Segundo color>");

    if (!IsPlayerConnected(targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (accountInformation[playerid][administrativeLevel] < accountInformation[targetPlayerId][administrativeLevel])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

    if (!IsPlayerInAnyVehicle(targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está en un vehículo.");

    ChangeVehicleColours(GetPlayerVehicleID(targetPlayerId), colorOne, colorTwo);
    PlayerPlaySound(targetPlayerId, 1133, 0.0, 0.0, 0.0);
    PlayerPlaySound(playerid, 1133, 0.0, 0.0, 0.0);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**CARCOLOR: %s (%i) (ADMIN CARCOLOR) Un administrador ha cambiado el color de tu vehículo al numero: %i & %i.", ReturnPlayerName(playerid), playerid, colorOne, colorTwo);
    SendClientMessage(targetPlayerId, -1, string);

    format(string, sizeof(string), ""COLOR_ROSA"**CARCOLOR: %s (%i) (ADMIN CARCOLOR) Has cambiado el color del vehículo del jugador al numero: %i & %i.", ReturnPlayerName(targetPlayerId), targetPlayerId, colorOne, colorTwo);
    SendClientMessage(playerid, -1, string);
    return 1;
}

YCMD:akill(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 2)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 2 para poder usar este comando.");

    new targetPlayerId, tempAKillreason[128];

    if (sscanf(params, "uS(No reason specified)[128]", targetPlayerId, tempAKillreason))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /akill <ID Del Jugador> <Razón>");

    if (!IsPlayerConnected(targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (accountInformation[playerid][administrativeLevel] < accountInformation[targetPlayerId][administrativeLevel])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

    SetPlayerHealth(targetPlayerId, 0.0);
    PlayerPlaySound(targetPlayerId, 1057, 0.0, 0.0, 0.0);
    PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**AKILL: %s (%i) (ADMIN AKILL) Un administrador ha asesinado al jugador %s (%i) Razón: %s", ReturnPlayerName(playerid), playerid, ReturnPlayerName(targetPlayerId), targetPlayerId, tempAKillreason);
    SendClientMessageToAll(-1, string);
    return 1;
}

YCMD:setskin(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 2)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 2 para poder usar este comando.");

    new targetPlayerId, skinId;

    if (sscanf(params, "ui", targetPlayerId, skinId))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /setskin <ID Del Jugador> <ID del skin>");

    if (!IsPlayerConnected(targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (accountInformation[playerid][administrativeLevel] < accountInformation[targetPlayerId][administrativeLevel])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

    if (GetPlayerState(targetPlayerId) == PLAYER_STATE_WASTED || GetPlayerState(targetPlayerId) == PLAYER_STATE_SPECTATING)
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está spawneado aún.");

    if (skinId < 0 || skinId == 74 || skinId > 311)
        return SendClientMessage(playerid, -1, ""COLOR_RED"ID de skin inválido, debe estar entre 0 y 311 (excepto 74).");

    SetPlayerSkin(targetPlayerId, skinId);
    accountInformation[playerid][skin] = skinId;

    PlayerPlaySound(targetPlayerId, 1057, 0.0, 0.0, 0.0);
    PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**SETSKIN: %s (%i) (ADMIN SETSKIN) Un administrador ha cambiado tu skin (%i).", ReturnPlayerName(playerid), playerid, skinId);
    SendClientMessage(targetPlayerId, -1, string);

    format(string, sizeof(string), ""COLOR_ROSA"**SETSKIN: %s (%i) (ADMIN SETSKIN) Has cambiado el skin (%i) del jugador.", ReturnPlayerName(targetPlayerId), targetPlayerId, skinId);
    SendClientMessage(playerid, -1, string);
    return 1;
}

YCMD:cc(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 2)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 1 para poder usar este comando.");

    DeleteConversationOfAllPlayers();

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**CC: %s (%i) (ADMIN CC) Un administrador ha limpiado el chat global.", ReturnPlayerName(playerid), playerid);
    SendClientMessageToAll(-1, string);
    return 1;
}

YCMD:aheal(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 2)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 2 para poder usar este comando.");

    new targetPlayerId;

    if (sscanf(params, "u", targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /heal <ID Del Jugador>");

    if (!IsPlayerConnected(targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    SetPlayerHealth(targetPlayerId, 100.0);
    PlayerPlaySound(targetPlayerId, 1057, 0.0, 0.0, 0.0);
    PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**AHEAL: %s (%i) (ADMIN AHEAL) Un administrador te ha curado.", ReturnPlayerName(playerid), playerid);
    SendClientMessage(targetPlayerId, -1, string);

    format(string, sizeof(string), ""COLOR_ROSA"**AHEAL: %s (%i) (ADMIN AHEAL) Has curado al jugador.", ReturnPlayerName(targetPlayerId), targetPlayerId);
    SendClientMessage(playerid, -1, string);
    return 1;
}

YCMD:aarmour(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 2)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 2 para poder usar este comando.");

    new targetPlayerId;

    if (sscanf(params, "u", targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /armour <ID Del Jugador>");

    if (!IsPlayerConnected(targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    SetPlayerArmour(targetPlayerId, 100.0);
    PlayerPlaySound(targetPlayerId, 1057, 0.0, 0.0, 0.0);
    PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**AARMOUR: %s (%i) (ADMIN AARMOUR) Un administrador te ha dado chaleco.", ReturnPlayerName(playerid), playerid);
    SendClientMessage(targetPlayerId, -1, string);

    format(string, sizeof(string), ""COLOR_ROSA"**AARMOUR: %s (%i) (ADMIN AARMOUR) Le has dado chaleco al jugador.", ReturnPlayerName(targetPlayerId), targetPlayerId);
    SendClientMessage(playerid, -1, string);
    return 1;
}

YCMD:setinterior(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 2)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 2 para poder usar este comando.");

    new targetPlayerId, id;

    if (sscanf(params, "ui", targetPlayerId, id))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /setinterior <ID Del Jugador> <Interior>");

    if (!IsPlayerConnected(targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (accountInformation[playerid][administrativeLevel] < accountInformation[targetPlayerId][administrativeLevel])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

    SetPlayerInterior(targetPlayerId, id);
    PlayerPlaySound(targetPlayerId, 1057, 0.0, 0.0, 0.0);
    PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**SETINTERIOR: %s (%i) (ADMIN SETINTERIOR) Un administrador ha cambiado tu interior (%i).", ReturnPlayerName(playerid), playerid, id);
    SendClientMessage(targetPlayerId, -1, string);

    format(string, sizeof(string), ""COLOR_ROSA"**SETINTERIOR: %s (%i) (ADMIN SETINTERIOR) Has cambiado el interior (%i) del jugador.", ReturnPlayerName(targetPlayerId), targetPlayerId, id);
    SendClientMessage(playerid, -1, string);
    return 1;
}

YCMD:slap(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 2)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 2 para poder usar este comando.");

    new targetPlayerId;

    if (sscanf(params, "u", targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /slap <ID Del Jugador>");

    if (!IsPlayerConnected(targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (accountInformation[playerid][administrativeLevel] < accountInformation[targetPlayerId][administrativeLevel])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

    new Float:x, Float:y, Float:z;
    GetPlayerPos(targetPlayerId, x, y, z);
    SetPlayerPos(targetPlayerId, x, y, z + 5.0);

    PlayerPlaySound(playerid, 1190, 0.0, 0.0, 0.0);
    PlayerPlaySound(targetPlayerId, 1190, 0.0, 0.0, 0.0);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**SLAP: %s (%i) (ADMIN SLAP) Un administrador te ha slapeado.", ReturnPlayerName(playerid), playerid);
    SendClientMessage(targetPlayerId, -1, string);

    format(string, sizeof(string), ""COLOR_ROSA"**SLAP: %s (%i) (ADMIN SLAP) Has slapeado al jugador.", ReturnPlayerName(targetPlayerId), targetPlayerId);
    SendClientMessage(playerid, -1, string);
    return 1;
}

YCMD:explode(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 2)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 2 para poder usar este comando.");

    new targetPlayerId;

    if (sscanf(params, "u", targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /explode <ID Del Jugador>");

    if (!IsPlayerConnected(targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (accountInformation[playerid][administrativeLevel] < accountInformation[targetPlayerId][administrativeLevel])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

    new Float:x, Float:y, Float:z;
    GetPlayerPos(targetPlayerId, x, y, z);
    CreateExplosion(x, y, z, 7, 1.00);

    PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**EXPLODE: %s (%i) (ADMIN EXPLODE) Un administrador te ha lanzado una explosión.", ReturnPlayerName(playerid), playerid);
    SendClientMessage(targetPlayerId, -1, string);

    format(string, sizeof(string), ""COLOR_ROSA"**EXPLODE: %s (%i) (ADMIN EXPLODE) Has echo explotar al jugador.", ReturnPlayerName(targetPlayerId), targetPlayerId);
    SendClientMessage(playerid, -1, string);
    return 1;
}

YCMD:disarm(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 2)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 2 para poder usar este comando.");

    new targetPlayerId;

    if (sscanf(params, "u", targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /disarm <ID Del Jugador>");

    if (!IsPlayerConnected(targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (accountInformation[playerid][administrativeLevel] < accountInformation[targetPlayerId][administrativeLevel])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

    ResetPlayerWeapons(targetPlayerId);

    PlayerPlaySound(targetPlayerId, 1057, 0.0, 0.0, 0.0);
    PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**DISARM: %s (%i) (ADMIN DISARM) Un administrador te ha desarmado.", ReturnPlayerName(playerid), playerid);
    SendClientMessage(targetPlayerId, -1, string);

    format(string, sizeof(string), ""COLOR_ROSA"**DISARM: %s (%i) (ADMIN DISARM) Has desarmado al jugador.", ReturnPlayerName(targetPlayerId), targetPlayerId);
    SendClientMessage(playerid, -1, string);
    return 1;
}