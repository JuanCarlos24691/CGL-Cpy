forward RestorePSMinutes(const playerid);
public RestorePSMinutes(const playerid) {
    if (playerPausedInformation[playerid][pSMinutes] != 0)
        playerPausedInformation[playerid][pSMinutes] = 0;
    return 1;
}