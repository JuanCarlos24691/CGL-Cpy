forward HideDayTextDrawing(const playerid);
public HideDayTextDrawing(const playerid) {
    if (IsTextDrawVisibleForPlayer(playerid, dayTextDrawing))
        TextDrawHideForPlayer(playerid, dayTextDrawing);
    return 1;
}