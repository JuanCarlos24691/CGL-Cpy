forward DestroyMoneyBangTextDrawings(const playerid);
public DestroyMoneyBangTextDrawings(const playerid) {
    for (new i = 0; i < 7; i++) {
        if (moneyBangTextDrawings[playerid][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, moneyBangTextDrawings[playerid][i]);
            moneyBangTextDrawings[playerid][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }
    return 1;
}