forward RestoreINTextDrawings(const playerid);
public RestoreINTextDrawings(const playerid) {
    for (new i = 0; i < 12; i++) {
        if (inventoryInformation[playerid][iNTextDrawings][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, inventoryInformation[playerid][iNTextDrawings][i]);
            inventoryInformation[playerid][iNTextDrawings][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }
    return 1;
}