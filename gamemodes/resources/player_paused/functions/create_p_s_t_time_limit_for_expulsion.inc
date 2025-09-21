forward CreatePSTYimeLimitForExpulsion(const playerid);
public CreatePSTYimeLimitForExpulsion(const playerid) {
    if (playerPausedInformation[playerid][pSTTimeLimitForExpulsion] == INVALID_TIMER)
        playerPausedInformation[playerid][pSTTimeLimitForExpulsion] = SetTimerEx("PSTYimeLimitForExpulsion", 300000, true, "i", playerid);
    return 1;
}