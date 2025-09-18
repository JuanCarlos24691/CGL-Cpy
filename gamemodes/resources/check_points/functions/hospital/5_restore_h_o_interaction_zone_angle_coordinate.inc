forward RestoreHOInteZoneAngleCoor(const playerid);
public RestoreHOInteZoneAngleCoor(const playerid) {
    if (hospitalInformation[playerid][hOInteractionZoneAngleCoor] != 0.0)
        hospitalInformation[playerid][hOInteractionZoneAngleCoor] = 0.0;
    return 1;
}