forward CreateVehicleForThePlayer(const playerid, const modelId, const _primaryColor, const _secondaryColor);
public CreateVehicleForThePlayer(const playerid, const modelId, const _primaryColor, const _secondaryColor) {
    for (new i = 0; i < MAX_PLAYER_VEHICLES; i++) {
        if (playerVehicleCreationInfo[playerid][vehicles][i] == INVALID_VEHICLE_ID) {
            new Float:xCoordinateOfThePlayer, Float:yCoordinateOfThePlayer, Float:zCoordinateOfThePlayer, Float:angleCoordinateOfThePlayer;
            GetPlayerPos(playerid, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer);
            GetPlayerFacingAngle(playerid, angleCoordinateOfThePlayer);

            xCoordinateOfThePlayer += (3.4 * floatcos(angleCoordinateOfThePlayer + 90.0, degrees));
            yCoordinateOfThePlayer += (3.4 * floatsin(angleCoordinateOfThePlayer + 90.0, degrees));

            return playerVehicleCreationInfo[playerid][vehicles][i] = CreateVehicle(modelId, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer, angleCoordinateOfThePlayer, _primaryColor, _secondaryColor, -1);
        }
    }
    return INVALID_VEHICLE_ID;
}