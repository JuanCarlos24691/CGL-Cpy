#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    for (new i = 0; i < MAX_PLAYERS; i++)
        for (new e = 0; e < 5; e++)
            assistantInformation[i][textDrawings][e] = PlayerText:INVALID_TEXT_DRAW;
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    RestoreAssistantInformation(playerid);
    return 1;
}

hook OnPlayerText(playerid, text[]) {
    if (assistantInformation[playerid][inOperation]) {
        if (isequal(text, "1", true)) {
            RestoreAssistantInformation(playerid);
            CreateClanWizardTextDrawings(playerid);

            if (!clanAssistantInformation[playerid][inOperation])
                clanAssistantInformation[playerid][inOperation] = true;

            return ~0;
        }
    }
    return 1;
}

hook OnPlayerKeyStateChange(playerid, KEY:newkeys, KEY:oldkeys) {
    if (newkeys & KEY_FIRE && assistantInformation[playerid][inOperation])
        RestoreAssistantInformation(playerid);
    return 1;
}