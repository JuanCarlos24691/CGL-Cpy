forward RestorePSPlayerOnPause(const playerid);
public RestorePSPlayerOnPause(const playerid) {
    if (playerPausedInformation[playerid][pSPlayerOnPause] != INVALID_TIMER) {
        KillTimer(playerPausedInformation[playerid][pSPlayerOnPause]);
        playerPausedInformation[playerid][pSPlayerOnPause] = INVALID_TIMER;
    }
    return 1;
}