forward RestoreRulesAssistantInfo(const playerid);
public RestoreRulesAssistantInfo(const playerid) {
    for (new i = 0; i < 14; i++) {
        if (rulesAssistantInformation[playerid][textDrawings][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, rulesAssistantInformation[playerid][textDrawings][i]);
            rulesAssistantInformation[playerid][textDrawings][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }

    if (rulesAssistantInformation[playerid][inUse])
        rulesAssistantInformation[playerid][inUse] = false;
    return 1;
}