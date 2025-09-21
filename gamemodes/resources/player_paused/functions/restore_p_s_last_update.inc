forward RestorePSLastUpdate(const playerid);
public RestorePSLastUpdate(const playerid) {
    if (playerPausedInformation[playerid][pSLastUpdate] != 0)
        playerPausedInformation[playerid][pSLastUpdate] = 0;
    return 1;
}