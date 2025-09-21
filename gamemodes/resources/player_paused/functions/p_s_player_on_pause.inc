forward PSPlayerOnPause(const playerid);
public PSPlayerOnPause(const playerid) {
    if (accountInformation[playerid][inGame] == false)
        return 1;

    if (IsPlayerPaused(playerid, 800) && playerPausedInformation[playerid][pSPaused] == false) {
        CreatePSPaused(playerid);
        CreatePS3DLabel(playerid);
        CreatePSTUpdate3DLabel(playerid);

        if (accountInformation[playerid][administrativeLevel] == 0)
            CreatePSTYimeLimitForExpulsion(playerid);
    }
    return 1;
}