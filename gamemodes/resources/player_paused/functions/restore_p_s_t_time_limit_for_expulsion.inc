forward RestorePSTYimeLimitForExpulsion(const playerid);
public RestorePSTYimeLimitForExpulsion(const playerid) {
    if (playerPausedInformation[playerid][pSTTimeLimitForExpulsion] != INVALID_TIMER) {
        KillTimer(playerPausedInformation[playerid][pSTTimeLimitForExpulsion]);
        playerPausedInformation[playerid][pSTTimeLimitForExpulsion] = INVALID_TIMER;
    }
    return 1;
}