YCMD:si(playerid, params[], help) {
    if (GetPlayerState(playerid) != PLAYER_STATE_ONFOOT)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes estar de pie para poder crear usar esta animación.");

    ApplyAnimation(playerid, "GANGS", "Invite_Yes", 3.0, false, false, false, false, SYNC_NONE);
    va_SendClientMessageToAll(GetPlayerColor(playerid), "%s afirma.", accountInformation[playerid][name]);
    return 1;
}