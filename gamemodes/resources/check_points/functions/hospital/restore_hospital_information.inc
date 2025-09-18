forward RestoreHospitalInformation(const playerid);
public RestoreHospitalInformation(const playerid) {
    RestoreHOInOperation(playerid);
    RestoreHOInSkinSelection(playerid);
    RestoreHOInteZoneXCoordinate(playerid);
    RestoreHOInteZoneYCoordinate(playerid);
    RestoreHOInteZoneZCoordinate(playerid);
    RestoreHOInteZoneAngleCoor(playerid);
    RestoreHOTExitFromTheVheckPoint(playerid);
    RestoreHOTWaitingTime(playerid);
    RestoreHOTextDrawings(playerid);
    return 1;
}