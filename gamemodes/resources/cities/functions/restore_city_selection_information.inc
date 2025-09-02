forward RestoreCitySelectionInformation(const playerid);
public RestoreCitySelectionInformation(const playerid) {
    for (new i = 0; i < 17; i++) {
        if (citySelectionTextDrawings[playerid][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, citySelectionTextDrawings[playerid][i]);
            citySelectionTextDrawings[playerid][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }

    if (inCitySelection[playerid])
        inCitySelection[playerid] = false;
    return 1;
}