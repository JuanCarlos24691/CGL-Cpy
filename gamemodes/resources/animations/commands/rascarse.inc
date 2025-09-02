YCMD:rascarse(playerid, params[], help) {
    if (GetPlayerState(playerid) != PLAYER_STATE_ONFOOT)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes estar de pie para poder crear usar esta animación.");

    ApplyAnimation(playerid, "MISC", "Scratchballs_01", 3.0, false, false, false, false, SYNC_NONE);
    va_SendClientMessageToAll(-1, ""COLOR_AQUAMARINE2"%s se ha rascado.", accountInformation[playerid][name]);
    return 1;
}