YCMD:agonizar(playerid, params[], help) {
    if (GetPlayerState(playerid) != PLAYER_STATE_ONFOOT)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes estar de pie para poder crear usar esta animación.");

    ApplyAnimation(playerid, "WUZI", "CS_Dead_Guy", 4.0, false, false, false, true, SYNC_NONE);
    return 1;
}