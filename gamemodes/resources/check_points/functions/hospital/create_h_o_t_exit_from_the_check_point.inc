forward CreateHOTExitFromTheVheckPoint(const playerid);
public CreateHOTExitFromTheVheckPoint(const playerid) {
    if (hospitalInformation[playerid][hOTExitFromTheCheckPoint] == INVALID_TIMER)
        hospitalInformation[playerid][hOTExitFromTheCheckPoint] = SetTimerEx("HOTExitFromTheVheckPoint", 500, true, "i", playerid);
    return 1;
}