forward RestoreRATextDrawings(const playerid);
public RestoreRATextDrawings(const playerid) {
    for (new i = 0; i < 14; i++) {
        if (rulesAssistantInformation[playerid][rATextDrawings][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, rulesAssistantInformation[playerid][rATextDrawings][i]);
            rulesAssistantInformation[playerid][rATextDrawings][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }
    return 1;
}