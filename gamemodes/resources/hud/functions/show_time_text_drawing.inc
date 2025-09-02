forward ShowTimeTextDrawing(const playerid);
public ShowTimeTextDrawing(const playerid) {
    if (!IsTextDrawVisibleForPlayer(playerid, timeTextDrawing))
        TextDrawShowForPlayer(playerid, timeTextDrawing);
    return 1;
}