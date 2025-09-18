forward CreateHOInteZoneZCoordinate(const playerid, const Float:newCoordinate);
public CreateHOInteZoneZCoordinate(const playerid, const Float:newCoordinate) {
    if (hospitalInformation[playerid][hOInteractionZoneZCoordinate] != newCoordinate)
        hospitalInformation[playerid][hOInteractionZoneZCoordinate] = newCoordinate;
    return 1;
}