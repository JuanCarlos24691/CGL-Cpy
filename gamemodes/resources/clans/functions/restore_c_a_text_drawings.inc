forward RestoreCATextDrawings(const playerid);
public RestoreCATextDrawings(const playerid) {
    for (new i = 0; i < 12; i++) {
        if (clanAssistantInformation[playerid][cATextDrawings][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, clanAssistantInformation[playerid][cATextDrawings][i]);
            clanAssistantInformation[playerid][cATextDrawings][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }
    return 1;
}