forward RestoreASTextDrawings(const playerid);
public RestoreASTextDrawings(const playerid) {
    for (new i = 0; i < 5; i++) {
        if (assistantInformation[playerid][asTextDrawings][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, assistantInformation[playerid][asTextDrawings][i]);
            assistantInformation[playerid][asTextDrawings][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }
    return 1;
}