forward CreatePSMinutes(const playerid, const newValue);
public CreatePSMinutes(const playerid, const newValue) {
    if (playerPausedInformation[playerid][pSMinutes] != newValue)
        playerPausedInformation[playerid][pSMinutes] = newValue;
    return 1;
}