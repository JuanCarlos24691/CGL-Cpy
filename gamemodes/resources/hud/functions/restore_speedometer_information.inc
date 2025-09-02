forward RestoreSpeedometerInformation(const playerid);
public RestoreSpeedometerInformation(const playerid) {
    if (speedometerInformation[playerid][textDrawing] != PlayerText:INVALID_TEXT_DRAW) {
        PlayerTextDrawDestroy(playerid, speedometerInformation[playerid][textDrawing]);
        speedometerInformation[playerid][textDrawing] = PlayerText:INVALID_TEXT_DRAW;
    }

    if (speedometerInformation[playerid][speed] != 0.0)
        speedometerInformation[playerid][speed] = 0.0;

    if (speedometerInformation[playerid][timer] != INVALID_TIMER) {
        KillTimer(speedometerInformation[playerid][timer]);
        speedometerInformation[playerid][timer] = INVALID_TIMER;
    }
    return 1;
}