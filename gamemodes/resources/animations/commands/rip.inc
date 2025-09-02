YCMD:rip(playerid, params[], help) {
    if (GetPlayerState(playerid) != PLAYER_STATE_ONFOOT)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes estar de pie para poder crear usar esta animación.");

    foreach (new i : Player) {
        new Float:x, Float:y, Float:z;
        GetPlayerPos(i, x, y, z);

        if (IsPlayerInRangeOfPoint(playerid, 1.3, x, y, z) && GetPlayerState(playerid) == PLAYER_STATE_WASTED && i != playerid) {
            va_SendClientMessageToAll(GetPlayerColor(playerid), "%s se alegra por la muerte de %s", accountInformation[playerid][name], accountInformation[i][name]);
            ApplyAnimation(playerid, "GRAVEYARD", "mrnM_loop", 5, false, false, false, false, SYNC_NONE);
            return 1;
        }
    }

    va_SendClientMessageToAll(-1, ""COLOR_RED"No hay nadie cerca para alegrarse por su muerte.");
    return 1;
}