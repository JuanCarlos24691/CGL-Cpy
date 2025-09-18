#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    for (new i = 0; i < MAX_PLAYERS; i++)
        RestoreRulesAssistantInfo(i);
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    RestoreRulesAssistantInfo(playerid);
    return 1;
}

hook OnPlayerKeyStateChange(playerid, KEY:newkeys, KEY:oldkeys) {
    if (newkeys & KEY_FIRE && rulesAssistantInformation[playerid][rAInOperation])
        RestoreRulesAssistantInfo(playerid);
    return 1;
}