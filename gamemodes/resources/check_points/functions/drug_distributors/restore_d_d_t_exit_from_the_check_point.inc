forward RestoreDDTExitFromTheCheckPoint(const playerid);
public RestoreDDTExitFromTheCheckPoint(const playerid) {
    if (drugDistributorsInformation[playerid][dDTExitFromTheCheckPoint] != INVALID_TIMER) {
        KillTimer(drugDistributorsInformation[playerid][dDTExitFromTheCheckPoint]);
        drugDistributorsInformation[playerid][dDTExitFromTheCheckPoint] = INVALID_TIMER;
    }
    return 1;
}