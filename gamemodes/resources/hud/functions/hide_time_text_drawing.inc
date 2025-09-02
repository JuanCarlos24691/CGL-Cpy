forward HideTimeTextDrawing(const playerid);
public HideTimeTextDrawing(const playerid) {
    if (IsTextDrawVisibleForPlayer(playerid, timeTextDrawing))
        TextDrawHideForPlayer(playerid, timeTextDrawing);
    return 1;
}