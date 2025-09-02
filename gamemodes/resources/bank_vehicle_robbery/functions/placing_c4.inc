forward PlacingC4(const playerid);
public PlacingC4(const playerid) {
    new Float:xCoordinatesOfBankVehicle, Float:yCoordinatesOfBankVehicle, Float:zCoordinatesOfBankVehicle, Float:angleCoordinatesOfBankVehicle;
    GetVehiclePos(bankVehicleRobberyInformation[vehicle], xCoordinatesOfBankVehicle, yCoordinatesOfBankVehicle, zCoordinatesOfBankVehicle);
    GetVehicleZAngle(bankVehicleRobberyInformation[vehicle], angleCoordinatesOfBankVehicle);

    xCoordinatesOfBankVehicle -= (3.4 * floatsin(-angleCoordinatesOfBankVehicle, degrees));
    yCoordinatesOfBankVehicle -= (3.4 * floatcos(-angleCoordinatesOfBankVehicle, degrees));

    if (!IsPlayerInRangeOfPoint(playerid, 0.8, xCoordinatesOfBankVehicle, yCoordinatesOfBankVehicle, zCoordinatesOfBankVehicle)) {
        RestoreBankVehicleRobberyInfo(true);
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Se Ha Cancelado La Colocación Del C4. Abandonaste La Puerta Trasera");
    }

    if (bankVehicleRobberyInformation[c4Placed] != true)
        return GameTextForPlayer(playerid, "~w~Colocando_~r~C4~w~~n~no_salgas_de_la_~r~puerta_trasera~w~~n~espera_porfavor.", 2100, 3);

    inline ITimer_CreateCallback() {
        if (bankVehicleRobberyInformation[pickup] == INVALID_PICKUP)
            bankVehicleRobberyInformation[pickup] = CreateDynamicPickup(1550, 1, xCoordinatesOfBankVehicle, yCoordinatesOfBankVehicle, zCoordinatesOfBankVehicle, -1, -1, -1);

        CreateExplosion(xCoordinatesOfBankVehicle, yCoordinatesOfBankVehicle, zCoordinatesOfBankVehicle, 10, 20);
        
        va_SendClientMessageToAll(-1, ""COLOR_DARK_GREEN"* %s (%d) Ha Explotado La Puerta Del Vehiculo De Seguridad Que Estaba En %s!", accountInformation[playerid][name], playerid, cityNames[citiesInformation[selectedCity]]);
        va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE2"Has Explotado La Puerta Trasera De El Vehiculo De Seguridad. Recoge La Bolsa Con El Dinero.");
    }

    Timer_CreateCallback(using inline ITimer_CreateCallback, 15000, 1);

    RestoreBankVehicleRobberyInfo(true);

    GameTextForPlayer(playerid, "~w~Colocaste_el_~r~C4~w~_en_la_puerta_trasera~n~del_~b~~h~carro_de_seguridad~w~~n~alejate_rapido!", 4500, 3);
    va_SendClientMessage(playerid, -1, ""COLOR_DARK_BLUE"Has Colocado El C4 En EL Vehiculo De Seguridad. Alejate De La Explosion!!");
    return 1;
}