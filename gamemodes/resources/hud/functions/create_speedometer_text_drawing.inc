forward CreateSpeedometerTextDrawing(const playerid, const _speed[]);
public CreateSpeedometerTextDrawing(const playerid, const _speed[]) {
    if (speedometerInformation[playerid][textDrawing] == PlayerText:INVALID_TEXT_DRAW) {
        speedometerInformation[playerid][textDrawing] = CreatePlayerTextDraw(playerid, 611.000, 418.000, _speed);
        PlayerTextDrawLetterSize(playerid, speedometerInformation[playerid][textDrawing], 0.209, 0.898);
        PlayerTextDrawAlignment(playerid, speedometerInformation[playerid][textDrawing], TEXT_DRAW_ALIGN_RIGHT);
        PlayerTextDrawColour(playerid, speedometerInformation[playerid][textDrawing], -1);
        PlayerTextDrawSetShadow(playerid, speedometerInformation[playerid][textDrawing], 0);
        PlayerTextDrawSetOutline(playerid, speedometerInformation[playerid][textDrawing], 1);
        PlayerTextDrawBackgroundColour(playerid, speedometerInformation[playerid][textDrawing], 255);
        PlayerTextDrawFont(playerid, speedometerInformation[playerid][textDrawing], TEXT_DRAW_FONT_2);
        PlayerTextDrawSetProportional(playerid, speedometerInformation[playerid][textDrawing], true);

        PlayerTextDrawShow(playerid, speedometerInformation[playerid][textDrawing]);
    } else {
        PlayerTextDrawSetString(playerid, speedometerInformation[playerid][textDrawing], _speed);
    }
    return 1;
}