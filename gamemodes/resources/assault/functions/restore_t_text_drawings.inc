forward RestoreTTextDrawings(const playerid);
public RestoreTTextDrawings(const playerid) {
    if (assaultPlayerInformation[playerid][tTextDrawing] != PlayerText:INVALID_TEXT_DRAW) {
        PlayerTextDrawDestroy(playerid, assaultPlayerInformation[playerid][tTextDrawing]);
        assaultPlayerInformation[playerid][tTextDrawing] = PlayerText:INVALID_TEXT_DRAW;
    }
    return 1;
}