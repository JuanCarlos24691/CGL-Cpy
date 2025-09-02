YCMD:rendirse(playerid, params[], help) {
    if (GetPlayerState(playerid) != PLAYER_STATE_ONFOOT)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes estar de pie para poder crear usar esta animación.");

    SetPlayerSpecialAction(playerid, SPECIAL_ACTION_HANDSUP);
    return 1;
}