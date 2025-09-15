#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    SetTimerEx("UpdateBankVehicleRobbery", 1000, true);
    return 1;
}

hook OnPlayerPickUpDynPickup(playerid, pickupid) {
    if (pickupid == bankVehicleRobberyInformation[bVPickup] && bankVehicleRobberyInformation[bVPickup] != INVALID_PICKUP) {
        RestoreBankVehicleRobberyInfo(false);

        accountInformation[playerid][cashInHand] += 348000;
        va_SendClientMessageToAll(-1, ""COLOR_DARK_BLUE"* %s (%d) Ha Recogido $348000 Que Contenia El Vehiculo De Seguridad Que Se Encontraba En %s.", accountInformation[playerid][name], playerid, cityNames[citiesInformation[selectedCity]]);
        ApplyAnimation(playerid, "CARRY", "liftup", 3.0, false, false, false, false, SYNC_NONE);
    }
    return 1;
}