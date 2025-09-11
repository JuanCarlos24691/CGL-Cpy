forward CreateATextDrawings(const playerid);
public CreateATextDrawings(const playerid) {
    for (new i = 0; i < 4; i++) {
        switch (i) {
            case 0: {
                if (assaultPlayerInformation[playerid][aTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    assaultPlayerInformation[playerid][aTextDrawings][i] = CreatePlayerTextDraw(playerid, 21.000, 112.000, "LD_SPAC:black");
                    PlayerTextDrawTextSize(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], 233.000, 81.000);
                    PlayerTextDrawAlignment(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], -106);
                    PlayerTextDrawSetShadow(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], 0);
                    PlayerTextDrawBackgroundColour(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], TEXT_DRAW_FONT_SPRITE_DRAW);
                    PlayerTextDrawSetProportional(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, assaultPlayerInformation[playerid][aTextDrawings][i]);
                }
            }
            case 1: {
                if (assaultPlayerInformation[playerid][aTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    assaultPlayerInformation[playerid][aTextDrawings][i] = CreatePlayerTextDraw(playerid, 140.000, 124.000, "~b~ASALTO");
                    PlayerTextDrawLetterSize(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], 0.429, 1.199);
                    PlayerTextDrawAlignment(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], 1);
                    PlayerTextDrawSetOutline(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], 150);
                    PlayerTextDrawFont(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], TEXT_DRAW_FONT_3);
                    PlayerTextDrawSetProportional(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, assaultPlayerInformation[playerid][aTextDrawings][i]);
                }
            }
            case 2: {
                if (assaultPlayerInformation[playerid][aTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    assaultPlayerInformation[playerid][aTextDrawings][i] = CreatePlayerTextDraw(playerid, 139.000, 144.000, "~P~Robo");
                    PlayerTextDrawLetterSize(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], 0.240, 1.099);
                    PlayerTextDrawAlignment(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], 1);
                    PlayerTextDrawSetOutline(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], 150);
                    PlayerTextDrawFont(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, assaultPlayerInformation[playerid][aTextDrawings][i]);
                }
            }
            case 3: {
                if (assaultPlayerInformation[playerid][aTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    assaultPlayerInformation[playerid][aTextDrawings][i] = CreatePlayerTextDraw(playerid, 141.000, 163.000, "Escribe_~r~/robar_~w~para_robar_el_lugar.");
                    PlayerTextDrawLetterSize(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], 0.230, 1.099);
                    PlayerTextDrawAlignment(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], 1);
                    PlayerTextDrawSetOutline(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], 150);
                    PlayerTextDrawFont(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, assaultPlayerInformation[playerid][aTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, assaultPlayerInformation[playerid][aTextDrawings][i]);
                }
            }
        }
    }
    return 1;
}