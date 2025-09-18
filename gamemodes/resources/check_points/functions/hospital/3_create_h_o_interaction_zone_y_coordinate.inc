forward CreateHOInteZoneYCoordinate(const playerid, const Float:newCoordinate);
public CreateHOInteZoneYCoordinate(const playerid, const Float:newCoordinate) {
    if (hospitalInformation[playerid][hOInteractionZoneYCoordinate] != newCoordinate)
        hospitalInformation[playerid][hOInteractionZoneYCoordinate] = newCoordinate;
    return 1;
}