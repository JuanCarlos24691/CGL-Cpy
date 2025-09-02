YCMD:car(playerid, params[], help) {
    if (GetPlayerState(playerid) != PLAYER_STATE_ONFOOT)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes estar de pie para poder crear un vehículo.");

    new vehicleNameVehicleCreation[128], primaryColorOfVehicleCreation = -1, secondaryColorOfVehicleCreation = -1;

    if (sscanf(params, "z[128]I(-1)I(-1)", vehicleNameVehicleCreation, primaryColorOfVehicleCreation, secondaryColorOfVehicleCreation))
        return SendClientMessage(playerid, -1, ""COLOR_RED"Usa: /car [ID O Nombre Del Vehiculo].");

    for (new i = 0; i < MAX_VEHICLE_MODELS; i++) {
        if (isequal(vehicleCreationInformation[i][vehicleName], vehicleNameVehicleCreation, true) || isequal(vehicleCreationInformation[i][idOfVehicle], vehicleNameVehicleCreation, true)) {
            if (accountInformation[playerid][cashInHand] < vehicleCreationInformation[i][vehiclePrice])
                return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos $%d para comprar este vehículo.", vehicleCreationInformation[i][vehiclePrice]);

            RestoreVehicleCreationInfo(playerid);

            new resultOfCreatingVehicle = CreateVehicleForThePlayer(playerid, vehicleCreationInformation[i][idOfVehicle], primaryColorOfVehicleCreation, secondaryColorOfVehicleCreation);

            if (resultOfCreatingVehicle == INVALID_VEHICLE_ID)
                return va_SendClientMessage(playerid, -1, ""COLOR_RED"Ha ocurrido un error al intentar crear el vehículo; por favor, vuelve a intentarlo.");

            accountInformation[playerid][cashInHand] -= vehicleCreationInformation[i][vehiclePrice];
            va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE2"Compraste un ''%s'' (%d) a $%d, Disfrutalo!!", vehicleCreationInformation[i][vehicleName], vehicleCreationInformation[i][idOfVehicle], vehicleCreationInformation[i][vehiclePrice]);
            return 1;
        }
    }

    va_SendClientMessage(playerid, -1, ""COLOR_RED"Modelo De Vehiculo Incorrecto.");
    return 1;
}