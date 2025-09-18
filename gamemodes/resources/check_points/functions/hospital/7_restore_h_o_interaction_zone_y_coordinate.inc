forward RestoreHOInteZoneYCoordinate(const playerid);
public RestoreHOInteZoneYCoordinate(const playerid) {
    if (hospitalInformation[playerid][hOInteractionZoneYCoordinate] != 0.0)
        hospitalInformation[playerid][hOInteractionZoneYCoordinate] = 0.0;
    return 1;
}