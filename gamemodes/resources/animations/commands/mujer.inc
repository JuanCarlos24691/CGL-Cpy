YCMD:mujer(playerid, params[], help) {
    if (GetPlayerState(playerid) != PLAYER_STATE_ONFOOT)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes estar de pie para poder crear usar esta animación.");

    ApplyAnimation(playerid, "PED", "WOMAN_walkpro", 4.0, true, true, true, true, 1);
    return 1;
}