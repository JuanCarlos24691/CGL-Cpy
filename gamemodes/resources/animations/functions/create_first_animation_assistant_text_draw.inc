forward CreateFirstAnimAssistantTd(const playerid);
public CreateFirstAnimAssistantTd(const playerid) {
    RestoreGlobalTextDrawings(playerid);

    for (new i = 0; i < 58; i++) {
        switch (i) {
            case 0: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 6.000, 105.000, "LD_SPAC:black");
                    PlayerTextDrawTextSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 250.000, 222.000);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -81);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_SPRITE_DRAW);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 1: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 130.000, 115.000, "animaciones");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.349, 1.199);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 792294655);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 33752063);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_3);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 2: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 131.000, "/adolorido");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 3: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 142.000, "/agonizar");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 4: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 153.000, "/agredido");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 5: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 165.000, "/alzar");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 6: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 176.000, "/amenazar");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 7: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 187.000, "/apagar");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 8: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 198.000, "/arrestado");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 9: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 210.000, "/asco");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 10: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 221.000, "/asiento");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 11: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 233.000, "/asientosexi");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 12: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 245.000, "/asustado");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 13: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 257.000, "/boxear");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 14: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 269.000, "/cansado");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 15: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 281.000, "/cenar");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 16: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 293.000, "/chao");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 17: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 86.000, 131.000, "/chorizo");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 18: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 86.000, 144.000, "/clavarse");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 19: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 86.000, 156.000, "/comerciar");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 20: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 86.000, 168.000, "/comodo");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 21: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 86.000, 181.000, "/crack");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 22: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 86.000, 194.000, "/cubrirse");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 23: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 86.000, 207.000, "/depie");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 24: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 86.000, 221.000, "/detener");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 25: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 86.000, 234.000, "/fokear");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 26: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 86.000, 247.000, "/fuerza");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 27: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 86.000, 260.000, "/fumar");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 28: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 86.000, 273.000, "/herido");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 29: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 86.000, 286.000, "/inhalar");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 30: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 141.000, 131.000, "/lanzar");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 31: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 141.000, 143.000, "/levantarse");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 32: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 141.000, 156.000, "/mmm");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 33: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 141.000, 168.000, "/mujer");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 34: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 141.000, 181.000, "/pararse");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 35: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 141.000, 194.000, "/patada");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 36: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 141.000, 207.000, "/pelea");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 37: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 141.000, 221.000, "/prender");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 38: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 141.000, 234.000, "/quepa");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 39: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 141.000, 248.000, "/quepasa");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 40: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 141.000, 262.000, "/rapear");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 41: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 141.000, 275.000, "/recoger");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 42: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 141.000, 288.000, "/recostarse");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 43: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 200.000, 131.000, "/rendirse");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 44: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 200.000, 143.000, "/saludo1");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 45: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 200.000, 155.000, "/saludo2");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 46: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 200.000, 169.000, "/saludo3");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 47: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 200.000, 182.000, "/saludo4");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 48: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 200.000, 195.000, "/sapiar");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 49: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 200.000, 207.000, "/seacabo");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 50: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 200.000, 219.000, "/servir");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 51: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 200.000, 232.000, "/servirse");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 52: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 200.000, 244.000, "/superpatada");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 53: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 200.000, 256.000, "/traficar");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 54: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 200.000, 269.000, "/tullio");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 55: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 200.000, 281.000, "/woo");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 56: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 200.000, 293.000, "/jumpkick");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
            case 57: {
                if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 131.000, 312.000, "Presiona_~y~BIR~w~_para_cerrar");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
                }
            }
        }
    }
    return 1;
}