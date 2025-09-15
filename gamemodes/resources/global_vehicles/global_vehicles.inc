#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    for (new i = 0; i < MAX_GLOBAL_VEHICLES; i++) {
        globalVehiclesInformation[i][gVVehicle] = CreateVehicle(globalVehiclesModelsIds[i], globalVehiclesCordinates[i][0], globalVehiclesCordinates[i][1], globalVehiclesCordinates[i][2], globalVehiclesCordinates[i][3], random(255), random(255), RESPAWN_DELAY);
        globalVehiclesInformation[i][gVModelId] = globalVehiclesModelsIds[i];
        globalVehiclesInformation[i][gVXCoordinate] = globalVehiclesCordinates[i][0];
        globalVehiclesInformation[i][gVYCoordinate] = globalVehiclesCordinates[i][1];
        globalVehiclesInformation[i][gVZCoordinate] = globalVehiclesCordinates[i][2];
        globalVehiclesInformation[i][gVAngle] = globalVehiclesCordinates[i][3];
    }
    return 1;
}