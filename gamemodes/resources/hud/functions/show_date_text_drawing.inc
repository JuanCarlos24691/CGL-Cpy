forward ShowDateTextDrawing(const playerid);
public ShowDateTextDrawing(const playerid) {
    if (!IsTextDrawVisibleForPlayer(playerid, dateTextDrawing))
        TextDrawShowForPlayer(playerid, dateTextDrawing);
    return 1;
}