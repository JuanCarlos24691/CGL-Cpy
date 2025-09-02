#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    for (new i = 0; i < MAX_PLAYERS; i++)
        for (new e = 0; e < 14; e++)
            rulesAssistantInformation[i][textDrawings][e] = PlayerText:INVALID_TEXT_DRAW;
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    RestoreRulesAssistantInfo(playerid);
    return 1;
}

hook OnPlayerKeyStateChange(playerid, KEY:newkeys, KEY:oldkeys) {
    if (newkeys & KEY_FIRE && rulesAssistantInformation[playerid][inUse])
        RestoreRulesAssistantInfo(playerid);
    return 1;
}