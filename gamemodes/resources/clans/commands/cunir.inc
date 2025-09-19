YCMD:cunir(playerid, params[], help) {
    new destinationPlayerId;

    if (sscanf(params, "i", destinationPlayerId))
        return va_SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /cunir <ID del jugador>");

    if (clanInvitationInformation[destinationPlayerId][cITInvitationExpiration] != INVALID_TIMER)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"El jugador ya tiene una invitación de clan pendiente, por favor inténtalo en otro momento.");

    SendClanInvitation(playerid, destinationPlayerId);
    return 1;
} 