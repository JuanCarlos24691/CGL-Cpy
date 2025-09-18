forward CreateDDTextDrawings(const playerid);
public CreateDDTextDrawings(const playerid) {
    RestoreGlobalTextDrawings(playerid);

    for (new i = 0; i < 11; i++) {
        switch (i) {
            case 0: {
                if (drugDistributorsInformation[playerid][dDTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    drugDistributorsInformation[playerid][dDTextDrawings][i] = CreatePlayerTextDraw(playerid, 6.000, 105.000, "LD_SPAC:black");
                    PlayerTextDrawTextSize(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 250.000, 222.000);
                    PlayerTextDrawAlignment(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], -81);
                    PlayerTextDrawSetShadow(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 0);
                    PlayerTextDrawBackgroundColour(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], TEXT_DRAW_FONT_SPRITE_DRAW);
                    PlayerTextDrawSetProportional(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i]);
                }
            }
            case 1: {
                if (drugDistributorsInformation[playerid][dDTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    drugDistributorsInformation[playerid][dDTextDrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 120.000, "~g~Drogas");
                    PlayerTextDrawLetterSize(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 0.497, 1.299);
                    PlayerTextDrawAlignment(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 33752063);
                    PlayerTextDrawFont(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], TEXT_DRAW_FONT_3);
                    PlayerTextDrawSetProportional(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i]);
                }
            }
            case 2: {
                if (drugDistributorsInformation[playerid][dDTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    drugDistributorsInformation[playerid][dDTextDrawings][i] = CreatePlayerTextDraw(playerid, 235.000, 167.000, "~y~1~w~_-_1_Gramo________________________________________________________~g~$1000");
                    PlayerTextDrawLetterSize(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 0.178, 1.197);
                    PlayerTextDrawAlignment(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i]);
                }
            }
            case 3: {
                if (drugDistributorsInformation[playerid][dDTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    drugDistributorsInformation[playerid][dDTextDrawings][i] = CreatePlayerTextDraw(playerid, 235.000, 177.000, "~y~2~w~_-_10_gramos_____________________________________________________~g~$7000");
                    PlayerTextDrawLetterSize(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 0.178, 1.197);
                    PlayerTextDrawAlignment(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i]);
                }
            }
            case 4: {
                if (drugDistributorsInformation[playerid][dDTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    drugDistributorsInformation[playerid][dDTextDrawings][i] = CreatePlayerTextDraw(playerid, 239.000, 187.000, "~y~3~w~_-_20_gramos_____________________________________________________~g~$10000");
                    PlayerTextDrawLetterSize(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 0.178, 1.197);
                    PlayerTextDrawAlignment(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i]);
                }
            }
            case 5: {
                if (drugDistributorsInformation[playerid][dDTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    drugDistributorsInformation[playerid][dDTextDrawings][i] = CreatePlayerTextDraw(playerid, 239.000, 197.000, "~y~4~w~_-_50_gramos_____________________________________________________~g~$15000");
                    PlayerTextDrawLetterSize(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 0.178, 1.197);
                    PlayerTextDrawAlignment(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i]);
                }
            }
            case 6: {
                if (drugDistributorsInformation[playerid][dDTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    drugDistributorsInformation[playerid][dDTextDrawings][i] = CreatePlayerTextDraw(playerid, 241.000, 207.000, "~y~5~w~_-_100_gramos____________________________________________________~g~$25000");
                    PlayerTextDrawLetterSize(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 0.178, 1.197);
                    PlayerTextDrawAlignment(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i]);
                }
            }
            case 7: {
                if (drugDistributorsInformation[playerid][dDTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    drugDistributorsInformation[playerid][dDTextDrawings][i] = CreatePlayerTextDraw(playerid, 242.000, 217.000, "~y~6~w~_-_250_gramos____________________________________________________~g~$35000");
                    PlayerTextDrawLetterSize(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 0.178, 1.197);
                    PlayerTextDrawAlignment(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i]);
                }
            }
            case 8: {
                if (drugDistributorsInformation[playerid][dDTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    drugDistributorsInformation[playerid][dDTextDrawings][i] = CreatePlayerTextDraw(playerid, 243.000, 227.000, "~y~7~w~_-_500_gramos____________________________________________________~g~$45000");
                    PlayerTextDrawLetterSize(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 0.178, 1.197);
                    PlayerTextDrawAlignment(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i]);
                }
            }
            case 9: {
                if (drugDistributorsInformation[playerid][dDTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    drugDistributorsInformation[playerid][dDTextDrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 294.000, "Preciona_~y~F6~w~_(~y~T~w~)_y_selecciona_un_numero");
                    PlayerTextDrawLetterSize(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i]);
                }
            }
            case 10: {
                if (drugDistributorsInformation[playerid][dDTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    drugDistributorsInformation[playerid][dDTextDrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 307.000, "Presiona_~y~BIR~w~_para_cerrar");
                    PlayerTextDrawLetterSize(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i]);
                }
            }
        }
    }
    return 1;
}