forward RestoreHospitalInformation(const playerid, const bool:restoreSkinChangeInformation);
public RestoreHospitalInformation(const playerid, const bool:restoreSkinChangeInformation) {
    for (new i = 0; i < 12; i++) {
        if (hospitalInformation[playerid][hOTextDrawings][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, hospitalInformation[playerid][hOTextDrawings][i]);
            hospitalInformation[playerid][hOTextDrawings][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }

    if (hospitalInformation[playerid][hOInOperation] != false)
        hospitalInformation[playerid][hOInOperation] = false;

    if (restoreSkinChangeInformation) {
        if (hospitalInformation[playerid][hOInSkinSelection] != false)
            hospitalInformation[playerid][hOInSkinSelection] = false;

        if (hospitalInformation[playerid][hOInteractionZoneXCoordinate] != 0.0)
            hospitalInformation[playerid][hOInteractionZoneXCoordinate] = 0.0;

        if (hospitalInformation[playerid][hOInteractionZoneYCoordinate] != 0.0)
            hospitalInformation[playerid][hOInteractionZoneYCoordinate] = 0.0;

        if (hospitalInformation[playerid][hOInteractionZoneZCoordinate] != 0.0)
            hospitalInformation[playerid][hOInteractionZoneZCoordinate] = 0.0;

        if (hospitalInformation[playerid][hOInteractionZoneAngle] != 0.0)
            hospitalInformation[playerid][hOInteractionZoneAngle] = 0.0;
    }

    if (hospitalInformation[playerid][hOWaitingTime] != 0)
        hospitalInformation[playerid][hOWaitingTime] = 0;

    if (hospitalInformation[playerid][hOTExitFromTheCheckPoint] != INVALID_TIMER) {
        KillTimer(hospitalInformation[playerid][hOTExitFromTheCheckPoint]);
        hospitalInformation[playerid][hOTExitFromTheCheckPoint] = INVALID_TIMER;
    }
    return 1;
}