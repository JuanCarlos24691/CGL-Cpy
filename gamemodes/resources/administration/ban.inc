forward UnBanPlayer(playerid, destinationPlayerName[]);
public UnBanPlayer(playerid, destinationPlayerName[]) {
    if (!cache_num_rows())
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"El jugador no está baneado o no existe.");

    new query[256];
    format(query, sizeof(query), "UPDATE accounts SET ban_time = 0, ban_reason = '', ban_date = '0000-00-00 00:00:00' WHERE player_name = '%s'", destinationPlayerName);
    mysql_tquery(databaseConnection, query);

    new string[124];
    format(string, sizeof(string), ""COLOR_ROSA"**BANACCOUNT: %s (%i) (ADMIN BANACCOUNT) Un Admnistrador ha desbaneado al jugador %s.", ReturnPlayerName(playerid), playerid, destinationPlayerName);
    va_SendClientMessageToAll(-1, string);

    PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);
    return 1;
}

forward UnBanIp(playerid, destinationPlayerName[]);
public UnBanIp(playerid, destinationPlayerName[]) {
    if (!cache_num_rows())
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"El jugador no tiene la IP baneada o no existe.");

    new query[248];
    format(query, sizeof(query), "DELETE FROM ip_bans WHERE player_name = '%s'", destinationPlayerName);
    mysql_tquery(databaseConnection, query);

    new string[124];
    format(string, sizeof(string), ""COLOR_ROSA"**BANIP: %s (%i) (ADMIN BANIP) Un Admnistrador ha desbaneado la IP del jugador %s.", ReturnPlayerName(playerid), playerid, destinationPlayerName);
    va_SendClientMessage(playerid, -1, string);

    PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);
    return 1;
}

YCMD:banaccount(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 2)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 2 para poder usar este comando.");

    new destinationPlayerId, tempBanDays, tempBanReason[33];

    if (sscanf(params, "id s[33]", destinationPlayerId, tempBanDays, tempBanReason))
        return va_SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /banaccount <ID del jugador> <Días (-1 permanente)> <Razón>");

    if (!IsPlayerConnected(destinationPlayerId))
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (!accountInformation[destinationPlayerId][loggedIn])
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un usuario que no esta registrado.");

    if (tempBanDays < -1 || tempBanDays == 0)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Los días de baneo que ingresaste son inválidos. Solo se permite -1 para baneo permanente o un número mayor a 0 para baneo temporal.");

    if (strlen(tempBanReason) < 10 || strlen(tempBanReason) > 32)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"La razón del baneo no es valída. Este deber tener un rango de caracteres de 10 a 32 caracteres.");

    accountInformation[destinationPlayerId][banTime] = tempBanDays;
    accountInformation[destinationPlayerId][banReason] = tempBanReason;

    new year, month, day, hour, minute, second;
    getdate(year, month, day);     // Obtener fecha
    gettime(hour, minute, second); // Obtener hora

    new tempBanDate[30];
    format(tempBanDate, sizeof(tempBanDate), "%04d-%02d-%02d %02d:%02d:%02d", year, month, day, hour, minute, second);
    accountInformation[destinationPlayerId][banDate] = tempBanDate;

    if (tempBanDays == -1) {
        new string[248];
        format(string, sizeof(string), ""COLOR_ROSA"**BANACCOUNT: %s (%i) (ADMIN BANACCOUNT) Un Admnistrador ha baneado de forma permanente al jugador %s (%i) por la razón: %s.", ReturnPlayerName(playerid), playerid, ReturnPlayerName(destinationPlayerId), destinationPlayerId, tempBanReason);
        va_SendClientMessageToAll(-1, string);
    } else if (tempBanDays > 0) {
        new string[248];
        format(string, sizeof(string), ""COLOR_ROSA"**BANACCOUNT: %s (%i) (ADMIN BANACCOUNT) Un Admnistrador ha baneado por %i días al jugador %s (%i) por la razón: %s.", ReturnPlayerName(playerid), playerid, tempBanDays, ReturnPlayerName(destinationPlayerId), destinationPlayerId, tempBanReason);
        va_SendClientMessageToAll(-1, string);
    }

    Kick(destinationPlayerId);
    return 1;
}

YCMD:banaccountall(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 5)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 5 para usar este comando.");

    new tempBanDays, tempBanReason[33];

    if (sscanf(params, "d s[33]", tempBanDays, tempBanReason))
        return va_SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /banaccountall <Días (-1 permanente)> <Razón>");

    if (tempBanDays < -1 || tempBanDays == 0)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Los días de baneo son inválidos. Usa -1 para permanente o un número mayor a 0.");

    if (strlen(tempBanReason) < 10 || strlen(tempBanReason) > 32)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"La razón debe tener entre 10 y 32 caracteres.");

    if (tempBanDays == -1) {
        new string[248];
        format(string, sizeof(string), ""COLOR_ROSA"**BANACCOUNTALL: %s (%i) (ADMIN BANACCOUNTALL) Un admnistrador ha baneado de forma permanente a todos los jugadores.", ReturnPlayerName(playerid), playerid);
        va_SendClientMessageToAll(-1, string);
    } else if (tempBanDays > 0) {
        new string[248];
        format(string, sizeof(string), ""COLOR_ROSA"**BANACCOUNTALL: %s (%i) (ADMIN BANACCOUNTALL) Un admnistrador ha baneado por %i días a todos los jugadores.", ReturnPlayerName(playerid), playerid, tempBanDays);
        va_SendClientMessageToAll(-1, string);
    }

    new year, month, day, hour, minute, second;
    getdate(year, month, day);
    gettime(hour, minute, second);

    new tempBanDate[30];
    format(tempBanDate, sizeof(tempBanDate), "%04d-%02d-%02d %02d:%02d:%02d", year, month, day, hour, minute, second);

    foreach (new i : Player) {
        if (accountInformation[i][loggedIn] && accountInformation[i][inGame] && accountInformation[i][administrativeLevel] == 0) {
            accountInformation[i][banTime] = tempBanDays;
            strcpy(accountInformation[i][banReason], tempBanReason);
            strcpy(accountInformation[i][banDate], tempBanDate);

            Kick(i);
        }
    }
    return 1;
}

