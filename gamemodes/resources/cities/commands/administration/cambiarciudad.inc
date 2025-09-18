#include <YSI_Coding\y_hooks>

YCMD:cambiarciudad(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 5)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 5  para poder usar este comando.");

    if (citiesInformation[changingCity])
        return SendClientMessage(playerid, -1, ""COLOR_RED"Ya hay un cambio de ciudad en proceso; por favor, espere.");

    RestoreCitySelectionInformation(playerid);
    CreateTDCitySelection(playerid);

    if (!inCitySelection[playerid])
        inCitySelection[playerid] = true;
    return 1;
}