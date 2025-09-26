#include <YSI_Coding\y_hooks>

YCMD:cambiarciudad(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 5)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Tu nievel administrativo no es suficiente para ejecutar este comando.");

    if (citiesInformation[changingCity])
        return SendClientMessage(playerid, -1, ""COLOR_RED"Ya hay un cambio de ciudad en proceso; por favor, espere.");

    RestoreCitySelectionInformation(playerid);
    CreateTDCitySelection(playerid);

    if (!inCitySelection[playerid])
        inCitySelection[playerid] = true;
    return 1;
}