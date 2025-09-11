forward CreateAssaultTextDrawing(const playerid);
public CreateAssaultTextDrawing(const playerid) {
    for (new i = 0; i < 4; i++) {
        switch (i) {
            case 0: {
                if (assaultPlayerInformation[playerid][assaultTextDrawing][i] == PlayerText:INVALID_TEXT_DRAW) {
                    assaultPlayerInformation[playerid][assaultTextDrawing][i] = CreatePlayerTextDraw(playerid, 21.000, 112.000, "LD_SPAC:black");
                    PlayerTextDrawTextSize(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], 233.000, 81.000);
                    PlayerTextDrawAlignment(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], -106);
                    PlayerTextDrawSetShadow(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], 0);
                    PlayerTextDrawSetOutline(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], 0);
                    PlayerTextDrawBackgroundColour(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], 255);
                    PlayerTextDrawFont(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], TEXT_DRAW_FONT_SPRITE_DRAW);
                    PlayerTextDrawSetProportional(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], true);

                    PlayerTextDrawShow(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i]);
                }
            }
            case 1: {
                if (assaultPlayerInformation[playerid][assaultTextDrawing][i] == PlayerText:INVALID_TEXT_DRAW) {
                    assaultPlayerInformation[playerid][assaultTextDrawing][i] = CreatePlayerTextDraw(playerid, 140.000, 124.000, "~b~ASALTO");
                    PlayerTextDrawLetterSize(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], 0.429, 1.199);
                    PlayerTextDrawAlignment(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], -1);
                    PlayerTextDrawSetShadow(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], 1);
                    PlayerTextDrawSetOutline(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], 150);
                    PlayerTextDrawFont(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], TEXT_DRAW_FONT_3);
                    PlayerTextDrawSetProportional(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], true);

                    PlayerTextDrawShow(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i]);
                }
            }
            case 2: {
                if (assaultPlayerInformation[playerid][assaultTextDrawing][i] == PlayerText:INVALID_TEXT_DRAW) {
                    assaultPlayerInformation[playerid][assaultTextDrawing][i] = CreatePlayerTextDraw(playerid, 139.000, 144.000, "~P~Robo");
                    PlayerTextDrawLetterSize(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], 0.240, 1.099);
                    PlayerTextDrawAlignment(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], -1);
                    PlayerTextDrawSetShadow(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], 1);
                    PlayerTextDrawSetOutline(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], 150);
                    PlayerTextDrawFont(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], true);

                    PlayerTextDrawShow(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i]);
                }
            }
            case 3: {
                if (assaultPlayerInformation[playerid][assaultTextDrawing][i] == PlayerText:INVALID_TEXT_DRAW) {
                    assaultPlayerInformation[playerid][assaultTextDrawing][i] = CreatePlayerTextDraw(playerid, 141.000, 163.000, "Escribe_~r~/robar_~w~para_robar_el_lugar.");
                    PlayerTextDrawLetterSize(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], 0.230, 1.099);
                    PlayerTextDrawAlignment(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], -1);
                    PlayerTextDrawSetShadow(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], 1);
                    PlayerTextDrawSetOutline(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], 150);
                    PlayerTextDrawFont(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i], true);

                    PlayerTextDrawShow(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i]);
                }
            }
        }
    }
    return 1;
}