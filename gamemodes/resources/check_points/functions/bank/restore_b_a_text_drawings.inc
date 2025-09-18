forward RestoreBATextDrawings(const playerid);
public RestoreBATextDrawings(const playerid) {
    for (new i = 0; i < 8; i++) {
        if (bankInformation[playerid][bATextDrawings][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, bankInformation[playerid][bATextDrawings][i]);
            bankInformation[playerid][bATextDrawings][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }
    return 1;
}