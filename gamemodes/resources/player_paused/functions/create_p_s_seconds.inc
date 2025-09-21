forward CreatePSSeconds(const playerid, const newValue);
public CreatePSSeconds(const playerid, const newValue) {
    if (playerPausedInformation[playerid][pSSeconds] != newValue)
        playerPausedInformation[playerid][pSSeconds] = newValue;
    return 1;
}