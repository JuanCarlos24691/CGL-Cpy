YCMD:darsublider(playerid, params[], help) {
    new destinationPlayerId;

    if (sscanf(params, "i", destinationPlayerId))
        return va_SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /darsublider <ID del jugador>");

    AssignClanSubLeader(playerid, destinationPlayerId);
    return 1;
} 