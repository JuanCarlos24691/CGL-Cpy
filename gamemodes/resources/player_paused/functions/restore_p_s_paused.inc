forward RestorePSPaused(const playerid);
public RestorePSPaused(const playerid) {
    if (playerPausedInformation[playerid][pSPaused] != false)
        playerPausedInformation[playerid][pSPaused] = false;
    return 1;
}