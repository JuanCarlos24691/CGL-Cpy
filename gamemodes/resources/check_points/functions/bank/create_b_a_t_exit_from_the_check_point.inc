forward CreateBATExitFromTheCheckPoint(const playerid);
public CreateBATExitFromTheCheckPoint(const playerid) {
    if (bankInformation[playerid][bATExitFromTheCheckPoint] == INVALID_TIMER)
        bankInformation[playerid][bATExitFromTheCheckPoint] = SetTimerEx("BATExitFromTheCheckPoint", 500, true, "i", playerid);
    return 1;
}