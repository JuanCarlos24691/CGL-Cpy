forward RestoreZoneInformation(const playerid);
public RestoreZoneInformation(const playerid) {
    if (zoneInformation[playerid][zoneTextDrawing] != PlayerText:INVALID_TEXT_DRAW) {
        PlayerTextDrawDestroy(playerid, zoneInformation[playerid][zoneTextDrawing]);
        zoneInformation[playerid][zoneTextDrawing] = PlayerText:INVALID_TEXT_DRAW;
    }

    if (zoneInformation[playerid][zoneTimer] != INVALID_TIMER) {
        KillTimer(zoneInformation[playerid][zoneTimer]);
        zoneInformation[playerid][zoneTimer] = INVALID_TIMER;
    }
    return 1;
}