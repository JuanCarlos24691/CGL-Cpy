forward RestorePSTextDrawings(const playerid);
public RestorePSTextDrawings(const playerid) {
    for (new i = 0; i < 6; i++) {
        if (petsInformation[playerid][pSTextDrawings][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, petsInformation[playerid][pSTextDrawings][i]);
            petsInformation[playerid][pSTextDrawings][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }
    return 1;
}