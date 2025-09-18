forward RestoreHOTextDrawings(const playerid);
public RestoreHOTextDrawings(const playerid) {
    for (new i = 0; i < 12; i++) {
        if (hospitalInformation[playerid][hOTextDrawings][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, hospitalInformation[playerid][hOTextDrawings][i]);
            hospitalInformation[playerid][hOTextDrawings][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }
    return 1;
}