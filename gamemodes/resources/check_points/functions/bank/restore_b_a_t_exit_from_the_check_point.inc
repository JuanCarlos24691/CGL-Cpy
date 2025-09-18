forward RestoreBATExitFromTheCheckPoint(const playerid);
public RestoreBATExitFromTheCheckPoint(const playerid) {
    if (bankInformation[playerid][bATExitFromTheCheckPoint] != INVALID_TIMER) {
        KillTimer(bankInformation[playerid][bATExitFromTheCheckPoint]);
        bankInformation[playerid][bATExitFromTheCheckPoint] = INVALID_TIMER;
    }
    return 1;
}