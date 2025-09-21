forward RestorePSTUpdate3DLabel(const playerid);
public RestorePSTUpdate3DLabel(const playerid) {
    if (playerPausedInformation[playerid][pSTUpdate3DLabel] != INVALID_TIMER) {
        KillTimer(playerPausedInformation[playerid][pSTUpdate3DLabel]);
        playerPausedInformation[playerid][pSTUpdate3DLabel] = INVALID_TIMER;
    }
    return 1;
}