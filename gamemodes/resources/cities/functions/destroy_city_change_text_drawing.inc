forward DestroyCityChangeTextDrawing(const playerid);
public DestroyCityChangeTextDrawing(const playerid) {
    if (citiesInformation[cityChangeTextDrawing][playerid] != PlayerText:INVALID_TEXT_DRAW) {
        PlayerTextDrawDestroy(playerid, citiesInformation[cityChangeTextDrawing][playerid]);
        citiesInformation[cityChangeTextDrawing][playerid] = PlayerText:INVALID_TEXT_DRAW;
    }
    return 1;
}