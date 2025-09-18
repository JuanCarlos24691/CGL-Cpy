forward CreatePSTExitFromTheCheckPoint(const playerid);
public CreatePSTExitFromTheCheckPoint(const playerid) {
    if (petsInformation[playerid][pSTExitFromTheCheckPoint] == INVALID_TIMER)
        petsInformation[playerid][pSTExitFromTheCheckPoint] = SetTimerEx("PSTExitFromTheCheckPoint", 500, true, "i", playerid);
    return 1;
}