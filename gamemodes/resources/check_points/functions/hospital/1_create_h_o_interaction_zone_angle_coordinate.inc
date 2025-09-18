forward CreateHOInteZoneAngleCoordinate(const playerid, const Float:newCoordinate);
public CreateHOInteZoneAngleCoordinate(const playerid, const Float:newCoordinate) {
    if (hospitalInformation[playerid][hOInteractionZoneAngleCoor] != newCoordinate)
        hospitalInformation[playerid][hOInteractionZoneAngleCoor] = newCoordinate;
    return 1;
}