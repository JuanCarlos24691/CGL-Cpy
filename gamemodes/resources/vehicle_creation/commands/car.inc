YCMD:car(playerid, params[], help) {
    if (GetPlayerState(playerid) != PLAYER_STATE_ONFOOT)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes estar de pie para poder crear un vehículo.");

    new vehicleCreationModelId[128], primaryColorOfVehicleCreation = -1, secondaryColorOfVehicleCreation = -1;

    if (sscanf(params, "z[128]I(-1)I(-1)", vehicleCreationModelId, primaryColorOfVehicleCreation, secondaryColorOfVehicleCreation))
        return SendClientMessage(playerid, -1, ""COLOR_RED"Usa: /car [ID O Nombre Del Vehiculo].");

    new vehicleCreationModelIdNumeric = strval(vehicleCreationModelId);

    for (new i = 0; i < MAX_VEHICLE_MODELS; i++) {
        if (isequal(vehicleCreationInformation[i][vCVehicleName], vehicleCreationModelId, true) || vehicleCreationModelIdNumeric != 0 && vehicleCreationInformation[i][vCModelId] == vehicleCreationModelIdNumeric) {
            if (accountInformation[playerid][cashInHand] < vehicleCreationInformation[i][vCVehiclePrice])
                return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos $%d para comprar este vehículo.", vehicleCreationInformation[i][vCVehiclePrice]);

            RestoreVehicleCreationInfo(playerid);

            new resultOfCreatingVehicle = CreateVehicleForThePlayer(playerid, vehicleCreationInformation[i][vCModelId], primaryColorOfVehicleCreation, secondaryColorOfVehicleCreation);

            if (resultOfCreatingVehicle == INVALID_VEHICLE_ID)
                return va_SendClientMessage(playerid, -1, ""COLOR_RED"Ha ocurrido un error al intentar crear el vehículo; por favor, vuelve a intentarlo.");

            accountInformation[playerid][cashInHand] -= vehicleCreationInformation[i][vCVehiclePrice];
            va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE2"Compraste un ''%s'' (%d) a $%d, Disfrutalo!!", vehicleCreationInformation[i][vCVehicleName], vehicleCreationInformation[i][vCModelId], vehicleCreationInformation[i][vCVehiclePrice]);
            return 1;
        }
    }

    va_SendClientMessage(playerid, -1, ""COLOR_RED"Modelo De Vehiculo Incorrecto.");
    return 1;
}