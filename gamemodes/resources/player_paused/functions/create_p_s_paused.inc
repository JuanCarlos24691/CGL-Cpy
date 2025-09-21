forward CreatePSPaused(const playerid);
public CreatePSPaused(const playerid) {
    if (playerPausedInformation[playerid][pSPaused] != true)
        playerPausedInformation[playerid][pSPaused] = true;
    return 1;
}