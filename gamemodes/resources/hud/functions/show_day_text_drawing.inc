forward ShowDayTextDrawing(const playerid);
public ShowDayTextDrawing(const playerid) {
    if (!IsTextDrawVisibleForPlayer(playerid, dayTextDrawing))
        TextDrawShowForPlayer(playerid, dayTextDrawing);
    return 1;
}