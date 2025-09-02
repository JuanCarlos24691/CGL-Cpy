YCMD:apagar(playerid, params[], help) {
    if (GetPlayerState(playerid) != PLAYER_STATE_ONFOOT)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes estar de pie para poder crear usar esta animación.");

    ApplyAnimation(playerid, "SMOKING", "M_smk_out", 4.0, false, true, true, false, SYNC_NONE);
    return 1;
}