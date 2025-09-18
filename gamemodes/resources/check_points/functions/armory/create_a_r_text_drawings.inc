forward CreateARTextDrawings(const playerid);
public CreateARTextDrawings(const playerid) {
    RestoreGlobalTextDrawings(playerid);

    for (new i = 0; i < 24; i++) {
        switch (i) {
            case 0: {
                if (armoryInformation[playerid][aRTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    armoryInformation[playerid][aRTextDrawings][i] = CreatePlayerTextDraw(playerid, 6.000, 105.000, "LD_SPAC:black");
                    PlayerTextDrawTextSize(playerid, armoryInformation[playerid][aRTextDrawings][i], 250.000, 222.000);
                    PlayerTextDrawAlignment(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, armoryInformation[playerid][aRTextDrawings][i], -81);
                    PlayerTextDrawSetShadow(playerid, armoryInformation[playerid][aRTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, armoryInformation[playerid][aRTextDrawings][i], 0);
                    PlayerTextDrawBackgroundColour(playerid, armoryInformation[playerid][aRTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_FONT_SPRITE_DRAW);
                    PlayerTextDrawSetProportional(playerid, armoryInformation[playerid][aRTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, armoryInformation[playerid][aRTextDrawings][i]);
                }
            }
            case 1: {
                if (armoryInformation[playerid][aRTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    armoryInformation[playerid][aRTextDrawings][i] = CreatePlayerTextDraw(playerid, 130.000, 111.000, "~g~ammunation");
                    PlayerTextDrawLetterSize(playerid, armoryInformation[playerid][aRTextDrawings][i], 0.349, 1.199);
                    PlayerTextDrawAlignment(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, armoryInformation[playerid][aRTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, armoryInformation[playerid][aRTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, armoryInformation[playerid][aRTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, armoryInformation[playerid][aRTextDrawings][i], 33752063);
                    PlayerTextDrawFont(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_FONT_3);
                    PlayerTextDrawSetProportional(playerid, armoryInformation[playerid][aRTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, armoryInformation[playerid][aRTextDrawings][i]);
                }
            }
            case 2: {
                if (armoryInformation[playerid][aRTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    armoryInformation[playerid][aRTextDrawings][i] = CreatePlayerTextDraw(playerid, 232.000, 123.000, "~y~1~w~_-_Palo_de_Golf____________________________________________________~g~$1000");
                    PlayerTextDrawLetterSize(playerid, armoryInformation[playerid][aRTextDrawings][i], 0.178, 0.898);
                    PlayerTextDrawAlignment(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, armoryInformation[playerid][aRTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, armoryInformation[playerid][aRTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, armoryInformation[playerid][aRTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, armoryInformation[playerid][aRTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, armoryInformation[playerid][aRTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, armoryInformation[playerid][aRTextDrawings][i]);
                }
            }
            case 3: {
                if (armoryInformation[playerid][aRTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    armoryInformation[playerid][aRTextDrawings][i] = CreatePlayerTextDraw(playerid, 233.000, 132.000, "~y~2~w~_-_Bate_de_Baisbol_________________________________________________~g~$1000");
                    PlayerTextDrawLetterSize(playerid, armoryInformation[playerid][aRTextDrawings][i], 0.178, 0.898);
                    PlayerTextDrawAlignment(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, armoryInformation[playerid][aRTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, armoryInformation[playerid][aRTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, armoryInformation[playerid][aRTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, armoryInformation[playerid][aRTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, armoryInformation[playerid][aRTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, armoryInformation[playerid][aRTextDrawings][i]);
                }
            }
            case 4: {
                if (armoryInformation[playerid][aRTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    armoryInformation[playerid][aRTextDrawings][i] = CreatePlayerTextDraw(playerid, 233.000, 141.000, "~y~3~w~_-_Pala_____________________________________________________________~g~$1000");
                    PlayerTextDrawLetterSize(playerid, armoryInformation[playerid][aRTextDrawings][i], 0.178, 0.898);
                    PlayerTextDrawAlignment(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, armoryInformation[playerid][aRTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, armoryInformation[playerid][aRTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, armoryInformation[playerid][aRTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, armoryInformation[playerid][aRTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, armoryInformation[playerid][aRTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, armoryInformation[playerid][aRTextDrawings][i]);
                }
            }
            case 5: {
                if (armoryInformation[playerid][aRTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    armoryInformation[playerid][aRTextDrawings][i] = CreatePlayerTextDraw(playerid, 233.000, 150.000, "~y~4~w~_-_Palo_de_Billar___________________________________________________~g~$1000");
                    PlayerTextDrawLetterSize(playerid, armoryInformation[playerid][aRTextDrawings][i], 0.178, 0.898);
                    PlayerTextDrawAlignment(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, armoryInformation[playerid][aRTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, armoryInformation[playerid][aRTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, armoryInformation[playerid][aRTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, armoryInformation[playerid][aRTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, armoryInformation[playerid][aRTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, armoryInformation[playerid][aRTextDrawings][i]);
                }
            }
            case 6: {
                if (armoryInformation[playerid][aRTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    armoryInformation[playerid][aRTextDrawings][i] = CreatePlayerTextDraw(playerid, 232.000, 159.000, "~y~5~w~_-_Baston__________________________________________________________~g~$1000");
                    PlayerTextDrawLetterSize(playerid, armoryInformation[playerid][aRTextDrawings][i], 0.178, 0.898);
                    PlayerTextDrawAlignment(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, armoryInformation[playerid][aRTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, armoryInformation[playerid][aRTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, armoryInformation[playerid][aRTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, armoryInformation[playerid][aRTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, armoryInformation[playerid][aRTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, armoryInformation[playerid][aRTextDrawings][i]);
                }
            }
            case 7: {
                if (armoryInformation[playerid][aRTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    armoryInformation[playerid][aRTextDrawings][i] = CreatePlayerTextDraw(playerid, 238.000, 168.000, "~y~6~w~_-_Motosierra______________________________________________________~g~$10000");
                    PlayerTextDrawLetterSize(playerid, armoryInformation[playerid][aRTextDrawings][i], 0.178, 0.898);
                    PlayerTextDrawAlignment(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, armoryInformation[playerid][aRTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, armoryInformation[playerid][aRTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, armoryInformation[playerid][aRTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, armoryInformation[playerid][aRTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, armoryInformation[playerid][aRTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, armoryInformation[playerid][aRTextDrawings][i]);
                }
            }
            case 8: {
                if (armoryInformation[playerid][aRTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    armoryInformation[playerid][aRTextDrawings][i] = CreatePlayerTextDraw(playerid, 235.000, 177.000, "~y~7~w~_-_Pistola_150_Municion____________________________________________~g~$2500");
                    PlayerTextDrawLetterSize(playerid, armoryInformation[playerid][aRTextDrawings][i], 0.178, 0.898);
                    PlayerTextDrawAlignment(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, armoryInformation[playerid][aRTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, armoryInformation[playerid][aRTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, armoryInformation[playerid][aRTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, armoryInformation[playerid][aRTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, armoryInformation[playerid][aRTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, armoryInformation[playerid][aRTextDrawings][i]);
                }
            }
            case 9: {
                if (armoryInformation[playerid][aRTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    armoryInformation[playerid][aRTextDrawings][i] = CreatePlayerTextDraw(playerid, 235.000, 186.000, "~y~8~w~_-_Pistola_Silenciadora_150_Municion______________________________~g~$3000");
                    PlayerTextDrawLetterSize(playerid, armoryInformation[playerid][aRTextDrawings][i], 0.178, 0.898);
                    PlayerTextDrawAlignment(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, armoryInformation[playerid][aRTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, armoryInformation[playerid][aRTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, armoryInformation[playerid][aRTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, armoryInformation[playerid][aRTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, armoryInformation[playerid][aRTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, armoryInformation[playerid][aRTextDrawings][i]);
                }
            }
            case 10: {
                if (armoryInformation[playerid][aRTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    armoryInformation[playerid][aRTextDrawings][i] = CreatePlayerTextDraw(playerid, 236.000, 195.000, "~y~9~w~_-_Desert_Eagle_150_Municion______________________________________~g~$5000");
                    PlayerTextDrawLetterSize(playerid, armoryInformation[playerid][aRTextDrawings][i], 0.178, 0.898);
                    PlayerTextDrawAlignment(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, armoryInformation[playerid][aRTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, armoryInformation[playerid][aRTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, armoryInformation[playerid][aRTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, armoryInformation[playerid][aRTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, armoryInformation[playerid][aRTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, armoryInformation[playerid][aRTextDrawings][i]);
                }
            }
            case 11: {
                if (armoryInformation[playerid][aRTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    armoryInformation[playerid][aRTextDrawings][i] = CreatePlayerTextDraw(playerid, 236.000, 204.000, "~y~10~w~_-_Escopeta_150_Municion__________________________________________~g~$5000");
                    PlayerTextDrawLetterSize(playerid, armoryInformation[playerid][aRTextDrawings][i], 0.178, 0.898);
                    PlayerTextDrawAlignment(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, armoryInformation[playerid][aRTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, armoryInformation[playerid][aRTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, armoryInformation[playerid][aRTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, armoryInformation[playerid][aRTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, armoryInformation[playerid][aRTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, armoryInformation[playerid][aRTextDrawings][i]);
                }
            }
            case 12: {
                if (armoryInformation[playerid][aRTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    armoryInformation[playerid][aRTextDrawings][i] = CreatePlayerTextDraw(playerid, 236.000, 213.000, "~y~11~w~_-_Escopeta_Recortada_150_Municion_______________________________~g~$7500");
                    PlayerTextDrawLetterSize(playerid, armoryInformation[playerid][aRTextDrawings][i], 0.178, 0.898);
                    PlayerTextDrawAlignment(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, armoryInformation[playerid][aRTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, armoryInformation[playerid][aRTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, armoryInformation[playerid][aRTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, armoryInformation[playerid][aRTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, armoryInformation[playerid][aRTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, armoryInformation[playerid][aRTextDrawings][i]);
                }
            }
            case 13: {
                if (armoryInformation[playerid][aRTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    armoryInformation[playerid][aRTextDrawings][i] = CreatePlayerTextDraw(playerid, 235.000, 222.000, "~y~12~w~_-_Escopeta_de_Combate_150_Municion____________________________~g~$7500");
                    PlayerTextDrawLetterSize(playerid, armoryInformation[playerid][aRTextDrawings][i], 0.178, 0.898);
                    PlayerTextDrawAlignment(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, armoryInformation[playerid][aRTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, armoryInformation[playerid][aRTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, armoryInformation[playerid][aRTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, armoryInformation[playerid][aRTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, armoryInformation[playerid][aRTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, armoryInformation[playerid][aRTextDrawings][i]);
                }
            }
            case 14: {
                if (armoryInformation[playerid][aRTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    armoryInformation[playerid][aRTextDrawings][i] = CreatePlayerTextDraw(playerid, 239.000, 231.000, "~y~13~w~_-_Mac_10_200_Municion___________________________________________~g~$10000");
                    PlayerTextDrawLetterSize(playerid, armoryInformation[playerid][aRTextDrawings][i], 0.178, 0.898);
                    PlayerTextDrawAlignment(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, armoryInformation[playerid][aRTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, armoryInformation[playerid][aRTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, armoryInformation[playerid][aRTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, armoryInformation[playerid][aRTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, armoryInformation[playerid][aRTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, armoryInformation[playerid][aRTextDrawings][i]);
                }
            }
            case 15: {
                if (armoryInformation[playerid][aRTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    armoryInformation[playerid][aRTextDrawings][i] = CreatePlayerTextDraw(playerid, 240.000, 240.000, "~y~14~w~_-_Tec9_200_Municion______________________________________________~g~$10000");
                    PlayerTextDrawLetterSize(playerid, armoryInformation[playerid][aRTextDrawings][i], 0.178, 0.898);
                    PlayerTextDrawAlignment(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, armoryInformation[playerid][aRTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, armoryInformation[playerid][aRTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, armoryInformation[playerid][aRTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, armoryInformation[playerid][aRTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, armoryInformation[playerid][aRTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, armoryInformation[playerid][aRTextDrawings][i]);
                }
            }
            case 16: {
                if (armoryInformation[playerid][aRTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    armoryInformation[playerid][aRTextDrawings][i] = CreatePlayerTextDraw(playerid, 239.000, 249.000, "~y~15~w~_-_MP5_200_Municion______________________________________________~g~$12500");
                    PlayerTextDrawLetterSize(playerid, armoryInformation[playerid][aRTextDrawings][i], 0.178, 0.898);
                    PlayerTextDrawAlignment(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, armoryInformation[playerid][aRTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, armoryInformation[playerid][aRTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, armoryInformation[playerid][aRTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, armoryInformation[playerid][aRTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, armoryInformation[playerid][aRTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, armoryInformation[playerid][aRTextDrawings][i]);
                }
            }
            case 17: {
                if (armoryInformation[playerid][aRTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    armoryInformation[playerid][aRTextDrawings][i] = CreatePlayerTextDraw(playerid, 239.000, 258.000, "~y~16~w~_-_AK47_200_Municion_____________________________________________~g~$15000");
                    PlayerTextDrawLetterSize(playerid, armoryInformation[playerid][aRTextDrawings][i], 0.178, 0.898);
                    PlayerTextDrawAlignment(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, armoryInformation[playerid][aRTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, armoryInformation[playerid][aRTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, armoryInformation[playerid][aRTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, armoryInformation[playerid][aRTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, armoryInformation[playerid][aRTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, armoryInformation[playerid][aRTextDrawings][i]);
                }
            }
            case 18: {
                if (armoryInformation[playerid][aRTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    armoryInformation[playerid][aRTextDrawings][i] = CreatePlayerTextDraw(playerid, 240.000, 267.000, "~y~17~w~_-_M4_200_Municion_______________________________________________~g~$20000");
                    PlayerTextDrawLetterSize(playerid, armoryInformation[playerid][aRTextDrawings][i], 0.178, 0.898);
                    PlayerTextDrawAlignment(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, armoryInformation[playerid][aRTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, armoryInformation[playerid][aRTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, armoryInformation[playerid][aRTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, armoryInformation[playerid][aRTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, armoryInformation[playerid][aRTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, armoryInformation[playerid][aRTextDrawings][i]);
                }
            }
            case 19: {
                if (armoryInformation[playerid][aRTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    armoryInformation[playerid][aRTextDrawings][i] = CreatePlayerTextDraw(playerid, 239.000, 276.000, "~y~18~w~_-_Rifle_100_Municion______________________________________________~g~$15000");
                    PlayerTextDrawLetterSize(playerid, armoryInformation[playerid][aRTextDrawings][i], 0.178, 0.898);
                    PlayerTextDrawAlignment(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, armoryInformation[playerid][aRTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, armoryInformation[playerid][aRTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, armoryInformation[playerid][aRTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, armoryInformation[playerid][aRTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, armoryInformation[playerid][aRTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, armoryInformation[playerid][aRTextDrawings][i]);
                }
            }
            case 20: {
                if (armoryInformation[playerid][aRTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    armoryInformation[playerid][aRTextDrawings][i] = CreatePlayerTextDraw(playerid, 239.000, 285.000, "~y~19~w~_-_Francotirador_100_Municion____________________________________~g~$25000");
                    PlayerTextDrawLetterSize(playerid, armoryInformation[playerid][aRTextDrawings][i], 0.178, 0.898);
                    PlayerTextDrawAlignment(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, armoryInformation[playerid][aRTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, armoryInformation[playerid][aRTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, armoryInformation[playerid][aRTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, armoryInformation[playerid][aRTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, armoryInformation[playerid][aRTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, armoryInformation[playerid][aRTextDrawings][i]);
                }
            }
            case 21: {
                if (armoryInformation[playerid][aRTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    armoryInformation[playerid][aRTextDrawings][i] = CreatePlayerTextDraw(playerid, 232.000, 294.000, "~y~20~w~_-_Armadura_______________________________________________________~g~$500");
                    PlayerTextDrawLetterSize(playerid, armoryInformation[playerid][aRTextDrawings][i], 0.178, 0.898);
                    PlayerTextDrawAlignment(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, armoryInformation[playerid][aRTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, armoryInformation[playerid][aRTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, armoryInformation[playerid][aRTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, armoryInformation[playerid][aRTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, armoryInformation[playerid][aRTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, armoryInformation[playerid][aRTextDrawings][i]);
                }
            }
            case 22: {
                if (armoryInformation[playerid][aRTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    armoryInformation[playerid][aRTextDrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 306.000, "Preciona_~y~F6~w~_(~y~T~w~)_y_selecciona_un_numero");
                    PlayerTextDrawLetterSize(playerid, armoryInformation[playerid][aRTextDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, armoryInformation[playerid][aRTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, armoryInformation[playerid][aRTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, armoryInformation[playerid][aRTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, armoryInformation[playerid][aRTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, armoryInformation[playerid][aRTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, armoryInformation[playerid][aRTextDrawings][i]);
                }
            }
            case 23: {
                if (armoryInformation[playerid][aRTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    armoryInformation[playerid][aRTextDrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 316.000, "Presiona_~y~BIR~w~_para_cerrar");
                    PlayerTextDrawLetterSize(playerid, armoryInformation[playerid][aRTextDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, armoryInformation[playerid][aRTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, armoryInformation[playerid][aRTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, armoryInformation[playerid][aRTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, armoryInformation[playerid][aRTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, armoryInformation[playerid][aRTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, armoryInformation[playerid][aRTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, armoryInformation[playerid][aRTextDrawings][i]);
                }
            }
        }
    }
    return 1;
}