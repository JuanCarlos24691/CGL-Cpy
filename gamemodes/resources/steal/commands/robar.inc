YCMD:robar(playerid, params[], help) {
    new targetPlayerId;

    if (!sscanf(params, "i", targetPlayerId)) {
        return Steal(playerid, targetPlayerId);
    } else {
        foreach (new i : Player) {
            new Float:playerXCoordinate, Float:playerYCoordinate, Float:playerZCoordinate;
            GetPlayerPos(i, playerXCoordinate, playerYCoordinate, playerZCoordinate);

            if (IsPlayerInRangeOfPoint(playerid, 1.3, playerXCoordinate, playerYCoordinate, playerZCoordinate) && playerid != i)
                return Steal(playerid, targetPlayerId);
        }
    }

    return va_SendClientMessage(playerid, -1, ""COLOR_RED"Usa: /robar (ID)");
}