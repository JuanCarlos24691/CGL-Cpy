YCMD:mmm(playerid, params[], help) {
    if (GetPlayerState(playerid) != PLAYER_STATE_ONFOOT)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes estar de pie para poder crear usar esta animación.");

    ApplyAnimation(playerid, "COP_AMBIENT", "Coplook_think", 4.1, false, false, false, false, SYNC_NONE);
    return 1;
}