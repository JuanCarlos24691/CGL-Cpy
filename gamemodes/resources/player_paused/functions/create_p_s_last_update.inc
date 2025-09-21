forward CreatePSLastUpdate(const playerid, const newValue);
public CreatePSLastUpdate(const playerid, const newValue) {
    if (playerPausedInformation[playerid][pSLastUpdate] != newValue)
        playerPausedInformation[playerid][pSLastUpdate] = newValue;
    return 1;
}