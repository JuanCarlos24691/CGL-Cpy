YCMD:cexpulsar(playerid, params[], help) {
    new destinationPlayerId;

    if (sscanf(params, "i", destinationPlayerId))
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Usa: /cexpulsar (ID del jugador)");

    ExpelAPlayerFromTheClan(playerid, destinationPlayerId);
    return 1;
}