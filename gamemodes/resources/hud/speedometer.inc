#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    for (new i = 0; i < MAX_PLAYERS; i++) {
        speedometerInformation[i][textDrawing] = PlayerText:INVALID_TEXT_DRAW;
        speedometerInformation[i][timer] = INVALID_TIMER;
    }
    return 1;
}

hook OnPlayerStateChange(playerid, PLAYER_STATE:newstate, PLAYER_STATE:oldstate) {
    if (newstate == PLAYER_STATE_DRIVER) {
        if (speedometerInformation[playerid][timer] == INVALID_TIMER)
            speedometerInformation[playerid][timer] = SetTimerEx("UpdateSpeedometerTextDrawing", 500, true, "i", playerid);
    }
    return 1;
}