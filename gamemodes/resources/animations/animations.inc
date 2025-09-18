#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    for (new i = 0; i < MAX_PLAYERS; i++)
        RestoreAnimationAssistantInfo(i);
    return 1;
}

hook OnPlayerKeyStateChange(playerid, KEY:newkeys, KEY:oldkeys) {
    if (newkeys & KEY_FIRE && animationAssistantInformation[playerid][aNInOperation])
        RestoreAnimationAssistantInfo(playerid);
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    RestoreAnimationAssistantInfo(playerid);
    return 1;
}