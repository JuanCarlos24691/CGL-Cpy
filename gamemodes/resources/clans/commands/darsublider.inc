YCMD:darsublider(playerid, params[], help) {
    new targetPlayerId;

    if (sscanf(params, "i", targetPlayerId))
        return va_SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /darsublider <ID del jugador>");

    AssignClanSubLeader(playerid, targetPlayerId);
    return 1;
} 