YCMD:unbanaccount(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 2)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos nivel 2 de administrador para usar este comando.");

    new destinationPlayerName[MAX_PLAYER_NAME];

    if (sscanf(params, "s[24]", destinationPlayerName))
        return va_SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /unbanaccount <Nombre del jugador>");

    new query[128];
    format(query, sizeof(query), "SELECT UUID FROM accounts WHERE player_name = '%s' AND ban_time != 0 LIMIT 1", destinationPlayerName);
    mysql_tquery(databaseConnection, query, "UnBanPlayer", "ds", playerid, destinationPlayerName);
    return 1;
}

YCMD:unbanaccountall(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 5)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos nivel 5 de administrador para usar este comando.");

    new query[128];
    format(query, sizeof(query), "UPDATE accounts SET ban_time = 0, ban_reason = '', ban_date = '0000-00-00 00:00:00' WHERE ban_time != 0");
    mysql_tquery(databaseConnection, query);

    new string[192];
    format(string, sizeof(string), ""COLOR_ROSA"**UNBANACCOUNTALL: %s (%i) (ADMIN UNBANACCOUNTALL) Un administrador ha desbaneado a todas las cuentas baneadas.", ReturnPlayerName(playerid), playerid);
    va_SendClientMessageToAll(-1, string);
    return 1;
}

YCMD:banip(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 2)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 2 para usar este comando.");

    new destinationPlayerId, tempBanReason[128];

    if (sscanf(params, "is[128]", destinationPlayerId, tempBanReason))
        return va_SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /banip <ID del jugador> <Razón>");

    if (!IsPlayerConnected(destinationPlayerId))
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (strlen(tempBanReason) < 10 || strlen(tempBanReason) > 32)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"La razón debe tener entre 10 y 32 caracteres.");

    new query[256];
    format(query, sizeof(query), "INSERT INTO ip_bans (player_name, ip, reason, date) VALUES ('%s', '%s', '%s', NOW())", accountInformation[destinationPlayerId][name], ReturnPlayerIp(destinationPlayerId), tempBanReason);
    mysql_query(databaseConnection, query);

    new string[192];
    format(string, sizeof(string), ""COLOR_ROSA"**BAN-IP: %s (%i) (ADMIN BAN-IP) Un administrador ha baneado la IP del jugador %s (%i) por la razón: %s.", accountInformation[playerid][name], playerid, accountInformation[destinationPlayerId][name], destinationPlayerId, tempBanReason);
    va_SendClientMessageToAll(-1, string);

    Kick(destinationPlayerId);
    return 1;
}

YCMD:banipall(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 4)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 4 para usar este comando.");

    new tempBanReason[32];

    if (sscanf(params, "s[32]", tempBanReason))
        return va_SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /banipall <Razón>");

    if (strlen(tempBanReason) < 10 || strlen(tempBanReason) > 32)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"La razón debe tener entre 10 y 32 caracteres.");

    new string[192];
    format(string, sizeof(string), ""COLOR_ROSA"**BANIPALL: %s (%i) (ADMIN BANIPALL) Un Administrador ha baneado la IP de todos los jugadores por la razón: %s", ReturnPlayerName(playerid), playerid, tempBanReason);
    va_SendClientMessageToAll(-1, string);

    new query[256], tempIp[16];

    foreach (new i : Player) {
        if (accountInformation[i][loggedIn] && accountInformation[i][inGame] && accountInformation[i][administrativeLevel] == 0) {
            GetPlayerIp(i, tempIp, sizeof(tempIp));

            format(query, sizeof(query), "INSERT INTO ip_bans (player_name, ip, reason, date) VALUES ('%s', '%s', '%s', NOW())", ReturnPlayerName(i), tempIp, tempBanReason);
            mysql_tquery(databaseConnection, query);
            Kick(i);
        }
    }
    return 1;
}

YCMD:unbanip(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 2)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos nivel 2 de administrador para usar este comando.");

    new destinationPlayerName[MAX_PLAYER_NAME];

    if (sscanf(params, "s[24]", destinationPlayerName))
        return va_SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /unbanip <Nombre del jugador>");

    new query[128];
    format(query, sizeof(query), "SELECT UUID FROM ip_bans WHERE player_name = '%s' LIMIT 1", destinationPlayerName);
    mysql_tquery(databaseConnection, query, "UnBanIp", "ds", playerid, destinationPlayerName);
    return 1;
}

YCMD:unbanipall(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 4)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos nivel 4 de administrador para usar este comando.");

    new query[128];
    format(query, sizeof(query), "DELETE FROM ip_bans");
    mysql_tquery(databaseConnection, query);

    new str[150];
    format(str, sizeof(str), ""COLOR_ROSA"**UNBANIPALL: %s (%i) (ADMIN UNBANIPALL) Un administrador ha desbaneado todas las IP's de los jugadores.", ReturnPlayerName(playerid), playerid);
    va_SendClientMessageToAll(-1, str);
    return 1;
}