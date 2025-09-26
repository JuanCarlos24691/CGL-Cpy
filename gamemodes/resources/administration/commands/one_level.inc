YCMD:spec(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 1)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 1 para poder usar este comando.");

    new targetPlayerId;

    if (sscanf(params, "u", targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /spec <ID Del Jugador>");

    if (!IsPlayerConnected(targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (accountInformation[playerid][administrativeLevel] < accountInformation[targetPlayerId][administrativeLevel])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

    if (targetPlayerId == playerid)
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes espectearte a ti mismo.");

    if (GetPlayerState(targetPlayerId) == PLAYER_STATE_SPECTATING)
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está spawneado.");

    PlayerSpectatePlayer(playerid, targetPlayerId);

    new string[150];
    format(string, sizeof(string), "**SPEC: %s (%i) (ADMIN SPEC) Ahora estas especteando a este jugador.", ReturnPlayerName(targetPlayerId), targetPlayerId);
    SendClientMessage(playerid, -1, ""COLOR_ROSA"%s", string);

    SendClientMessage(playerid, -1, ""COLOR_ROSA"**SPEC: (ADMIN SPEC) Para dejar de espectear utiliza el comando /specoff.");
    return 1;
}

YCMD:specoff(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 1)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 1 para poder usar este comando.");

    if (GetPlayerState(playerid) != PLAYER_STATE_SPECTATING)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Actualmente no estás especteando a nadie.");

    TogglePlayerSpectating(playerid, false);
    SendClientMessage(playerid, -1, ""COLOR_ROSA"**SPECOFF: (ADMIN SPECOFF) Has dejado de spectear a ese jugador.");
    return 1;
}

YCMD:adminarea(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 1)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 1 para poder usar este comando.");

    if (GetPlayerState(playerid) == PLAYER_STATE_SPECTATING)
        return 1;

    GameTextForPlayer(playerid, "~b~Area Administrativa", 3000, 3);
    SendClientMessage(playerid, -1, ""COLOR_ROSA"**ADMINAREA: (ADMIN ADMINAREA) Has hido al area administrativa.");

    SetPlayerPos(playerid, 377, 170, 1008);
    SetPlayerFacingAngle(playerid, 90);
    SetPlayerInterior(playerid, 3);
    SetPlayerVirtualWorld(playerid, 0);
    return 1;
}

YCMD:repair(playerid, params[], help)  {
    if (accountInformation[playerid][administrativeLevel] < 1)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 1 para poder usar este comando.");

    new targetPlayerId;

    if (! sscanf(params, "u", targetPlayerId)) {
        if (!IsPlayerConnected(targetPlayerId))
            return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

        if (accountInformation[playerid][administrativeLevel] < accountInformation[targetPlayerId][administrativeLevel])
            return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

        if (!IsPlayerInAnyVehicle(targetPlayerId))
            return SendClientMessage(playerid, -1, ""COLOR_RED"Este jugador no está en un vehículo.");

        new vehicleId = GetPlayerVehicleID(targetPlayerId);
        RepairVehicle(vehicleId);
        SetVehicleHealth(vehicleId, 1000.0);

        GameTextForPlayer(targetPlayerId, "~b~Vehículo reparado", 5000, 3);
        PlayerPlaySound(playerid, 1133, 0.0, 0.0, 0.0);
        PlayerPlaySound(targetPlayerId, 1133, 0.0, 0.0, 0.0);

        new string[150];
        format(string, sizeof(string), ""COLOR_ROSA"**REPAIR: %s (%i) (ADMIN REPAIR) Un administrador ha reparado tu vehículo..", ReturnPlayerName(playerid), playerid);
        SendClientMessage(targetPlayerId, -1, string);

        format(string, sizeof(string), ""COLOR_ROSA"**REPAIR: %s (%i) (ADMIN REPAIR) Has reparado el vehículo del jugador .", ReturnPlayerName(targetPlayerId), targetPlayerId);
        SendClientMessage(playerid, -1, string);
    } else {
        if (!IsPlayerInAnyVehicle(playerid))
            return SendClientMessage(playerid, -1, ""COLOR_RED"Debes estar en un vehículo para usar este comando.");

        new vehicleId = GetPlayerVehicleID(playerid);
        RepairVehicle(vehicleId);
        SetVehicleHealth(vehicleId, 1000.0);

        GameTextForPlayer(playerid, "~b~Vehículo reparado", 5000, 3);
        PlayerPlaySound(playerid, 1133, 0.0, 0.0, 0.0);

        SendClientMessage(playerid, -1, ""COLOR_ROSA"**REPAIR: (ADMIN REPAIR) Has reparado tu vehículo.");
    }
    return 1;
}

YCMD:addnos(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 1)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 1 para poder usar este comando.");

    new targetPlayerId;

    if (! sscanf(params, "u", targetPlayerId)) {
        if (!IsPlayerConnected(targetPlayerId))
            return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

        if (accountInformation[playerid][administrativeLevel] < accountInformation[targetPlayerId][administrativeLevel])
            return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

        if (!IsPlayerInAnyVehicle(targetPlayerId))
            return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador no está en un vehículo.");

        new vehicleId = GetPlayerVehicleID(targetPlayerId);

        switch (GetVehicleModel(vehicleId)) {
            case 448, 461, 462, 463, 468, 471, 509, 510, 521, 522, 523, 581, 586, 449: {
                return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes agregar nitro al tipo sw vehículo aque tiene el jugador.");
            }
        }

        AddVehicleComponent(vehicleId, 1010);

        GameTextForPlayer(targetPlayerId, "~b~Nitro agregado", 5000, 3);
        PlayerPlaySound(playerid, 1133, 0.0, 0.0, 0.0);
        PlayerPlaySound(targetPlayerId, 1133, 0.0, 0.0, 0.0);

        new string[150];
        format(string, sizeof(string), ""COLOR_ROSA"**ADDNOS: %s (%i) (ADMIN ADDNOS) Un administrador ha agregado nitro a tu vehículo.", ReturnPlayerName(playerid), playerid);
        SendClientMessage(targetPlayerId, -1, string);

        format(string, sizeof(string), ""COLOR_ROSA"**ADDNOS: %s (%i) (ADMIN ADDNOS) Has agregado nitro al vehículo del jugador.", ReturnPlayerName(targetPlayerId), targetPlayerId);
        SendClientMessage(playerid, -1, string);
    } else {
        if (!IsPlayerInAnyVehicle(playerid))
            return SendClientMessage(playerid, -1, ""COLOR_RED"Debes estar en un vehículo para usar este comando.");

        new vehicleId = GetPlayerVehicleID(playerid);

        switch (GetVehicleModel(vehicleId)) {
            case 448, 461, 462, 463, 468, 471, 509, 510, 521, 522, 523, 581, 586, 449:
                return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes agregar nitro a este vehículo.");
        }

        AddVehicleComponent(vehicleId, 1010);

        GameTextForPlayer(playerid, "~b~Nitro agregado", 5000, 3);
        PlayerPlaySound(playerid, 1133, 0.0, 0.0, 0.0);

        SendClientMessage(playerid, -1, ""COLOR_ROSA"**ADDNOS: (ADMIN ADDNOS) Has agregado nitro a tu vehículo.");
    }
    return 1;
}

