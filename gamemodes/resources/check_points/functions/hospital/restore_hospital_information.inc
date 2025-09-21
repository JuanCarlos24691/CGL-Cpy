forward RestoreHospitalInformation(const playerid, const bool:critic);
public RestoreHospitalInformation(const playerid, const bool:critic) {
    RestoreHOInOperation(playerid);
    RestoreHOTExitFromTheVheckPoint(playerid);
    RestoreHOTWaitingTime(playerid);
    RestoreHOTextDrawings(playerid);

    if (critic) {
        RestoreHOInSkinSelection(playerid);
        RestoreHOInteZoneXCoordinate(playerid);
        RestoreHOInteZoneYCoordinate(playerid);
        RestoreHOInteZoneZCoordinate(playerid);
        RestoreHOInteZoneAngleCoor(playerid);
    }
    return 1;
}