YCMD:inhalar(playerid, params[], help) {
    if (GetPlayerState(playerid) != PLAYER_STATE_ONFOOT)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes estar de pie para poder crear usar esta animación.");

    ApplyAnimation(playerid, "SMOKING", "M_smk_drag", 4.0, true, false, false, false, -1);
    return 1;
}