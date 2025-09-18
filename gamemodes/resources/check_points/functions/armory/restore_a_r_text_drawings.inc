forward RestoreARTextDrawings(const playerid);
public RestoreARTextDrawings(const playerid) {
    for (new i = 0; i < 24; i++) {
        if (armoryInformation[playerid][aRTextDrawings][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, armoryInformation[playerid][aRTextDrawings][i]);
            armoryInformation[playerid][aRTextDrawings][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }
    return 1;
}