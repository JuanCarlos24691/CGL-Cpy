forward RestoreVehicleCreationInfo(const playerid);
public RestoreVehicleCreationInfo(const playerid) {
    for (new i = 0; i < MAX_PLAYER_VEHICLES; i++) {
        if (playerVehicleCreationInfo[playerid][vehicles][i] != INVALID_VEHICLE_ID) {
            DestroyVehicle(playerVehicleCreationInfo[playerid][vehicles][i]);
            playerVehicleCreationInfo[playerid][vehicles][i] = INVALID_VEHICLE_ID;
        }
    }

    if (playerVehicleCreationInfo[playerid][primaryColor] != -1)
        playerVehicleCreationInfo[playerid][primaryColor] = -1;

    if (playerVehicleCreationInfo[playerid][secondaryColor] != -1)
        playerVehicleCreationInfo[playerid][secondaryColor] = -1;
    return 1;
}