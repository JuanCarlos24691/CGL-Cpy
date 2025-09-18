forward RestoreHOInteZoneXCoordinate(const playerid);
public RestoreHOInteZoneXCoordinate(const playerid) {
    if (hospitalInformation[playerid][hOInteractionZoneXCoordinate] != 0.0)
        hospitalInformation[playerid][hOInteractionZoneXCoordinate] = 0.0;
    return 1;
}