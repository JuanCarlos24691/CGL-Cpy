forward CreateSecondAnimAssistantTD(const playerid);
public CreateSecondAnimAssistantTD(const playerid) {
    for (new i = 0; i < 12; i++) {
        switch (i) {
            case 0: {
                if (animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 6.000, 105.000, "LD_SPAC:black");
                    PlayerTextDrawTextSize(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 250.000, 172.000);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], -81);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], TEXT_DRAW_FONT_SPRITE_DRAW);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i]);
                }
            }
            case 1: {
                if (animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 130.000, 120.000, "animaciones_2");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 0.349, 1.199);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 792294655);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 33752063);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], TEXT_DRAW_FONT_3);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i]);
                }
            }
            case 2: {
                if (animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 142.000, "~y~/si_/no");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i]);
                }
            }
            case 3: {
                if (animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 153.000, "~y~/sit_[1_-_10]");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i]);
                }
            }
            case 4: {
                if (animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 165.000, "~y~/bailar_[1_-_4]");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i]);
                }
            }
            case 5: {
                if (animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 176.000, "~y~/taichi");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i]);
                }
            }
            case 6: {
                if (animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 187.000, "~y~/esconder");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i]);
                }
            }
            case 7: {
                if (animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 198.000, "~y~/rip");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i]);
                }
            }
            case 8: {
                if (animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 210.000, "~y~/rascarse");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i]);
                }
            }
            case 9: {
                if (animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 221.000, "~y~/jaja");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i]);
                }
            }
            case 10: {
                if (animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 233.000, "~y~/llorar");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i]);
                }
            }
            case 11: {
                if (animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 131.000, 254.000, "Presiona_~y~BIR~w~_para_cerrar");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i]);
                }
            }
        }
    }
    return 1;
}