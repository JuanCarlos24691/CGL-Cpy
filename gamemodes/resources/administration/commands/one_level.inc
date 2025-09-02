YCMD:spec(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 1)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 1 para poder usar este comando.");

    new destinationPlayerId;

    if (sscanf(params, "u", destinationPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /spec <ID Del Jugador>");

    if (!IsPlayerConnected(destinationPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (accountInformation[playerid][administrativeLevel] < accountInformation[destinationPlayerId][administrativeLevel])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

    if (destinationPlayerId == playerid)
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes espectearte a ti mismo.");

    if (GetPlayerState(destinationPlayerId) == PLAYER_STATE_SPECTATING)
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está spawneado.");

    PlayerSpectatePlayer(playerid, destinationPlayerId);

    new string[150];
    format(string, sizeof(string), "**SPEC: %s (%i) (ADMIN SPEC) Ahora estas especteando a este jugador.", ReturnPlayerName(destinationPlayerId), destinationPlayerId);
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

    new destinationPlayerId;

    if (! sscanf(params, "u", destinationPlayerId)) {
        if (!IsPlayerConnected(destinationPlayerId))
            return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

        if (accountInformation[playerid][administrativeLevel] < accountInformation[destinationPlayerId][administrativeLevel])
            return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

        if (!IsPlayerInAnyVehicle(destinationPlayerId))
            return SendClientMessage(playerid, -1, ""COLOR_RED"Este jugador no está en un vehículo.");

        new vehicleId = GetPlayerVehicleID(destinationPlayerId);
        RepairVehicle(vehicleId);
        SetVehicleHealth(vehicleId, 1000.0);

        GameTextForPlayer(destinationPlayerId, "~b~Vehículo reparado", 5000, 3);
        PlayerPlaySound(playerid, 1133, 0.0, 0.0, 0.0);
        PlayerPlaySound(destinationPlayerId, 1133, 0.0, 0.0, 0.0);

        new string[150];
        format(string, sizeof(string), ""COLOR_ROSA"**REPAIR: %s (%i) (ADMIN REPAIR) Un administrador ha reparado tu vehículo..", ReturnPlayerName(playerid), playerid);
        SendClientMessage(destinationPlayerId, -1, string);

        format(string, sizeof(string), ""COLOR_ROSA"**REPAIR: %s (%i) (ADMIN REPAIR) Has reparado el vehículo del jugador .", ReturnPlayerName(destinationPlayerId), destinationPlayerId);
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

    new destinationPlayerId;

    if (! sscanf(params, "u", destinationPlayerId)) {
        if (!IsPlayerConnected(destinationPlayerId))
            return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

        if (accountInformation[playerid][administrativeLevel] < accountInformation[destinationPlayerId][administrativeLevel])
            return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

        if (!IsPlayerInAnyVehicle(destinationPlayerId))
            return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador no está en un vehículo.");

        new vehicleId = GetPlayerVehicleID(destinationPlayerId);

        switch (GetVehicleModel(vehicleId)) {
            case 448, 461, 462, 463, 468, 471, 509, 510, 521, 522, 523, 581, 586, 449: {
                return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes agregar nitro al tipo sw vehículo aque tiene el jugador.");
            }
        }

        AddVehicleComponent(vehicleId, 1010);

        GameTextForPlayer(destinationPlayerId, "~b~Nitro agregado", 5000, 3);
        PlayerPlaySound(playerid, 1133, 0.0, 0.0, 0.0);
        PlayerPlaySound(destinationPlayerId, 1133, 0.0, 0.0, 0.0);

        new string[150];
        format(string, sizeof(string), ""COLOR_ROSA"**ADDNOS: %s (%i) (ADMIN ADDNOS) Un administrador ha agregado nitro a tu vehículo.", ReturnPlayerName(playerid), playerid);
        SendClientMessage(destinationPlayerId, -1, string);

        format(string, sizeof(string), ""COLOR_ROSA"**ADDNOS: %s (%i) (ADMIN ADDNOS) Has agregado nitro al vehículo del jugador.", ReturnPlayerName(destinationPlayerId), destinationPlayerId);
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

    new destinationPlayerId;

    if (! sscanf(params, "u", destinationPlayerId)) {
        if (!IsPlayerConnected(destinationPlayerId))
            return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

        if (accountInformation[playerid][administrativeLevel] < accountInformation[destinationPlayerId][administrativeLevel])
            return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

        if (!IsPlayerInAnyVehicle(destinationPlayerId))
            return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador no está en un vehículo.");

        new vehicelId = GetPlayerVehicleID(destinationPlayerId), Float:angle;
        GetVehicleZAngle(vehicelId, angle);
        SetVehicleZAngle(vehicelId, angle);

        GameTextForPlayer(destinationPlayerId, "~b~Vehículo volteado", 5000, 3);
        PlayerPlaySound(playerid, 1133, 0.0, 0.0, 0.0);
        PlayerPlaySound(destinationPlayerId, 1133, 0.0, 0.0, 0.0);

        new string[150];
        format(string, sizeof(string), ""COLOR_ROSA"**FLIP: %s (%i) (ADMIN FLIP) Un administrador ha flipeado tu vehículo.", ReturnPlayerName(playerid), playerid);
        SendClientMessage(destinationPlayerId, -1, string);

        format(string, sizeof(string), ""COLOR_ROSA"**FLIP: %s (%i) (ADMIN FLIP) Has flipeado el vehículo del jugador.", ReturnPlayerName(destinationPlayerId), destinationPlayerId);
        SendClientMessage(playerid, -1, string);
    } else {
        if (!IsPlayerInAnyVehicle(playerid))
            return SendClientMessage(playerid, -1, ""COLOR_RED"Debes estar en un vehículo para usar este comando.");

        new vehicelId = GetPlayerVehicleID(destinationPlayerId), Float:angle;
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

    new destinationPlayerId;

    if (sscanf(params, "u", destinationPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /ip <ID Del Jugador>");

    if (!IsPlayerConnected(destinationPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (accountInformation[playerid][administrativeLevel] < accountInformation[destinationPlayerId][administrativeLevel])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**IP: %s (%i) (ADMIN IP) La IP del jugador es: %s", ReturnPlayerName(destinationPlayerId), destinationPlayerId, ReturnPlayerIp(playerid));
    SendClientMessage(playerid, -1, string);
    return 1;
}

YCMD:playerspawn(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 1)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 1 para poder usar este comando.");

    new destinationPlayerId;

    if (sscanf(params, "u", destinationPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /playerspawn <ID Del Jugador>");

    if (!IsPlayerConnected(destinationPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (accountInformation[playerid][administrativeLevel] < accountInformation[destinationPlayerId][administrativeLevel])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

    if (GetPlayerState(playerid) == PLAYER_STATE_SPECTATING)
        TogglePlayerSpectating(destinationPlayerId, false);

    SpawnPlayer(destinationPlayerId);
    PlayerPlaySound(destinationPlayerId, 1057, 0.0, 0.0, 0.0);
    PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**PLAYERSPAWN: %s (%i) (ADMIN PLAYERSPAWN) Un administrador te ha respawneado.", ReturnPlayerName(playerid), playerid);
    SendClientMessage(destinationPlayerId, -1, string);

    format(string, sizeof(string), ""COLOR_ROSA"**PLAYERSPAWN: %s (%i) (ADMIN PLAYERSPAWN) Has respawneado al jugador.", ReturnPlayerName(destinationPlayerId), destinationPlayerId);
    SendClientMessage(playerid, -1, string);
    return 1;
}

YCMD:goto(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 1)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 1 para poder usar este comando.");

    if (GetPlayerState(playerid) == PLAYER_STATE_SPECTATING)
        return 1;

    new destinationPlayerId;

    if (sscanf(params, "u", destinationPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /goto <ID Del Jugador>");

    if (!IsPlayerConnected(destinationPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (destinationPlayerId == playerid)
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes teletransportarte a ti mismo.");

    if (GetPlayerState(destinationPlayerId) == PLAYER_STATE_WASTED || GetPlayerState(destinationPlayerId) == PLAYER_STATE_SPECTATING)
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está spawneado.");

    SetPlayerInterior(playerid, GetPlayerInterior(destinationPlayerId));
    SetPlayerVirtualWorld(playerid, GetPlayerVirtualWorld(destinationPlayerId));

    new Float:x, Float:y, Float:z;
    GetPlayerPos(destinationPlayerId, x, y, z);

    if (GetPlayerState(playerid) == PLAYER_STATE_DRIVER) {
        new vehicleid = GetPlayerVehicleID(playerid);
        SetVehiclePos(vehicleid, x, y + 2.5, z);
        LinkVehicleToInterior(vehicleid, GetPlayerInterior(destinationPlayerId));
        SetVehicleVirtualWorld(vehicleid, GetPlayerVirtualWorld(destinationPlayerId));
    } else {
        SetPlayerPos(playerid, x, y + 2.0, z);
    }

    PlayerPlaySound(destinationPlayerId, 1057, 0.0, 0.0, 0.0);
    PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**GOTO: %s (%i) (ADMIN GOTO) Te has teletransportado a la posición del jugador.", ReturnPlayerName(playerid), playerid);
    SendClientMessage(playerid, -1, string);
    return 1;
}

YCMD:kick(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 1)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 1 para poder usar este comando.");

    new destinationPlayerId, tempKickReason[45];

    if (sscanf(params, "us[128]", destinationPlayerId, tempKickReason))
        return SendClientMessage(playerid, -1, ""COLOR_RED"Sintaxis: /kick <ID Del Jugador> <Razón>");

    if (!IsPlayerConnected(destinationPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (accountInformation[playerid][administrativeLevel] < accountInformation[destinationPlayerId][administrativeLevel])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un administrador con un nivel de administración mayor al tuyo.");

    if (destinationPlayerId == playerid)
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes expulsarte a ti mismo.");

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**KICK: %s (%i) (ADMIN KICK) Un Admnistrador ha expulsado al jugador %s (%i) Razón: %s.", ReturnPlayerName(playerid), playerid, ReturnPlayerName(destinationPlayerId), destinationPlayerId, tempKickReason);
    SendClientMessageToAll(-1, string);

    Kick(destinationPlayerId);
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