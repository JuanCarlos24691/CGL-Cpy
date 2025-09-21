forward IsPlayerPaused(const playerid, const time);
public IsPlayerPaused(const playerid, const time) {
    return (GetTickCount() - playerPausedInformation[playerid][pSLastUpdate]) > time;
}