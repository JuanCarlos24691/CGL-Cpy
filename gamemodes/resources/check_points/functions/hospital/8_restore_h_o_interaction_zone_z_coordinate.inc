forward RestoreHOInteZoneZCoordinate(const playerid);
public RestoreHOInteZoneZCoordinate(const playerid) {
    if (hospitalInformation[playerid][hOInteractionZoneZCoordinate] != 0.0)
        hospitalInformation[playerid][hOInteractionZoneZCoordinate] = 0.0;
    return 1;
}