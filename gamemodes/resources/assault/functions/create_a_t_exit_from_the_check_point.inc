forward CreateATExitFromTheCheckPoint(const playerid);
public CreateATExitFromTheCheckPoint(const playerid) {
    if (assaultPlayerInformation[playerid][aTExitFromTheCheckPoint] == INVALID_TIMER)
        assaultPlayerInformation[playerid][aTExitFromTheCheckPoint] = SetTimerEx("ExitFromTheTheftCheckPoint", 1000, true, "i", playerid);
    return 1;
}