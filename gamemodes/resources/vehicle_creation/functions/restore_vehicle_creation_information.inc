forward RestoreVehicleCreationInfo(const playerid);
public RestoreVehicleCreationInfo(const playerid) {
    for (new i = 0; i < MAX_PLAYER_VEHICLES; i++) {
        if (playerVehicleCreationInfo[playerid][pVVehicles][i] != INVALID_VEHICLE_ID) {
            DestroyVehicle(playerVehicleCreationInfo[playerid][pVVehicles][i]);
            playerVehicleCreationInfo[playerid][pVVehicles][i] = INVALID_VEHICLE_ID;
        }
    }

    if (playerVehicleCreationInfo[playerid][pVPrimaryColor] != -1)
        playerVehicleCreationInfo[playerid][pVPrimaryColor] = -1;

    if (playerVehicleCreationInfo[playerid][pVSecondaryColor] != -1)
        playerVehicleCreationInfo[playerid][pVSecondaryColor] = -1;
    return 1;
}