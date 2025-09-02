forward RestoreClanAssistantInfo(const playerid);
public RestoreClanAssistantInfo(const playerid) {
    for (new i = 0; i < 12; i++) {
        if (clanAssistantInformation[playerid][textDrawings][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, clanAssistantInformation[playerid][textDrawings][i]);
            clanAssistantInformation[playerid][textDrawings][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }

    if (clanAssistantInformation[playerid][inOperation])
        clanAssistantInformation[playerid][inOperation] = false;
    return 1;
}