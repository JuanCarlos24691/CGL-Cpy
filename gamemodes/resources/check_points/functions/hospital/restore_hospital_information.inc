forward RestoreHospitalInformation(const playerid, const bool:restoreSkinChangeInformation);
public RestoreHospitalInformation(const playerid, const bool:restoreSkinChangeInformation) {
    for (new i = 0; i < 12; i++) {
        if (hospitalInformation[playerid][hospitalTextDrawings][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, hospitalInformation[playerid][hospitalTextDrawings][i]);
            hospitalInformation[playerid][hospitalTextDrawings][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }

    if (hospitalInformation[playerid][inOperation])
        hospitalInformation[playerid][inOperation] = false;

    if (restoreSkinChangeInformation) {
        if (hospitalInformation[playerid][inSkinSelection])
            hospitalInformation[playerid][inSkinSelection] = false;

        if (hospitalInformation[playerid][interactionZoneXCoordinate] != 0.0)
            hospitalInformation[playerid][interactionZoneXCoordinate] = 0.0;

        if (hospitalInformation[playerid][interactionZoneYCoordinate] != 0.0)
            hospitalInformation[playerid][interactionZoneYCoordinate] = 0.0;

        if (hospitalInformation[playerid][interactionZoneZCoordinate] != 0.0)
            hospitalInformation[playerid][interactionZoneZCoordinate] = 0.0;

        if (hospitalInformation[playerid][interactionZoneAngle] != 0.0)
            hospitalInformation[playerid][interactionZoneAngle] = 0.0;
    }

    if (hospitalInformation[playerid][waitingTime] != 0)
        hospitalInformation[playerid][waitingTime] = 0;

    if (hospitalInformation[playerid][hospitalTimer] != INVALID_TIMER) {
        KillTimer(hospitalInformation[playerid][hospitalTimer]);
        hospitalInformation[playerid][hospitalTimer] = INVALID_TIMER;
    }
    return 1;
}