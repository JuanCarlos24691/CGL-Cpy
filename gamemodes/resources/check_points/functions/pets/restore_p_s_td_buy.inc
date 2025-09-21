forward RestorePSTDBuy(const playerid);
public RestorePSTDBuy(const playerid) {
    for (new i = 0; i < 42; i++) {
        if (petsInformation[playerid][pSTDBuy][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, petsInformation[playerid][pSTDBuy][i]);
            petsInformation[playerid][pSTDBuy][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }
    return 1;
}