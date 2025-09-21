forward CreatePSPlayerOnPause(const playerid);
public CreatePSPlayerOnPause(const playerid) {
    if (playerPausedInformation[playerid][pSPlayerOnPause] == INVALID_TIMER)
        playerPausedInformation[playerid][pSPlayerOnPause] = SetTimerEx("PSPlayerOnPause", 800, true, "i", playerid);
    return 1;
}