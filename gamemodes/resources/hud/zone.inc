#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    for (new i = 0; i < MAX_PLAYERS; i++) {
        zoneInformation[i][zoneTextDrawing] = PlayerText:INVALID_TEXT_DRAW;
        zoneInformation[i][zoneTimer] = INVALID_TIMER;
    }
    return 1;
}

hook OnPlayerSpawn(playerid) {
    if (zoneInformation[playerid][zoneTimer] == INVALID_TIMER)
        zoneInformation[playerid][zoneTimer] = SetTimerEx("UpdateZoneTextDrawing", 500, true, "i", playerid);
    return 1;
}

hook OnPlayerDisconnect(playerid) {
    RestoreZoneInformation(playerid);
    return 1;
}