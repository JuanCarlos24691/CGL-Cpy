forward CreateTDCitySelection(const playerid);
public CreateTDCitySelection(const playerid) {
    for (new i = 0; i < 17; i++) {
        switch (i) {
            case 0: {
                if (citySelectionTextDrawings[playerid][i] == PlayerText:INVALID_TEXT_DRAW) {
                    citySelectionTextDrawings[playerid][i] = CreatePlayerTextDraw(playerid, 6.000, 105.000, "LD_SPAC:black");
                    PlayerTextDrawTextSize(playerid, citySelectionTextDrawings[playerid][i], 250.000, 222.000);
                    PlayerTextDrawAlignment(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, citySelectionTextDrawings[playerid][i], -81);
                    PlayerTextDrawSetShadow(playerid, citySelectionTextDrawings[playerid][i], 0);
                    PlayerTextDrawSetOutline(playerid, citySelectionTextDrawings[playerid][i], 0);
                    PlayerTextDrawBackgroundColour(playerid, citySelectionTextDrawings[playerid][i], 255);
                    PlayerTextDrawFont(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_FONT_SPRITE_DRAW);
                    PlayerTextDrawSetProportional(playerid, citySelectionTextDrawings[playerid][i], true);

                    PlayerTextDrawShow(playerid,  citySelectionTextDrawings[playerid][i]);
                }
            }
            case 1: {
                if (citySelectionTextDrawings[playerid][i] == PlayerText:INVALID_TEXT_DRAW) {
                    citySelectionTextDrawings[playerid][i] = CreatePlayerTextDraw(playerid, 130.000, 111.000, "Cambiar_ciudad");
                    PlayerTextDrawLetterSize(playerid, citySelectionTextDrawings[playerid][i], 0.349, 1.199);
                    PlayerTextDrawAlignment(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, citySelectionTextDrawings[playerid][i], 792294655);
                    PlayerTextDrawSetShadow(playerid, citySelectionTextDrawings[playerid][i], 0);
                    PlayerTextDrawSetOutline(playerid, citySelectionTextDrawings[playerid][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, citySelectionTextDrawings[playerid][i], 33752063);
                    PlayerTextDrawFont(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_FONT_3);
                    PlayerTextDrawSetProportional(playerid, citySelectionTextDrawings[playerid][i], true);

                    PlayerTextDrawShow(playerid,  citySelectionTextDrawings[playerid][i]);
                }
            }
            case 2: {
                if (citySelectionTextDrawings[playerid][i] == PlayerText:INVALID_TEXT_DRAW) {
                    citySelectionTextDrawings[playerid][i] = CreatePlayerTextDraw(playerid, 11.000, 139.000, "~y~1~w~_-_Bayside");
                    PlayerTextDrawLetterSize(playerid, citySelectionTextDrawings[playerid][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, citySelectionTextDrawings[playerid][i], -1);
                    PlayerTextDrawSetShadow(playerid, citySelectionTextDrawings[playerid][i], 0);
                    PlayerTextDrawSetOutline(playerid, citySelectionTextDrawings[playerid][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, citySelectionTextDrawings[playerid][i], 255);
                    PlayerTextDrawFont(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, citySelectionTextDrawings[playerid][i], true);

                    PlayerTextDrawShow(playerid,  citySelectionTextDrawings[playerid][i]);
                }
            }
            case 3: {
                if (citySelectionTextDrawings[playerid][i] == PlayerText:INVALID_TEXT_DRAW) {
                    citySelectionTextDrawings[playerid][i] = CreatePlayerTextDraw(playerid, 11.000, 149.000, "~y~2~w~_-_El_Quebrados");
                    PlayerTextDrawLetterSize(playerid, citySelectionTextDrawings[playerid][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, citySelectionTextDrawings[playerid][i], -1);
                    PlayerTextDrawSetShadow(playerid, citySelectionTextDrawings[playerid][i], 0);
                    PlayerTextDrawSetOutline(playerid, citySelectionTextDrawings[playerid][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, citySelectionTextDrawings[playerid][i], 255);
                    PlayerTextDrawFont(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, citySelectionTextDrawings[playerid][i], true);

                    PlayerTextDrawShow(playerid,  citySelectionTextDrawings[playerid][i]);
                }
            }
            case 4: {
                if (citySelectionTextDrawings[playerid][i] == PlayerText:INVALID_TEXT_DRAW) {
                    citySelectionTextDrawings[playerid][i] = CreatePlayerTextDraw(playerid, 11.000, 159.000, "~y~3~w~_-_Las_Payasadas");
                    PlayerTextDrawLetterSize(playerid, citySelectionTextDrawings[playerid][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, citySelectionTextDrawings[playerid][i], -1);
                    PlayerTextDrawSetShadow(playerid, citySelectionTextDrawings[playerid][i], 0);
                    PlayerTextDrawSetOutline(playerid, citySelectionTextDrawings[playerid][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, citySelectionTextDrawings[playerid][i], 255);
                    PlayerTextDrawFont(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, citySelectionTextDrawings[playerid][i], true);

                    PlayerTextDrawShow(playerid,  citySelectionTextDrawings[playerid][i]);
                }
            }
            case 5: {
                if (citySelectionTextDrawings[playerid][i] == PlayerText:INVALID_TEXT_DRAW) {
                    citySelectionTextDrawings[playerid][i] = CreatePlayerTextDraw(playerid, 11.000, 169.000, "~y~4~w~_-_Las_Barrancas");
                    PlayerTextDrawLetterSize(playerid, citySelectionTextDrawings[playerid][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, citySelectionTextDrawings[playerid][i], -1);
                    PlayerTextDrawSetShadow(playerid, citySelectionTextDrawings[playerid][i], 0);
                    PlayerTextDrawSetOutline(playerid, citySelectionTextDrawings[playerid][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, citySelectionTextDrawings[playerid][i], 255);
                    PlayerTextDrawFont(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, citySelectionTextDrawings[playerid][i], true);

                    PlayerTextDrawShow(playerid,  citySelectionTextDrawings[playerid][i]);
                }
            }
            case 6: {
                if (citySelectionTextDrawings[playerid][i] == PlayerText:INVALID_TEXT_DRAW) {
                    citySelectionTextDrawings[playerid][i] = CreatePlayerTextDraw(playerid, 11.000, 180.000, "~y~5~w~_-_Fort_Carson");
                    PlayerTextDrawLetterSize(playerid, citySelectionTextDrawings[playerid][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, citySelectionTextDrawings[playerid][i], -1);
                    PlayerTextDrawSetShadow(playerid, citySelectionTextDrawings[playerid][i], 0);
                    PlayerTextDrawSetOutline(playerid, citySelectionTextDrawings[playerid][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, citySelectionTextDrawings[playerid][i], 255);
                    PlayerTextDrawFont(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, citySelectionTextDrawings[playerid][i], true);

                    PlayerTextDrawShow(playerid,  citySelectionTextDrawings[playerid][i]);
                }
            }
            case 7: {
                if (citySelectionTextDrawings[playerid][i] == PlayerText:INVALID_TEXT_DRAW) {
                    citySelectionTextDrawings[playerid][i] = CreatePlayerTextDraw(playerid, 11.000, 191.000, "~y~6~w~_-_Blueberry");
                    PlayerTextDrawLetterSize(playerid, citySelectionTextDrawings[playerid][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, citySelectionTextDrawings[playerid][i], -1);
                    PlayerTextDrawSetShadow(playerid, citySelectionTextDrawings[playerid][i], 0);
                    PlayerTextDrawSetOutline(playerid, citySelectionTextDrawings[playerid][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, citySelectionTextDrawings[playerid][i], 255);
                    PlayerTextDrawFont(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, citySelectionTextDrawings[playerid][i], true);

                    PlayerTextDrawShow(playerid,  citySelectionTextDrawings[playerid][i]);
                }
            }
            case 8: {
                if (citySelectionTextDrawings[playerid][i] == PlayerText:INVALID_TEXT_DRAW) {
                    citySelectionTextDrawings[playerid][i] = CreatePlayerTextDraw(playerid, 11.000, 202.000, "~y~7~w~_-_Montgomery");
                    PlayerTextDrawLetterSize(playerid, citySelectionTextDrawings[playerid][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, citySelectionTextDrawings[playerid][i], -1);
                    PlayerTextDrawSetShadow(playerid, citySelectionTextDrawings[playerid][i], 0);
                    PlayerTextDrawSetOutline(playerid, citySelectionTextDrawings[playerid][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, citySelectionTextDrawings[playerid][i], 255);
                    PlayerTextDrawFont(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, citySelectionTextDrawings[playerid][i], true);

                    PlayerTextDrawShow(playerid,  citySelectionTextDrawings[playerid][i]);
                }
            }
            case 9: {
                if (citySelectionTextDrawings[playerid][i] == PlayerText:INVALID_TEXT_DRAW) {
                    citySelectionTextDrawings[playerid][i] = CreatePlayerTextDraw(playerid, 11.000, 213.000, "~y~8~w~_-_Palomino");
                    PlayerTextDrawLetterSize(playerid, citySelectionTextDrawings[playerid][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, citySelectionTextDrawings[playerid][i], -1);
                    PlayerTextDrawSetShadow(playerid, citySelectionTextDrawings[playerid][i], 0);
                    PlayerTextDrawSetOutline(playerid, citySelectionTextDrawings[playerid][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, citySelectionTextDrawings[playerid][i], 255);
                    PlayerTextDrawFont(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, citySelectionTextDrawings[playerid][i], true);

                    PlayerTextDrawShow(playerid,  citySelectionTextDrawings[playerid][i]);
                }
            }
            case 10: {
                if (citySelectionTextDrawings[playerid][i] == PlayerText:INVALID_TEXT_DRAW) {
                    citySelectionTextDrawings[playerid][i] = CreatePlayerTextDraw(playerid, 11.000, 224.000, "~y~9~w~_-_Dillimore");
                    PlayerTextDrawLetterSize(playerid, citySelectionTextDrawings[playerid][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, citySelectionTextDrawings[playerid][i], -1);
                    PlayerTextDrawSetShadow(playerid, citySelectionTextDrawings[playerid][i], 0);
                    PlayerTextDrawSetOutline(playerid, citySelectionTextDrawings[playerid][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, citySelectionTextDrawings[playerid][i], 255);
                    PlayerTextDrawFont(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, citySelectionTextDrawings[playerid][i], true);

                    PlayerTextDrawShow(playerid,  citySelectionTextDrawings[playerid][i]);
                }
            }
            case 11: {
                if (citySelectionTextDrawings[playerid][i] == PlayerText:INVALID_TEXT_DRAW) {
                    citySelectionTextDrawings[playerid][i] = CreatePlayerTextDraw(playerid, 11.000, 236.000, "~y~10~w~_-_Angel_Pine");
                    PlayerTextDrawLetterSize(playerid, citySelectionTextDrawings[playerid][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, citySelectionTextDrawings[playerid][i], -1);
                    PlayerTextDrawSetShadow(playerid, citySelectionTextDrawings[playerid][i], 0);
                    PlayerTextDrawSetOutline(playerid, citySelectionTextDrawings[playerid][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, citySelectionTextDrawings[playerid][i], 255);
                    PlayerTextDrawFont(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, citySelectionTextDrawings[playerid][i], true);

                    PlayerTextDrawShow(playerid,  citySelectionTextDrawings[playerid][i]);
                }
            }
            case 12: {
                if (citySelectionTextDrawings[playerid][i] == PlayerText:INVALID_TEXT_DRAW) {
                    citySelectionTextDrawings[playerid][i] = CreatePlayerTextDraw(playerid, 11.000, 247.000, "~y~11~w~_-_San_Fierro");
                    PlayerTextDrawLetterSize(playerid, citySelectionTextDrawings[playerid][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, citySelectionTextDrawings[playerid][i], -1);
                    PlayerTextDrawSetShadow(playerid, citySelectionTextDrawings[playerid][i], 0);
                    PlayerTextDrawSetOutline(playerid, citySelectionTextDrawings[playerid][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, citySelectionTextDrawings[playerid][i], 255);
                    PlayerTextDrawFont(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, citySelectionTextDrawings[playerid][i], true);

                    PlayerTextDrawShow(playerid,  citySelectionTextDrawings[playerid][i]);
                }
            }
            case 13: {
                if (citySelectionTextDrawings[playerid][i] == PlayerText:INVALID_TEXT_DRAW) {
                    citySelectionTextDrawings[playerid][i] = CreatePlayerTextDraw(playerid, 11.000, 258.000, "~y~12~w~_-_Los_Santos");
                    PlayerTextDrawLetterSize(playerid, citySelectionTextDrawings[playerid][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, citySelectionTextDrawings[playerid][i], -1);
                    PlayerTextDrawSetShadow(playerid, citySelectionTextDrawings[playerid][i], 0);
                    PlayerTextDrawSetOutline(playerid, citySelectionTextDrawings[playerid][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, citySelectionTextDrawings[playerid][i], 255);
                    PlayerTextDrawFont(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, citySelectionTextDrawings[playerid][i], true);

                    PlayerTextDrawShow(playerid,  citySelectionTextDrawings[playerid][i]);
                }
            }
            case 14: {
                if (citySelectionTextDrawings[playerid][i] == PlayerText:INVALID_TEXT_DRAW) {
                    citySelectionTextDrawings[playerid][i] = CreatePlayerTextDraw(playerid, 11.000, 269.000, "~y~13~w~_-_Las_Venturas");
                    PlayerTextDrawLetterSize(playerid, citySelectionTextDrawings[playerid][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, citySelectionTextDrawings[playerid][i], -1);
                    PlayerTextDrawSetShadow(playerid, citySelectionTextDrawings[playerid][i], 0);
                    PlayerTextDrawSetOutline(playerid, citySelectionTextDrawings[playerid][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, citySelectionTextDrawings[playerid][i], 255);
                    PlayerTextDrawFont(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, citySelectionTextDrawings[playerid][i], true);

                    PlayerTextDrawShow(playerid,  citySelectionTextDrawings[playerid][i]);
                }
            }
            case 15: {
                if (citySelectionTextDrawings[playerid][i] == PlayerText:INVALID_TEXT_DRAW) {
                    citySelectionTextDrawings[playerid][i] = CreatePlayerTextDraw(playerid, 131.000, 299.000, "Preciona_~y~F6~w~_(~y~T~w~)_y_selecciona_un_numero");
                    PlayerTextDrawLetterSize(playerid, citySelectionTextDrawings[playerid][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, citySelectionTextDrawings[playerid][i], -1);
                    PlayerTextDrawSetShadow(playerid, citySelectionTextDrawings[playerid][i], 0);
                    PlayerTextDrawSetOutline(playerid, citySelectionTextDrawings[playerid][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, citySelectionTextDrawings[playerid][i], 255);
                    PlayerTextDrawFont(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, citySelectionTextDrawings[playerid][i], true);

                    PlayerTextDrawShow(playerid,  citySelectionTextDrawings[playerid][i]);
                }
            }
            case 16: {
                if (citySelectionTextDrawings[playerid][i] == PlayerText:INVALID_TEXT_DRAW) {
                    citySelectionTextDrawings[playerid][i] = CreatePlayerTextDraw(playerid, 131.000, 312.000, "Presiona_~y~BIR~w~_para_cerrar");
                    PlayerTextDrawLetterSize(playerid, citySelectionTextDrawings[playerid][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, citySelectionTextDrawings[playerid][i], -1);
                    PlayerTextDrawSetShadow(playerid, citySelectionTextDrawings[playerid][i], 0);
                    PlayerTextDrawSetOutline(playerid, citySelectionTextDrawings[playerid][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, citySelectionTextDrawings[playerid][i], 255);
                    PlayerTextDrawFont(playerid, citySelectionTextDrawings[playerid][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, citySelectionTextDrawings[playerid][i], true);

                    PlayerTextDrawShow(playerid,  citySelectionTextDrawings[playerid][i]);
                }
            }
        }
    }
    return 1;
}