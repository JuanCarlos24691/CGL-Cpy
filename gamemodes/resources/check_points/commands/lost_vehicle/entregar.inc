YCMD:entregar(playerid, params[], help) {
    for (new i = 0; i < numberOfCheckPointsCreated; i++) {
        if (IsPlayerInRangeOfPoint(playerid, 1.4, checkPointsInformation[i][interactionZoneXCoordinate], checkPointsInformation[i][interactionZoneYCoordinate], checkPointsInformation[i][interactionZoneZCoordinate]) && checkPointsInformation[i][type] == 5) {
            if (GetPlayerVehicleSeat(playerid) != 0)
                return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes Estar Como Conductor Del Vehiculo Perdido Para Poder Entregarlo.");

            new recoveredVehicle = GetPlayerVehicleID(playerid);

            for (new e = 0; e < MAX_GLOBAL_VEHICLES; e++) {
                if (globalVehiclesInformation[e][gVVehicle] == recoveredVehicle && lostVehicleInformation[lVModelId] == GetVehicleModel(recoveredVehicle) && lostVehicleInformation[lVlost][e] == true) {
                    new Float:vehicleLife;
                    GetVehicleHealth(recoveredVehicle, vehicleLife);

                    if (vehicleLife >= 850.0 && vehicleLife <= 1000.0) {
                        accountInformation[playerid][cashInHand] += 450000;
                        accountInformation[playerid][level] += 2;

                        va_SendClientMessageToAll(-1, ""COLOR_DARK_GREEN2"%s (%d) "COLOR_AQUAMARINE3"Entrego El Vehiculo Perdido De "COLOR_DARK_GREEN2"Karl Benz, "COLOR_AQUAMARINE3"Recompensa: "COLOR_DARK_GREEN2"$450.000", accountInformation[playerid][name], playerid);
                    } else if (vehicleLife >= 700.0 && vehicleLife <= 849.0) {
                        accountInformation[playerid][cashInHand] += 400000;
                        accountInformation[playerid][level] += 2;

                        va_SendClientMessageToAll(-1, ""COLOR_DARK_GREEN2"%s (%d) "COLOR_AQUAMARINE3"Entrego El Vehiculo Perdido De "COLOR_DARK_GREEN2"Karl Benz, "COLOR_AQUAMARINE3"Recompensa: "COLOR_DARK_GREEN2"$400.000", accountInformation[playerid][name], playerid);
                    } else if (vehicleLife >= 500.0 && vehicleLife <= 699.0) {
                        accountInformation[playerid][cashInHand] += 300000;
                        accountInformation[playerid][level] += 2;

                        va_SendClientMessageToAll(-1, ""COLOR_DARK_GREEN2"%s (%d) "COLOR_AQUAMARINE3"Entrego El Vehiculo Perdido De "COLOR_DARK_GREEN2"Karl Benz, "COLOR_AQUAMARINE3"Recompensa: "COLOR_DARK_GREEN2"$300.000", accountInformation[playerid][name], playerid);
                    } else if (vehicleLife >= 301.0 && vehicleLife <= 499.0) {
                        accountInformation[playerid][cashInHand] += 250000;
                        accountInformation[playerid][level] += 2;

                        va_SendClientMessageToAll(-1, ""COLOR_DARK_GREEN2"%s (%d) "COLOR_AQUAMARINE3"Entrego El Vehiculo Perdido De "COLOR_DARK_GREEN2"Karl Benz, "COLOR_AQUAMARINE3"Recompensa: "COLOR_DARK_GREEN2"$250.000", accountInformation[playerid][name], playerid);
                    } else if (vehicleLife >= 0.0 && vehicleLife <= 300.0) {
                        accountInformation[playerid][cashInHand] += 250000;
                        accountInformation[playerid][level] += 2;

                        va_SendClientMessageToAll(-1, ""COLOR_DARK_GREEN2"%s (%d) "COLOR_AQUAMARINE3"Entrego El Vehiculo Perdido De "COLOR_DARK_GREEN2"Karl Benz, "COLOR_AQUAMARINE3"Recompensa: "COLOR_DARK_GREEN2"$250.000", accountInformation[playerid][name], playerid);
                    }

                    RestoreLVInformation();
                    SetVehicleToRespawn(recoveredVehicle);
                }
            }

            va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes Tener El Vehiculo Perdido Para Poder Entregarlo.");
            return 1;
        }
    }

    va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes Estar Serca De Un Punto De Entrega Para Poder El Vehiculo.");
    return 1;
}