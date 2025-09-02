forward CreateWizardTextDrawings(const playerid);
public CreateWizardTextDrawings(const playerid) {
    for (new i = 0; i < 5; i++) {
        switch (i) {
            case 0: {
                if (assistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    assistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 6.000, 105.000, "LD_SPAC:black");
                    PlayerTextDrawTextSize(playerid, assistantInformation[playerid][textDrawings][i], 250.000, 222.000);
                    PlayerTextDrawAlignment(playerid, assistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, assistantInformation[playerid][textDrawings][i], -81);
                    PlayerTextDrawSetShadow(playerid, assistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, assistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawBackgroundColour(playerid, assistantInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, assistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_SPRITE_DRAW);
                    PlayerTextDrawSetProportional(playerid, assistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, assistantInformation[playerid][textDrawings][i]);
                }
            }
            case 1: {
                if (assistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    assistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 130.000, 111.000, "Comandos");
                    PlayerTextDrawLetterSize(playerid, assistantInformation[playerid][textDrawings][i], 0.349, 1.199);
                    PlayerTextDrawAlignment(playerid, assistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, assistantInformation[playerid][textDrawings][i], 792294655);
                    PlayerTextDrawSetShadow(playerid, assistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, assistantInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, assistantInformation[playerid][textDrawings][i], 33752063);
                    PlayerTextDrawFont(playerid, assistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_3);
                    PlayerTextDrawSetProportional(playerid, assistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, assistantInformation[playerid][textDrawings][i]);
                }
            }
            case 2: {
                if (assistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    assistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 57.000, 142.000, "~y~1~w~_-_Comandos_De_Clanes");
                    PlayerTextDrawLetterSize(playerid, assistantInformation[playerid][textDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, assistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, assistantInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, assistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, assistantInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, assistantInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, assistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, assistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, assistantInformation[playerid][textDrawings][i]);
                }
            }
            case 3: {
                if (assistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    assistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 299.000, "Preciona_~y~F6~w~_(~y~T~w~)_y_selecciona_un_numero");
                    PlayerTextDrawLetterSize(playerid, assistantInformation[playerid][textDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, assistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, assistantInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, assistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, assistantInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, assistantInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, assistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, assistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, assistantInformation[playerid][textDrawings][i]);
                }
            }
            case 4: {
                if (assistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    assistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 312.000, "Presiona_~y~BIR~w~_para_cerrar");
                    PlayerTextDrawLetterSize(playerid, assistantInformation[playerid][textDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, assistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, assistantInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, assistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, assistantInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, assistantInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, assistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, assistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, assistantInformation[playerid][textDrawings][i]);
                }
            }
        }
    }
    return 1;
}