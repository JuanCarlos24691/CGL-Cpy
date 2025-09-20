YCMD:rob(playerid, params[], help) {
    foreach (new i : Player) {
        new Float:playerXCoordinate, Float:playerYCoordinate, Float:playerZCoordinate;
        GetPlayerPos(i, playerXCoordinate, playerYCoordinate, playerZCoordinate);

        if (IsPlayerInRangeOfPoint(playerid, 1.4, playerXCoordinate, playerYCoordinate, playerZCoordinate) && playerid != i)
            return Steal(playerid, i);
    }

    return va_SendClientMessage(playerid, -1, ""COLOR_RED"No Hay Nadie Lo Suficiente Cerca Para Poder Robarle.");
}