YCMD:vomitar(playerid, params[], help) {
    if (GetPlayerState(playerid) != PLAYER_STATE_ONFOOT)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes estar de pie para poder crear usar esta animación.");

    foreach (new i : Player) {
        new Float:x, Float:y, Float:z;
        GetPlayerPos(i, x, y, z);

        if (IsPlayerInRangeOfPoint(playerid, 1.3, x, y, z) && playerid != i) {
            if (GetPlayerState(i) == PLAYER_STATE_WASTED)
                va_SendClientMessageToAll(GetPlayerColor(playerid), "%s vomitó sobre el cadáver de %s", accountInformation[playerid][name], accountInformation[i][name]);
            else
                va_SendClientMessageToAll(GetPlayerColor(playerid), "%s vomitó sobre %s", accountInformation[playerid][name], accountInformation[i][name]);

            ApplyAnimation(playerid, "FOOD", "EAT_Vomit_P", 3.0, false, false, false, false, SYNC_NONE);
            return 1;
        }
    }

    new targetPlayerId;

    if (sscanf(params, "i", targetPlayerId))
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Usa: /vomitar <ID del jugador>");

    if (playerid == targetPlayerId)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"No puedes vomitarte a ti mismo.");

    if (!IsPlayerConnected(targetPlayerId))
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"El jugador no está conectado.");

    if (GetPlayerState(targetPlayerId) == PLAYER_STATE_WASTED)
        va_SendClientMessageToAll(GetPlayerColor(playerid), "%s vomitó sobre el cadáver de %s", accountInformation[playerid][name], accountInformation[targetPlayerId][name]);
    else
        va_SendClientMessageToAll(GetPlayerColor(playerid), "%s vomitó sobre %s", accountInformation[playerid][name], accountInformation[targetPlayerId][name]);

    ApplyAnimation(playerid, "FOOD", "EAT_Vomit_P", 3.0, false, false, false, false, SYNC_NONE);
    return 1;
}