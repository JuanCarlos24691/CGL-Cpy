forward RestorePlayerPausedInformation(const playerid);
public RestorePlayerPausedInformation(const playerid) {
    RestorePSTYimeLimitForExpulsion(playerid);
    RestorePSPaused(playerid);
    RestorePS3DLabel(playerid);
    RestorePSTUpdate3DLabel(playerid);
    RestorePSLastUpdate(playerid);
    RestorePSMinutes(playerid);
    RestorePSSeconds(playerid);
    RestorePSPlayerOnPause(playerid);
    return 1;
}