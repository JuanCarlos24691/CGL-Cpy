forward CreatePSTDBuy(const playerid);
public CreatePSTDBuy(const playerid) {
    RestoreGlobalTextDrawings(playerid);

    for (new i = 0; i < 42; i++) {
        switch (i) {
            case 0: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 8.000, 114.000, "LD_SPAC:black");
                    PlayerTextDrawTextSize(playerid, petsInformation[playerid][pSTDBuy][i], 254.000, 240.000);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -106);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 0);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 0);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 255);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_SPRITE_DRAW);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 1: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 85.000, 126.000, "~g~Veterinaria");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.449, 1.399);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_3);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 2: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 14.000, 148.000, "~y~1_~w~-_Mosquito");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.280, 0.899);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 3: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 15.000, 157.000, "~y~2_~w~-_Abeja");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.280, 0.899);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 4: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 15.000, 165.000, "~y~3_~w~-_Mosca");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.280, 0.899);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 5: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 15.000, 173.000, "~y~4_~w~-_Hormiga");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.280, 0.899);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 6: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 15.000, 181.000, "~y~5_~w~-_Cucaracha");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.280, 0.899);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 7: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 15.000, 189.000, "~y~6_~w~-_Conejo");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.280, 0.899);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 8: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 15.000, 197.000, "~y~7_~w~-_Gato");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.280, 0.899);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 9: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 15.000, 205.000, "~y~8_~w~-_Perro");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.280, 0.899);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 10: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 15.000, 213.000, "~y~9_~w~-_Gallo");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.280, 0.899);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 11: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 15.000, 221.000, "~y~10_~w~-_Borrego");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.280, 0.899);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 12: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 15.000, 229.000, "~y~11_~w~-_Zorro");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.280, 0.899);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 13: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 15.000, 237.000, "~y~12_~w~-_Cocodrilo");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.280, 0.899);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 14: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 15.000, 245.000, "~y~13_~w~-_Aguila");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.280, 0.899);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 15: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 15.000, 253.000, "~y~14_~w~-_Jirafa");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.280, 0.899);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 16: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 15.000, 261.000, "~y~15_~w~-_Leon");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.280, 0.899);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 17: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 15.000, 269.000, "~y~16_~w~-_Serpiente");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.280, 0.899);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 18: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 15.000, 277.000, "~y~17_~w~-_Alien");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.280, 0.899);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 19: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 15.000, 285.000, "~y~18_~w~-_Robot");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.280, 0.899);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 20: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 15.000, 293.000, "~y~19_~w~-_Dinosaurio");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.280, 0.899);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 21: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 15.000, 301.000, "~y~20_~w~-_Dragon");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.280, 0.899);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 22: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 210.000, 147.000, "~g~$10000");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.250, 0.999);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 23: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 210.000, 156.000, "~g~$10000");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.250, 0.999);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 24: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 210.000, 165.000, "~g~$10000");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.250, 0.999);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 25: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 210.000, 173.000, "~g~$10000");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.250, 0.999);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 26: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 210.000, 181.000, "~g~$15000");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.250, 0.999);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 27: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 210.000, 189.000, "~g~$30000");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.250, 0.999);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 28: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 210.000, 197.000, "~g~$35000");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.250, 0.999);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 29: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 210.000, 205.000, "~g~$40000");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.250, 0.999);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 30: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 210.000, 213.000, "~g~$45000");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.250, 0.999);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 31: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 210.000, 221.000, "~g~$50000");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.250, 0.999);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 32: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 210.000, 229.000, "~g~$60000");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.250, 0.999);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 33: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 210.000, 237.000, "~g~$87000");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.250, 0.999);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 34: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 210.000, 245.000, "~g~$90000");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.250, 0.999);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 35: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 210.000, 253.000, "~g~$93000");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.250, 0.999);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 36: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 210.000, 261.000, "~g~$100000");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.250, 0.999);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 37: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 210.000, 269.000, "~g~$200000");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.250, 0.999);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 38: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 210.000, 277.000, "~g~$300000");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.250, 0.999);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 39: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 210.000, 285.000, "~g~$400000");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.250, 0.999);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 40: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 210.000, 293.000, "~g~$500000");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.250, 0.999);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
            case 41: {
                if (petsInformation[playerid][pSTDBuy][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDBuy][i] = CreatePlayerTextDraw(playerid, 210.000, 301.000, "~g~$600000");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDBuy][i], 0.250, 0.999);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDBuy][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDBuy][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDBuy][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDBuy][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDBuy][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDBuy][i]);
                }
            }
        }
    }
    return 1;
}