forward UpdateZoneTextDrawing(const playerid);
public UpdateZoneTextDrawing(const playerid) {
    if (!accountInformation[playerid][inGame])
        return RestoreZoneInformation(playerid);

    new zoneName[MAX_MAP_ZONE_NAME], MapZone:zone = GetPlayerMapZone(playerid);

    if (zone == INVALID_MAP_ZONE_ID)
        strcpy(zoneName, "Zona desconocida");
    else
        GetMapZoneName(zone, zoneName);

    CreateZoneTextDrawing(playerid, zoneName);
    return 1;
}