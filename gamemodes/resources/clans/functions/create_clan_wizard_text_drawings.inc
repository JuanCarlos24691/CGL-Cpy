forward CreateClanWizardTextDrawings(const playerid);
public CreateClanWizardTextDrawings(const playerid) {
    for (new i = 0; i < 12; i++) {
        switch (i) {
            case 0: {
                if (clanAssistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    clanAssistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 6.000, 105.000, "LD_SPAC:black");
                    PlayerTextDrawTextSize(playerid, clanAssistantInformation[playerid][textDrawings][i], 250.000, 222.000);
                    PlayerTextDrawAlignment(playerid, clanAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, clanAssistantInformation[playerid][textDrawings][i], -81);
                    PlayerTextDrawSetShadow(playerid, clanAssistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, clanAssistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawBackgroundColour(playerid, clanAssistantInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, clanAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_SPRITE_DRAW);
                    PlayerTextDrawSetProportional(playerid, clanAssistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, clanAssistantInformation[playerid][textDrawings][i]);
                }
            }
            case 1: {
                if (clanAssistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    clanAssistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 130.000, 111.000, "Comandos_de_clanes");
                    PlayerTextDrawLetterSize(playerid, clanAssistantInformation[playerid][textDrawings][i], 0.349, 1.199);
                    PlayerTextDrawAlignment(playerid, clanAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, clanAssistantInformation[playerid][textDrawings][i], 792294655);
                    PlayerTextDrawSetShadow(playerid, clanAssistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, clanAssistantInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, clanAssistantInformation[playerid][textDrawings][i], 33752063);
                    PlayerTextDrawFont(playerid, clanAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_3);
                    PlayerTextDrawSetProportional(playerid, clanAssistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, clanAssistantInformation[playerid][textDrawings][i]);
                }
            }
            case 2: {
                if (clanAssistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    clanAssistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 14.000, 142.000, "~y~/crearclan");
                    PlayerTextDrawLetterSize(playerid, clanAssistantInformation[playerid][textDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, clanAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, clanAssistantInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, clanAssistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, clanAssistantInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, clanAssistantInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, clanAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, clanAssistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, clanAssistantInformation[playerid][textDrawings][i]);
                }
            }
            case 3: {
                if (clanAssistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    clanAssistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 13.000, 157.000, "~y~/clancolor");
                    PlayerTextDrawLetterSize(playerid, clanAssistantInformation[playerid][textDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, clanAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, clanAssistantInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, clanAssistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, clanAssistantInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, clanAssistantInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, clanAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, clanAssistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, clanAssistantInformation[playerid][textDrawings][i]);
                }
            }
            case 4: {
                if (clanAssistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    clanAssistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 13.000, 172.000, "~y~/clantag");
                    PlayerTextDrawLetterSize(playerid, clanAssistantInformation[playerid][textDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, clanAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, clanAssistantInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, clanAssistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, clanAssistantInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, clanAssistantInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, clanAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, clanAssistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, clanAssistantInformation[playerid][textDrawings][i]);
                }
            }
            case 5: {
                if (clanAssistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    clanAssistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 13.000, 187.000, "~y~/darsublider");
                    PlayerTextDrawLetterSize(playerid, clanAssistantInformation[playerid][textDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, clanAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, clanAssistantInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, clanAssistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, clanAssistantInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, clanAssistantInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, clanAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, clanAssistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, clanAssistantInformation[playerid][textDrawings][i]);
                }
            }
            case 6: {
                if (clanAssistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    clanAssistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 13.000, 202.000, "~y~/cunir");
                    PlayerTextDrawLetterSize(playerid, clanAssistantInformation[playerid][textDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, clanAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, clanAssistantInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, clanAssistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, clanAssistantInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, clanAssistantInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, clanAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, clanAssistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, clanAssistantInformation[playerid][textDrawings][i]);
                }
            }
            case 7: {
                if (clanAssistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    clanAssistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 13.000, 217.000, "~y~/cunirme");
                    PlayerTextDrawLetterSize(playerid, clanAssistantInformation[playerid][textDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, clanAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, clanAssistantInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, clanAssistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, clanAssistantInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, clanAssistantInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, clanAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, clanAssistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, clanAssistantInformation[playerid][textDrawings][i]);
                }
            }
            case 8: {
                if (clanAssistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    clanAssistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 13.000, 232.000, "~y~/csalir");
                    PlayerTextDrawLetterSize(playerid, clanAssistantInformation[playerid][textDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, clanAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, clanAssistantInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, clanAssistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, clanAssistantInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, clanAssistantInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, clanAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, clanAssistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, clanAssistantInformation[playerid][textDrawings][i]);
                }
            }
            case 9: {
                if (clanAssistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    clanAssistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 13.000, 202.000, "~y~/cunir");
                    PlayerTextDrawLetterSize(playerid, clanAssistantInformation[playerid][textDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, clanAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, clanAssistantInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, clanAssistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, clanAssistantInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, clanAssistantInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, clanAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, clanAssistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, clanAssistantInformation[playerid][textDrawings][i]);
                }
            }
            case 10: {
                if (clanAssistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    clanAssistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 13.000, 248.000, "~y~/cexpulsar");
                    PlayerTextDrawLetterSize(playerid, clanAssistantInformation[playerid][textDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, clanAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, clanAssistantInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, clanAssistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, clanAssistantInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, clanAssistantInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, clanAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, clanAssistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, clanAssistantInformation[playerid][textDrawings][i]);
                }
            }
            case 11: {
                if (clanAssistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    clanAssistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 312.000, "Presiona_~y~BIR~w~_para_cerrar");
                    PlayerTextDrawLetterSize(playerid, clanAssistantInformation[playerid][textDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, clanAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, clanAssistantInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, clanAssistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, clanAssistantInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, clanAssistantInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, clanAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, clanAssistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, clanAssistantInformation[playerid][textDrawings][i]);
                }
            }
        }
    }
    return 1;
}