forward RestoreLostVehicleTextDrawings(const playerid);
public RestoreLostVehicleTextDrawings(const playerid) {
    for (new i = 0; i < 6; i++) {
        if (lostVehiclePlayerInformation[playerid][lVTextdrawings][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i]);
            lostVehiclePlayerInformation[playerid][lVTextdrawings][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }
    return 1;
}