YCMD:comodo(playerid, params[], help) {
    if (GetPlayerState(playerid) != PLAYER_STATE_ONFOOT)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes estar de pie para poder crear usar esta animación.");

    ApplyAnimation(playerid, "INT_HOUSE", "LOU_In", 4.1, false, true, true, true, 1);
    return 1;
}