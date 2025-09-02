YCMD:bailar(playerid, params[], help) {
    if (GetPlayerState(playerid) != PLAYER_STATE_ONFOOT)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes estar de pie para poder crear usar esta animación.");

    new animationStyle;

    if (sscanf(params, "i", animationStyle))
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Usa: /bailar [1-4]");

    if (animationStyle < 1 || animationStyle > 4)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Estilo de baile inválido. Usa un número entre 1 y 4.");

    switch (animationStyle - 1) {
        case 0: SetPlayerSpecialAction(playerid, SPECIAL_ACTION_DANCE1);
        case 1: SetPlayerSpecialAction(playerid, SPECIAL_ACTION_DANCE2);
        case 2: SetPlayerSpecialAction(playerid, SPECIAL_ACTION_DANCE3);
        case 3: SetPlayerSpecialAction(playerid, SPECIAL_ACTION_DANCE4);
    }
    return 1;
}