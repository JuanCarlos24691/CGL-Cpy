forward RestoreMBTextDrawings(const playerid);
public RestoreMBTextDrawings(const playerid) {
    for (new i = 0; i < 7; i++) {
        if (moneyBangPlayerInformation[playerid][mBTextDrawings][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i]);
            moneyBangPlayerInformation[playerid][mBTextDrawings][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }
    return 1;
}