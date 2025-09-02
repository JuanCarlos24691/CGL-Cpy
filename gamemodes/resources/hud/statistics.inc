#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    for (new i = 0; i < MAX_PLAYERS; i++) {
        for (new b = 0; b < 7; b++)
            statisticsInformation[i][statisticsTextDrawings][b] = PlayerText:INVALID_TEXT_DRAW;

        statisticsInformation[i][statisticsTimer] = INVALID_TIMER;
    }
    return 1;
}

hook OnPlayerSpawn(playerid) {
    if (statisticsInformation[playerid][statisticsTimer] == INVALID_TIMER)
        statisticsInformation[playerid][statisticsTimer] = SetTimerEx("UpdateStatisticsInformation", 500, true, "i", playerid);
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    RestoreStatisticsInformation(playerid);
    return 1;
}