#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    SetTimerEx("UpdateDayTextDrawing", 1000, true);
    return 1;
}

hook OnPlayerSpawn(playerid) {
    TextDrawShowForPlayer(playerid, dayTextDrawing);
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    TextDrawHideForPlayer(playerid, dayTextDrawing);
    return 1;
}