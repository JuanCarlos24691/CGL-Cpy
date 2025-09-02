forward CreateZoneTextDrawing(playerid, const zone[]);
public CreateZoneTextDrawing(playerid, const zone[]) {
    if (zoneInformation[playerid][zoneTextDrawing] == PlayerText:INVALID_TEXT_DRAW) {
        zoneInformation[playerid][zoneTextDrawing] = CreatePlayerTextDraw(playerid, 13.000, 431.000, zone);
        PlayerTextDrawLetterSize(playerid, zoneInformation[playerid][zoneTextDrawing], 0.209, 0.999);
        PlayerTextDrawAlignment(playerid, zoneInformation[playerid][zoneTextDrawing], TEXT_DRAW_ALIGN_LEFT);
        PlayerTextDrawColour(playerid, zoneInformation[playerid][zoneTextDrawing], -1);
        PlayerTextDrawSetShadow(playerid, zoneInformation[playerid][zoneTextDrawing], 0);
        PlayerTextDrawSetOutline(playerid, zoneInformation[playerid][zoneTextDrawing], 1);
        PlayerTextDrawBackgroundColour(playerid, zoneInformation[playerid][zoneTextDrawing], 255);
        PlayerTextDrawFont(playerid, zoneInformation[playerid][zoneTextDrawing], TEXT_DRAW_FONT_2);
        PlayerTextDrawSetProportional(playerid, zoneInformation[playerid][zoneTextDrawing], true);

        PlayerTextDrawShow(playerid, zoneInformation[playerid][zoneTextDrawing]);
    } else {
        PlayerTextDrawSetString(playerid, zoneInformation[playerid][zoneTextDrawing], zone);
    }
    return 1;
}