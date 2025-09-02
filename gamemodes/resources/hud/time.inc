#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    SetTimerEx("UpdateTimeTextDrawing", 1000, true);
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    HideTimeTextDrawing(playerid);
    return 1;
}