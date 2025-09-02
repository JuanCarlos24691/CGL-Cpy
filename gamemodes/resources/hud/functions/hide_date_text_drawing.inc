forward HideDateTextDrawing(const playerid);
public HideDateTextDrawing(const playerid) {
    if (IsTextDrawVisibleForPlayer(playerid, dateTextDrawing))
        TextDrawHideForPlayer(playerid, dateTextDrawing);
    return 1;
}