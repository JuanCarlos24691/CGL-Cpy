forward CreateVehicleForThePlayer(const playerid, const vehicleCreationModelId, const primaryColorOfVehicleCreation, const secondaryColorOfVehicleCreation);
public CreateVehicleForThePlayer(const playerid, const vehicleCreationModelId, const primaryColorOfVehicleCreation, const secondaryColorOfVehicleCreation) {
    for (new i = 0; i < MAX_PLAYER_VEHICLES; i++) {
        if (playerVehicleCreationInfo[playerid][pVVehicles][i] == INVALID_VEHICLE_ID) {
            new Float:xCoordinateOfThePlayer, Float:yCoordinateOfThePlayer, Float:zCoordinateOfThePlayer, Float:angleCoordinateOfThePlayer;
            GetPlayerPos(playerid, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer);
            GetPlayerFacingAngle(playerid, angleCoordinateOfThePlayer);

            xCoordinateOfThePlayer += (3.4 * floatcos(angleCoordinateOfThePlayer + 90.0, degrees));
            yCoordinateOfThePlayer += (3.4 * floatsin(angleCoordinateOfThePlayer + 90.0, degrees));

            return playerVehicleCreationInfo[playerid][pVVehicles][i] = CreateVehicle(vehicleCreationModelId, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer, angleCoordinateOfThePlayer, primaryColorOfVehicleCreation, secondaryColorOfVehicleCreation, -1);
        }
    }
    return INVALID_VEHICLE_ID;
}