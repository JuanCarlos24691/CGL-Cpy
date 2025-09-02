YCMD:herido(playerid, params[], help) {
    if (GetPlayerState(playerid) != PLAYER_STATE_ONFOOT)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes estar de pie para poder crear usar esta animación.");

    ApplyAnimation(playerid, "SWEET", "LaFin_Sweet", 4.0, false, true, true, true, SYNC_NONE);
    return 1;
}