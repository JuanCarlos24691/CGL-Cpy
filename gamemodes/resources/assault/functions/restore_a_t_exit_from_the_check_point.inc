forward RestoreATExitFromTheCheckPoint(const playerid);
public RestoreATExitFromTheCheckPoint(const playerid) {
    if (assaultPlayerInformation[playerid][aTExitFromTheCheckPoint] != INVALID_TIMER)  {
        KillTimer(assaultPlayerInformation[playerid][aTExitFromTheCheckPoint]);
        assaultPlayerInformation[playerid][aTExitFromTheCheckPoint] = INVALID_TIMER;
    }
    return 1;
}