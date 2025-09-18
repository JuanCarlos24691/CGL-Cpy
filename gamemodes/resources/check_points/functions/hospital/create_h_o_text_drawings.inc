forward CreateHOTextDrawings(const playerid);
public CreateHOTextDrawings(const playerid) {
    RestoreGlobalTextDrawings(playerid);

    for (new i = 0; i < 12; i++) {
        switch (i) {
            case 0: {
                if (hospitalInformation[playerid][hOTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    hospitalInformation[playerid][hOTextDrawings][i] = CreatePlayerTextDraw(playerid, 6.000, 105.000, "LD_SPAC:black");
                    PlayerTextDrawTextSize(playerid, hospitalInformation[playerid][hOTextDrawings][i], 250.000, 159.000);
                    PlayerTextDrawAlignment(playerid, hospitalInformation[playerid][hOTextDrawings][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, hospitalInformation[playerid][hOTextDrawings][i], -81);
                    PlayerTextDrawSetShadow(playerid, hospitalInformation[playerid][hOTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, hospitalInformation[playerid][hOTextDrawings][i], 0);
                    PlayerTextDrawBackgroundColour(playerid, hospitalInformation[playerid][hOTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, hospitalInformation[playerid][hOTextDrawings][i], TEXT_DRAW_FONT_SPRITE_DRAW);
                    PlayerTextDrawSetProportional(playerid, hospitalInformation[playerid][hOTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, hospitalInformation[playerid][hOTextDrawings][i]);
                }
            }

            case 1: {
                if (hospitalInformation[playerid][hOTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    hospitalInformation[playerid][hOTextDrawings][i] = CreatePlayerTextDraw(playerid, 130.000, 119.000, "~b~hospital");
                    PlayerTextDrawLetterSize(playerid, hospitalInformation[playerid][hOTextDrawings][i], 0.349, 1.199);
                    PlayerTextDrawAlignment(playerid, hospitalInformation[playerid][hOTextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, hospitalInformation[playerid][hOTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, hospitalInformation[playerid][hOTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, hospitalInformation[playerid][hOTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, hospitalInformation[playerid][hOTextDrawings][i], 33752063);
                    PlayerTextDrawFont(playerid, hospitalInformation[playerid][hOTextDrawings][i], TEXT_DRAW_FONT_3);
                    PlayerTextDrawSetProportional(playerid, hospitalInformation[playerid][hOTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, hospitalInformation[playerid][hOTextDrawings][i]);
                }
            }
            case 2: {
                if (hospitalInformation[playerid][hOTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    hospitalInformation[playerid][hOTextDrawings][i] = CreatePlayerTextDraw(playerid, 236.000, 142.000, "~y~1~w~_-_Curar_____________________________________________________________~g~$1000");
                    PlayerTextDrawLetterSize(playerid, hospitalInformation[playerid][hOTextDrawings][i], 0.178, 0.898);
                    PlayerTextDrawAlignment(playerid, hospitalInformation[playerid][hOTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, hospitalInformation[playerid][hOTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, hospitalInformation[playerid][hOTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, hospitalInformation[playerid][hOTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, hospitalInformation[playerid][hOTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, hospitalInformation[playerid][hOTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, hospitalInformation[playerid][hOTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, hospitalInformation[playerid][hOTextDrawings][i]);
                }
            }
            case 3: {
                if (hospitalInformation[playerid][hOTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    hospitalInformation[playerid][hOTextDrawings][i] = CreatePlayerTextDraw(playerid, 240.000, 153.000, "~y~2~w~_-_Curar_Enfermedades_____________________________________________~g~$10000");
                    PlayerTextDrawLetterSize(playerid, hospitalInformation[playerid][hOTextDrawings][i], 0.178, 0.898);
                    PlayerTextDrawAlignment(playerid, hospitalInformation[playerid][hOTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, hospitalInformation[playerid][hOTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, hospitalInformation[playerid][hOTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, hospitalInformation[playerid][hOTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, hospitalInformation[playerid][hOTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, hospitalInformation[playerid][hOTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, hospitalInformation[playerid][hOTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, hospitalInformation[playerid][hOTextDrawings][i]);
                }
            }
            case 4: {
                if (hospitalInformation[playerid][hOTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    hospitalInformation[playerid][hOTextDrawings][i] = CreatePlayerTextDraw(playerid, 240.000, 164.000, "~y~3~w~_-_Pastilla_~b~Aspirina_________________________________________________~g~$40000");
                    PlayerTextDrawLetterSize(playerid, hospitalInformation[playerid][hOTextDrawings][i], 0.178, 0.898);
                    PlayerTextDrawAlignment(playerid, hospitalInformation[playerid][hOTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, hospitalInformation[playerid][hOTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, hospitalInformation[playerid][hOTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, hospitalInformation[playerid][hOTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, hospitalInformation[playerid][hOTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, hospitalInformation[playerid][hOTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, hospitalInformation[playerid][hOTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, hospitalInformation[playerid][hOTextDrawings][i]);
                }
            }
            case 5: {
                if (hospitalInformation[playerid][hOTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    hospitalInformation[playerid][hOTextDrawings][i] = CreatePlayerTextDraw(playerid, 239.000, 175.000, "~y~4~w~_-_Cambiar_Skin____________________________________________________~g~$25000");
                    PlayerTextDrawLetterSize(playerid, hospitalInformation[playerid][hOTextDrawings][i], 0.178, 0.898);
                    PlayerTextDrawAlignment(playerid, hospitalInformation[playerid][hOTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, hospitalInformation[playerid][hOTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, hospitalInformation[playerid][hOTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, hospitalInformation[playerid][hOTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, hospitalInformation[playerid][hOTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, hospitalInformation[playerid][hOTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, hospitalInformation[playerid][hOTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, hospitalInformation[playerid][hOTextDrawings][i]);
                }
            }
            case 6: {
                if (hospitalInformation[playerid][hOTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    hospitalInformation[playerid][hOTextDrawings][i] = CreatePlayerTextDraw(playerid, 239.000, 186.000, "~y~5~w~_-_Clamidia_________________________________________________________~g~$50000");
                    PlayerTextDrawLetterSize(playerid, hospitalInformation[playerid][hOTextDrawings][i], 0.178, 0.898);
                    PlayerTextDrawAlignment(playerid, hospitalInformation[playerid][hOTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, hospitalInformation[playerid][hOTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, hospitalInformation[playerid][hOTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, hospitalInformation[playerid][hOTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, hospitalInformation[playerid][hOTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, hospitalInformation[playerid][hOTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, hospitalInformation[playerid][hOTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, hospitalInformation[playerid][hOTextDrawings][i]);
                }
            }
            case 7: {
                if (hospitalInformation[playerid][hOTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    hospitalInformation[playerid][hOTextDrawings][i] = CreatePlayerTextDraw(playerid, 239.000, 197.000, "~y~6~w~_-_Gonorrea________________________________________________________~g~$55000");
                    PlayerTextDrawLetterSize(playerid, hospitalInformation[playerid][hOTextDrawings][i], 0.178, 0.898);
                    PlayerTextDrawAlignment(playerid, hospitalInformation[playerid][hOTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, hospitalInformation[playerid][hOTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, hospitalInformation[playerid][hOTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, hospitalInformation[playerid][hOTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, hospitalInformation[playerid][hOTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, hospitalInformation[playerid][hOTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, hospitalInformation[playerid][hOTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, hospitalInformation[playerid][hOTextDrawings][i]);
                }
            }
            case 8: {
                if (hospitalInformation[playerid][hOTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    hospitalInformation[playerid][hOTextDrawings][i] = CreatePlayerTextDraw(playerid, 238.000, 208.000, "~y~7~w~_-_Sifilis____________________________________________________________~g~$60000");
                    PlayerTextDrawLetterSize(playerid, hospitalInformation[playerid][hOTextDrawings][i], 0.178, 0.898);
                    PlayerTextDrawAlignment(playerid, hospitalInformation[playerid][hOTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, hospitalInformation[playerid][hOTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, hospitalInformation[playerid][hOTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, hospitalInformation[playerid][hOTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, hospitalInformation[playerid][hOTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, hospitalInformation[playerid][hOTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, hospitalInformation[playerid][hOTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, hospitalInformation[playerid][hOTextDrawings][i]);
                }
            }
            case 9: {
                if (hospitalInformation[playerid][hOTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    hospitalInformation[playerid][hOTextDrawings][i] = CreatePlayerTextDraw(playerid, 233.000, 219.000, "~y~8~w~_-_Condon__________________________________________________________~g~$1500");
                    PlayerTextDrawLetterSize(playerid, hospitalInformation[playerid][hOTextDrawings][i], 0.178, 0.898);
                    PlayerTextDrawAlignment(playerid, hospitalInformation[playerid][hOTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, hospitalInformation[playerid][hOTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, hospitalInformation[playerid][hOTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, hospitalInformation[playerid][hOTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, hospitalInformation[playerid][hOTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, hospitalInformation[playerid][hOTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, hospitalInformation[playerid][hOTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, hospitalInformation[playerid][hOTextDrawings][i]);
                }
            }
            case 10: {
                if (hospitalInformation[playerid][hOTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    hospitalInformation[playerid][hOTextDrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 237.000, "Preciona_~y~F6~w~_(~y~T~w~)_y_selecciona_un_numero");
                    PlayerTextDrawLetterSize(playerid, hospitalInformation[playerid][hOTextDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, hospitalInformation[playerid][hOTextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, hospitalInformation[playerid][hOTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, hospitalInformation[playerid][hOTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, hospitalInformation[playerid][hOTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, hospitalInformation[playerid][hOTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, hospitalInformation[playerid][hOTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, hospitalInformation[playerid][hOTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, hospitalInformation[playerid][hOTextDrawings][i]);
                }
            }
            case 11: {
                if (hospitalInformation[playerid][hOTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    hospitalInformation[playerid][hOTextDrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 249.000, "Presiona_~y~BIR~w~_para_cerrar");
                    PlayerTextDrawLetterSize(playerid, hospitalInformation[playerid][hOTextDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, hospitalInformation[playerid][hOTextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, hospitalInformation[playerid][hOTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, hospitalInformation[playerid][hOTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, hospitalInformation[playerid][hOTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, hospitalInformation[playerid][hOTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, hospitalInformation[playerid][hOTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, hospitalInformation[playerid][hOTextDrawings][i], true);


                    PlayerTextDrawShow(playerid, hospitalInformation[playerid][hOTextDrawings][i]);
                }
            }
        }
    }
    return 1;
}