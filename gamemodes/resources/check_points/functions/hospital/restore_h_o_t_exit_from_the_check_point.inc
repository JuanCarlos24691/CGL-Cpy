forward RestoreHOTExitFromTheVheckPoint(const playerid);
public RestoreHOTExitFromTheVheckPoint(const playerid) {
    if (hospitalInformation[playerid][hOTExitFromTheCheckPoint] != INVALID_TIMER) {
        KillTimer(hospitalInformation[playerid][hOTExitFromTheCheckPoint]);
        hospitalInformation[playerid][hOTExitFromTheCheckPoint] = INVALID_TIMER;
    }
    return 1;
}