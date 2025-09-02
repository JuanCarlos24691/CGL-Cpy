#include <YSI_Coding\y_hooks>

hook OnPlayerConnect(playerid) {
    PreloadAnimations(playerid);
    return 1;
}