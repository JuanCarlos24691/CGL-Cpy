forward RestorePSTDPlaceName(const playerid);
public RestorePSTDPlaceName(const playerid) {
    for (new i = 0; i < 4; i++) {
        if (petsInformation[playerid][pSTDPlaceName][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, petsInformation[playerid][pSTDPlaceName][i]);
            petsInformation[playerid][pSTDPlaceName][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }
    return 1;
}