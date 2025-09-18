#include <YSI_Coding\y_hooks>

YCMD:animaciones2(playerid, params[], help) {
    RestoreAnimationAssistantInfo(playerid);
    CreateSecondAnimAssistantTd(playerid);
    CreateANInOperation(playerid);
    return 1;
}