#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    for (new i = 0; i < MAX_PLAYERS; i++)
        RestoreLVPlayerInformation(i);

    SetTimerEx("UpdateLV", 1000, true);
    return 1;
}

hook OnPlayerEnterDynamicCP(playerid, checkpoint) {
    for (new i = 0; i < numberOfCheckPointsCreated; i++) {
        if (checkpoint == checkPointsInformation[i][interactionZoneCheckPoint] && checkPointsInformation[i][type] == 5) {
            for (new e = 0; e < MAX_GLOBAL_VEHICLES; e++) {
                new recoveredVehicle = GetPlayerVehicleID(playerid);

                if (recoveredVehicle ==  globalVehiclesInformation[e][gVVehicle] && lostVehicleInformation[lVModelId] == GetVehicleModel(recoveredVehicle) && lostVehicleInformation[lVlost][e] == true) {
                    GameTextForPlayer(playerid, "~w~Escribe~p~_/entregar~w~_para_cobrar_tu_dinero~n~_del_vehiculo_perdido", 4500, 3);
                    return -1;
                }
            }

            va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes Tener El Vehiculo Perdido Para Poder Entregarlo.");
            return -1;
        }
    }
    return 1;
}

hook OnPlayerKeyStateChange(playerid, KEY:newkeys, KEY:oldkeys) {
    if (newkeys & KEY_FIRE)
        RestoreLVPlayerTextDrawings(playerid);
    return 1;
}

hook OnPlayerEnterVehicle(playerid, vehicleid, ispassenger) {
    if (ispassenger == 1)
        return 1;

    if (lostVehicleInformation[lVModelId] != GetVehicleModel(vehicleid))
        return 1;

    for (new i = 0; i < MAX_GLOBAL_VEHICLES; i++) {
        if (globalVehiclesInformation[i][gVVehicle] == vehicleid && lostVehicleInformation[lVlost][i] == true) {
            GameTextForPlayer(playerid, "~w~Encontraste_el_~r~vehiculo_perdido~w~de~p~_Karl Benz", 4500, 3);
            va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE_GREEN"Encontraste El Vehiculo Perdido De Karl Benz, Busca El Icono De Un Vehiculo Azul En Tu Radar Y Entregalo Ahi.");
        }
    }
    return 1;
}