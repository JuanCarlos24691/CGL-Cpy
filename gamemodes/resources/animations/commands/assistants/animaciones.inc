#include <YSI_Coding\y_hooks>

YCMD:animaciones(playerid, params[], help) {
    RestoreAnimationAssistantInfo(playerid);
    CreateFirstAnimAssistantTd(playerid);
    CreateANInOperation(playerid);
    return 1;
}