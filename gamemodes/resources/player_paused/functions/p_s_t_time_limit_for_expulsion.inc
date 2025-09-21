forward PSTYimeLimitForExpulsion(const playerid);
public PSTYimeLimitForExpulsion(const playerid) {
    if (!IsPlayerPaused(playerid, 800) && playerPausedInformation[playerid][pSPaused] == false)
        return 1;

    RestorePlayerPausedInformation(playerid);

    SetPlayerInterior(playerid, 3);
    SetPlayerPos(playerid, 197.6661, 174.8179, 1003.0234);
    SetPlayerFacingAngle(playerid, 355.540374);
    SetCameraBehindPlayer(playerid);

    va_SendClientMessageToAll(-1, ""COLOR_ROSA"**KICK: %s (%d) (SERVER KICK) Pausado.", accountInformation[playerid][name], playerid);

    DelayToEjectThePlayer(playerid, 1500);
    return 1;
}