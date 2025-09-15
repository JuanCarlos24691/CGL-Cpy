YCMD:ponerc4(playerid, params[], help) {
    if (bankVehicleRobberyInformation[bVC4Timer] != INVALID_TIMER && bankVehicleRobberyInformation[bVC4PlacedTimer] != INVALID_TIMER)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Ya Hay Alguien Mas Colocando Un C4 Al Vehiculo De Seguridad");

    new Float:xCoordinatesOfBankVehicle, Float:yCoordinatesOfBankVehicle, Float:zCoordinatesOfBankVehicle, Float:angleCoordinatesOfBankVehicle;
    GetVehiclePos(bankVehicleRobberyInformation[bVVehicle], xCoordinatesOfBankVehicle, yCoordinatesOfBankVehicle, zCoordinatesOfBankVehicle);
    GetVehicleZAngle(bankVehicleRobberyInformation[bVVehicle], angleCoordinatesOfBankVehicle);

    xCoordinatesOfBankVehicle -= (3.2 * floatsin(-angleCoordinatesOfBankVehicle, degrees));
    yCoordinatesOfBankVehicle -= (3.2 * floatcos(-angleCoordinatesOfBankVehicle, degrees));

    if (!IsPlayerInRangeOfPoint(playerid, 0.5, xCoordinatesOfBankVehicle, yCoordinatesOfBankVehicle, zCoordinatesOfBankVehicle))
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"No Te Encuentras Cerca Del Vehiculo De Seguridad.");

    va_SendClientMessageToAll(-1, ""COLOR_DARK_GREEN"* %s (%d) Esta Colocando Un C4 Al Vehiculo De Seguridad En %s!", accountInformation[playerid][name], playerid, cityNames[citiesInformation[selectedCity]]);
    va_SendClientMessage(playerid, -1, ""COLOR_DARK_BLUE"Estas Colocando El C4 En El Vehiculo De Seguridad. Espere Por Favor...");
    ApplyAnimation(playerid, "BOMBER", "BOM_Plant", 4.0, false, false, false, false, SYNC_NONE);

    if (bankVehicleRobberyInformation[bVC4Timer] == INVALID_TIMER)
        bankVehicleRobberyInformation[bVC4Timer] = SetTimerEx("PlacingC4", 3000, true, "i", playerid);

    if (bankVehicleRobberyInformation[bVC4PlacedTimer] == INVALID_TIMER)
        bankVehicleRobberyInformation[bVC4PlacedTimer] = SetTimerEx("C4PlacementCompleted", 30000, false, "i", playerid);
    return 1;
}