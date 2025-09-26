YCMD:cexpulsar(playerid, params[], help) {
    new targetPlayerId;

    if (sscanf(params, "i", targetPlayerId))
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Usa: /cexpulsar (ID del jugador)");

    ExpelAPlayerFromTheClan(playerid, targetPlayerId);
    return 1;
}