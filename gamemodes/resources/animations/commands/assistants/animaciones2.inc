#include <YSI_Coding\y_hooks>

hook OnPlayerKeyStateChange(playerid, KEY:newkeys, KEY:oldkeys) {
    if (newkeys & KEY_FIRE && animationAssistantInformation[playerid][inOperation])
        RestoreAnimationAssistantInfo(playerid);
    return 1;
}

YCMD:animaciones2(playerid, params[], help) {
    RestoreAnimationAssistantInfo(playerid);
    CreateSecondAnimAssistantTD(playerid);

    if (!animationAssistantInformation[playerid][inOperation])
        animationAssistantInformation[playerid][inOperation] = true;
    return 1;
}