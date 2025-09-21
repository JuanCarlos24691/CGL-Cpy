forward RestorePSSeconds(const playerid);
public RestorePSSeconds(const playerid) {
    if (playerPausedInformation[playerid][pSSeconds] != 0)
        playerPausedInformation[playerid][pSSeconds] = 0;
    return 1;
}