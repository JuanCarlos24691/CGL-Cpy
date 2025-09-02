#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    SetTimerEx("UpdateRandomMessagesTextDrawing", 5000, true);
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    HideRandomMessagesTextDrawing(playerid);
    return 1;
}