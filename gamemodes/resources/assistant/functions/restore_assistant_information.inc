forward RestoreAssistantInformation(const playerid);
public RestoreAssistantInformation(const playerid) {
    for (new i = 0; i < 5; i++) {
        if (assistantInformation[playerid][textDrawings][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, assistantInformation[playerid][textDrawings][i]);
            assistantInformation[playerid][textDrawings][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }

    if (assistantInformation[playerid][inOperation])
        assistantInformation[playerid][inOperation] = false;
    return 1;
}