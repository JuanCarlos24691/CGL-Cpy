forward CreateTTextDrawings(const playerid, const time[]);
public CreateTTextDrawings(const playerid, const time[]) {
    RestoreGlobalTextDrawings(playerid);

    new string[128];
    format(string, sizeof(string), "Mission_Time:_~g~%s", time);

    if (assaultPlayerInformation[playerid][tTextDrawing] == PlayerText:INVALID_TEXT_DRAW) {
        assaultPlayerInformation[playerid][tTextDrawing] = CreatePlayerTextDraw(playerid, 549.000, 428.000, "Mission_Time:_~g~03:00");
        PlayerTextDrawLetterSize(playerid, assaultPlayerInformation[playerid][tTextDrawing], 0.180, 1.199);
        PlayerTextDrawAlignment(playerid, assaultPlayerInformation[playerid][tTextDrawing], TEXT_DRAW_ALIGN_LEFT);
        PlayerTextDrawColour(playerid, assaultPlayerInformation[playerid][tTextDrawing], -1);
        PlayerTextDrawSetShadow(playerid, assaultPlayerInformation[playerid][tTextDrawing], 0);
        PlayerTextDrawSetOutline(playerid, assaultPlayerInformation[playerid][tTextDrawing], 1);
        PlayerTextDrawBackgroundColour(playerid, assaultPlayerInformation[playerid][tTextDrawing], 150);
        PlayerTextDrawFont(playerid, assaultPlayerInformation[playerid][tTextDrawing], TEXT_DRAW_FONT_1);
        PlayerTextDrawSetProportional(playerid, assaultPlayerInformation[playerid][tTextDrawing], true);

        PlayerTextDrawShow(playerid, assaultPlayerInformation[playerid][tTextDrawing]);
    } else {
        PlayerTextDrawSetString(playerid, assaultPlayerInformation[playerid][tTextDrawing], string);
    }
    return 1;
}