forward CreateCityChangeTextDrawing(const playerid, const city[]);
public CreateCityChangeTextDrawing(const playerid, const city[]) {
    if (citiesInformation[cityChangeTextDrawing][playerid] == PlayerText:INVALID_TEXT_DRAW) {
        citiesInformation[cityChangeTextDrawing][playerid] = CreatePlayerTextDraw(playerid, 315.000, 197.000, city);
        PlayerTextDrawLetterSize(playerid, citiesInformation[cityChangeTextDrawing][playerid], 0.499, 2.000);
        PlayerTextDrawAlignment(playerid, citiesInformation[cityChangeTextDrawing][playerid], TEXT_DRAW_ALIGN_CENTER);
        PlayerTextDrawColour(playerid, citiesInformation[cityChangeTextDrawing][playerid], -1);
        PlayerTextDrawSetShadow(playerid, citiesInformation[cityChangeTextDrawing][playerid], 0);
        PlayerTextDrawSetOutline(playerid, citiesInformation[cityChangeTextDrawing][playerid], 1);
        PlayerTextDrawBackgroundColour(playerid, citiesInformation[cityChangeTextDrawing][playerid], 150);
        PlayerTextDrawFont(playerid, citiesInformation[cityChangeTextDrawing][playerid], TEXT_DRAW_FONT_3);
        PlayerTextDrawSetProportional(playerid, citiesInformation[cityChangeTextDrawing][playerid], true);

        PlayerTextDrawShow(playerid, citiesInformation[cityChangeTextDrawing][playerid]);
    } else {
        PlayerTextDrawSetString(playerid, citiesInformation[cityChangeTextDrawing][playerid], city);
    }
    return 1;
}