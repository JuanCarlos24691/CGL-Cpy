forward CreateHOInteZoneXCoordinate(const playerid, const Float:newCoordinate);
public CreateHOInteZoneXCoordinate(const playerid, const Float:newCoordinate) {
    if (hospitalInformation[playerid][hOInteractionZoneXCoordinate] != newCoordinate)
        hospitalInformation[playerid][hOInteractionZoneXCoordinate] = newCoordinate;
    return 1;
}