YCMD:flip(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 1)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 1 para poder usar este comando.");

    new targetPlayerId;

    if (! sscanf(params, "u", targetPlayerId)) {
        if (!IsPlayerConnected(targetPlayerId))
            return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

        if (accountInformation[playerid][administrativeLevel] < accountInformation[targetPlayerId][administrativeLevel])
            return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

        if (!IsPlayerInAnyVehicle(targetPlayerId))
            return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador no está en un vehículo.");

        new vehicelId = GetPlayerVehicleID(targetPlayerId), Float:angle;
        GetVehicleZAngle(vehicelId, angle);
        SetVehicleZAngle(vehicelId, angle);

        GameTextForPlayer(targetPlayerId, "~b~Vehículo volteado", 5000, 3);
        PlayerPlaySound(playerid, 1133, 0.0, 0.0, 0.0);
        PlayerPlaySound(targetPlayerId, 1133, 0.0, 0.0, 0.0);

        new string[150];
        format(string, sizeof(string), ""COLOR_ROSA"**FLIP: %s (%i) (ADMIN FLIP) Un administrador ha flipeado tu vehículo.", ReturnPlayerName(playerid), playerid);
        SendClientMessage(targetPlayerId, -1, string);

        format(string, sizeof(string), ""COLOR_ROSA"**FLIP: %s (%i) (ADMIN FLIP) Has flipeado el vehículo del jugador.", ReturnPlayerName(targetPlayerId), targetPlayerId);
        SendClientMessage(playerid, -1, string);
    } else {
        if (!IsPlayerInAnyVehicle(playerid))
            return SendClientMessage(playerid, -1, ""COLOR_RED"Debes estar en un vehículo para usar este comando.");

        new vehicelId = GetPlayerVehicleID(targetPlayerId), Float:angle;
        GetVehicleZAngle(vehicelId, angle);
        SetVehicleZAngle(vehicelId, angle);

        GameTextForPlayer(playerid, "~b~Vehículo volteado", 5000, 3);
        PlayerPlaySound(playerid, 1133, 0.0, 0.0, 0.0);

        SendClientMessage(playerid, -1, ""COLOR_ROSA"**FLIP: (ADMIN FLIP) Has flipeado tu vehículo.");
    }
    return 1;
}

