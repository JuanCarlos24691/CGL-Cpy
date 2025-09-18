#include <YSI_Coding\y_hooks>

YCMD:animaciones3(playerid, params[], help) {
    RestoreAnimationAssistantInfo(playerid);
    CreateThirdAnimAssistantTd(playerid);
    CreateANInOperation(playerid);
    return 1;
}