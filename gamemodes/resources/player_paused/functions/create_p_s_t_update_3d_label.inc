forward CreatePSTUpdate3DLabel(const playerid);
public CreatePSTUpdate3DLabel(const playerid) {
    if (playerPausedInformation[playerid][pSTUpdate3DLabel] == INVALID_TIMER)
        playerPausedInformation[playerid][pSTUpdate3DLabel] = SetTimerEx("PSTUpdate3DLabel", 1000, true, "i", playerid);
    return 1;
}