#include <YSI_Coding\y_hooks>

hook OnPlayerDisconnect(playerid, text[]) {
    RestoreCitySelectionInformation(playerid);
    return 1;
}

hook OnPlayerKeyStateChange(playerid, KEY:newkeys, KEY:oldkeys) {
    if (newkeys & KEY_FIRE && inCitySelection[playerid])
        RestoreCitySelectionInformation(playerid);
    return 1;
}

hook OnPlayerText(playerid, text[]) {
    if (inCitySelection[playerid]) {
        new chosenCity = strval(text);

        if (chosenCity == 1 || chosenCity == 2 || chosenCity == 3 || chosenCity == 4 || chosenCity == 5 || chosenCity == 6 || chosenCity == 7 || chosenCity == 8 || chosenCity == 9 || chosenCity == 10 || chosenCity == 11 || chosenCity == 12 || chosenCity == 13) {
            if (!citiesInformation[changingCity])
                citiesInformation[changingCity] = true;

            chosenCity--;

            AnnounceChangeOfCity(true);
            SetTimerEx("UpdateCity", 59000, false, "ii", chosenCity, true);

            dayInformation[day] = 6;

            timeInformation[hour] = 23;
            timeInformation[minute] = 0;

            va_SendClientMessageToAll(-1, ""COLOR_ROSA"**MAPA: Un Admin Forzó Para Que %s Sea El Próximo Mapa (ADMIN MAPA)", cityNames[chosenCity]);
            RestoreCitySelectionInformation(playerid);
            return ~0;
        }
    }
    return 1;
}

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