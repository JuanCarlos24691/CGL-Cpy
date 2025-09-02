forward CreateThirdAnimAssistantTD(const playerid);
public CreateThirdAnimAssistantTD(const playerid) {
    for (new i = 0; i < 11; i++) {
        switch (i) {
            case 0: {
                if (animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 6.000, 105.000, "LD_SPAC:black");
                    PlayerTextDrawTextSize(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 250.000, 153.000);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], -81);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], TEXT_DRAW_FONT_SPRITE_DRAW);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i]);
                }
            }
            case 1: {
                if (animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 130.000, 120.000, "animaciones_3");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 0.349, 1.199);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 792294655);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 33752063);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], TEXT_DRAW_FONT_3);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i]);
                }
            }
            case 2: {
                if (animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 142.000, "~y~/hola_[ID]");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i]);
                }
            }
            case 3: {
                if (animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 153.000, "~y~/fuck_[ID]");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i]);
                }
            }
            case 4: {
                if (animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 165.000, "~y~/escupir_[ID]");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i]);
                }
            }
            case 5: {
                if (animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 176.000, "~y~/vomitar_[ID]");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i]);
                }
            }
            case 6: {
                if (animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 187.000, "~y~/lamentar_[ID]");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i]);
                }
            }
            case 7: {
                if (animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 198.000, "~y~/patear_[ID]");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i]);
                }
            }
            case 8: {
                if (animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 210.000, "~y~/nalgada_[ID]");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i]);
                }
            }
            case 9: {
                if (animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 14.000, 221.000, "~y~/besar_[ID]");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i]);
                }
            }
            case 10: {
                if (animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i] == PlayerText:INVALID_TEXT_DRAW) {
                    animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i] = CreatePlayerTextDraw(playerid, 131.000, 238.000, "Presiona_~y~BIR~w~_para_cerrar");
                    PlayerTextDrawLetterSize(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], -1);
                    PlayerTextDrawSetShadow(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 0);
                    PlayerTextDrawSetOutline(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], 255);
                    PlayerTextDrawFont(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i], true);

                    PlayerTextDrawShow(playerid,  animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i]);
                }
            }
        }
    }
    return 1;
}