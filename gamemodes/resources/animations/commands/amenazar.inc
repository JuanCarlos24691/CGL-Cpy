YCMD:amenazar(playerid, params[], help) {
    if (GetPlayerState(playerid) != PLAYER_STATE_ONFOOT)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes estar de pie para poder crear usar esta animación.");

    ApplyAnimation(playerid, "SHOP", "ROB_Loop_Threat", 4.0, false, false, false, true, 1);
    return 1;
}