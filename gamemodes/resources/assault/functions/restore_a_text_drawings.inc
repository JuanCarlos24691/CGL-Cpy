forward RestoreATextDrawings(const playerid);
public RestoreATextDrawings(const playerid) {
    for (new i = 0; i < 4; i++) {
        if (assaultPlayerInformation[playerid][aTextDrawings][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, assaultPlayerInformation[playerid][aTextDrawings][i]);
            assaultPlayerInformation[playerid][aTextDrawings][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }
    return 1;
}