forward RestorePSTExiFromTheCheckPoint(const playerid);
public RestorePSTExiFromTheCheckPoint(const playerid) {
    if (petsInformation[playerid][pSTExitFromTheCheckPoint] != INVALID_TIMER) {
        KillTimer(petsInformation[playerid][pSTExitFromTheCheckPoint]);
        petsInformation[playerid][pSTExitFromTheCheckPoint] = INVALID_TIMER;
    }
    return 1;
}