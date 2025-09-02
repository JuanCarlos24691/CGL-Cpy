YCMD:quepasa(playerid, params[], help) {
    if (GetPlayerState(playerid) != PLAYER_STATE_ONFOOT)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes estar de pie para poder crear usar esta animación.");

    ApplyAnimation(playerid, "GHANDS", "gsign1LH", 4.1, false, false, false, false, SYNC_NONE);
    return 1;
}