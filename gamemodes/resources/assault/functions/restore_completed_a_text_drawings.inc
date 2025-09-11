forward RestoreCompletedATextDrawings(const playerid);
public RestoreCompletedATextDrawings(const playerid) {
    for (new i = 0; i < 6; i++) {
        if (assaultPlayerInformation[playerid][cTextDrawings][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, assaultPlayerInformation[playerid][cTextDrawings][i]);
            assaultPlayerInformation[playerid][cTextDrawings][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }
    return 1;
}