YCMD:ip(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 1)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 1 para poder usar este comando.");

    new targetPlayerId;

    if (sscanf(params, "u", targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /ip <ID Del Jugador>");

    if (!IsPlayerConnected(targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (accountInformation[playerid][administrativeLevel] < accountInformation[targetPlayerId][administrativeLevel])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**IP: %s (%i) (ADMIN IP) La IP del jugador es: %s", ReturnPlayerName(targetPlayerId), targetPlayerId, ReturnPlayerIp(playerid));
    SendClientMessage(playerid, -1, string);
    return 1;
}

YCMD:playerspawn(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 1)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 1 para poder usar este comando.");

    new targetPlayerId;

    if (sscanf(params, "u", targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /playerspawn <ID Del Jugador>");

    if (!IsPlayerConnected(targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (accountInformation[playerid][administrativeLevel] < accountInformation[targetPlayerId][administrativeLevel])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

    if (GetPlayerState(playerid) == PLAYER_STATE_SPECTATING)
        TogglePlayerSpectating(targetPlayerId, false);

    SpawnPlayer(targetPlayerId);
    PlayerPlaySound(targetPlayerId, 1057, 0.0, 0.0, 0.0);
    PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**PLAYERSPAWN: %s (%i) (ADMIN PLAYERSPAWN) Un administrador te ha respawneado.", ReturnPlayerName(playerid), playerid);
    SendClientMessage(targetPlayerId, -1, string);

    format(string, sizeof(string), ""COLOR_ROSA"**PLAYERSPAWN: %s (%i) (ADMIN PLAYERSPAWN) Has respawneado al jugador.", ReturnPlayerName(targetPlayerId), targetPlayerId);
    SendClientMessage(playerid, -1, string);
    return 1;
}

YCMD:goto(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 1)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 1 para poder usar este comando.");

    if (GetPlayerState(playerid) == PLAYER_STATE_SPECTATING)
        return 1;

    new targetPlayerId;

    if (sscanf(params, "u", targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /goto <ID Del Jugador>");

    if (!IsPlayerConnected(targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (targetPlayerId == playerid)
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes teletransportarte a ti mismo.");

    if (GetPlayerState(targetPlayerId) == PLAYER_STATE_WASTED || GetPlayerState(targetPlayerId) == PLAYER_STATE_SPECTATING)
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está spawneado.");

    SetPlayerInterior(playerid, GetPlayerInterior(targetPlayerId));
    SetPlayerVirtualWorld(playerid, GetPlayerVirtualWorld(targetPlayerId));

    new Float:x, Float:y, Float:z;
    GetPlayerPos(targetPlayerId, x, y, z);

    if (GetPlayerState(playerid) == PLAYER_STATE_DRIVER) {
        new vehicleid = GetPlayerVehicleID(playerid);
        SetVehiclePos(vehicleid, x, y + 2.5, z);
        LinkVehicleToInterior(vehicleid, GetPlayerInterior(targetPlayerId));
        SetVehicleVirtualWorld(vehicleid, GetPlayerVirtualWorld(targetPlayerId));
    } else {
        SetPlayerPos(playerid, x, y + 2.0, z);
    }

    PlayerPlaySound(targetPlayerId, 1057, 0.0, 0.0, 0.0);
    PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**GOTO: %s (%i) (ADMIN GOTO) Te has teletransportado a la posición del jugador.", ReturnPlayerName(playerid), playerid);
    SendClientMessage(playerid, -1, string);
    return 1;
}

YCMD:kick(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 1)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 1 para poder usar este comando.");

    new targetPlayerId, tempKickReason[45];

    if (sscanf(params, "us[128]", targetPlayerId, tempKickReason))
        return SendClientMessage(playerid, -1, ""COLOR_RED"Sintaxis: /kick <ID Del Jugador> <Razón>");

    if (!IsPlayerConnected(targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (accountInformation[playerid][administrativeLevel] < accountInformation[targetPlayerId][administrativeLevel])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

    if (targetPlayerId == playerid)
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes expulsarte a ti mismo.");

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**KICK: %s (%i) (ADMIN KICK) Un Admnistrador ha expulsado al jugador %s (%i) Razón: %s.", ReturnPlayerName(playerid), playerid, ReturnPlayerName(targetPlayerId), targetPlayerId, tempKickReason);
    SendClientMessageToAll(-1, string);

    Kick(targetPlayerId);
    return 1;
}

YCMD:asay(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 1)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 1 para poder usar este comando.");

    new message[135];
    if (sscanf(params, "s[135]", message))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /asay <Mensaje>");

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**ASAY: %s (%i) (ADMIN ASAY) Un administrador ha enviado un mensaje global: %s.", ReturnPlayerName(playerid), playerid, message);
    SendClientMessageToAll(-1, string);
    return 1;
}