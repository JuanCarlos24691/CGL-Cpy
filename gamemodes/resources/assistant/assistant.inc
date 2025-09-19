#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    for (new i = 0; i < MAX_PLAYERS; i++)
        RestoreAssistantInformation(i);
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) { 
    RestoreAssistantInformation(playerid);
    return 1;
}

hook OnPlayerText(playerid, text[]) {
    if (assistantInformation[playerid][aSInOperation]) {
        if (isequal(text, "1", true)) {
            CreateCATextDrawings(playerid);
            return ~0;
        }
    }
    return 1;
}

hook OnPlayerKeyStateChange(playerid, KEY:newkeys, KEY:oldkeys) {
    if (newkeys & KEY_FIRE && assistantInformation[playerid][aSInOperation])
        RestoreAssistantInformation(playerid);
    return 1;
}