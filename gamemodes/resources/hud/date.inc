#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    SetTimerEx("UpdateDateTextDrawing", 1000, true);
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    HideDateTextDrawing(playerid);
    return 1;
}