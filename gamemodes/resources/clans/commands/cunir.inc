YCMD:cunir(playerid, params[], help) {
    new targetPlayerId;

    if (sscanf(params, "i", targetPlayerId))
        return va_SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /cunir <ID del jugador>");

    if (clanInvitationInformation[targetPlayerId][cITInvitationExpiration] != INVALID_TIMER)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"El jugador ya tiene una invitación de clan pendiente, por favor inténtalo en otro momento.");

    SendClanInvitation(playerid, targetPlayerId);
    return 1;
} 