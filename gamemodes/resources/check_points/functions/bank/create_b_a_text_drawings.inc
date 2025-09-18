forward CreateBATextDrawings(const playerid, const bankBalance);
public CreateBATextDrawings(const playerid, const bankBalance) {
    RestoreGlobalTextDrawings(playerid);

    for (new i = 0; i < 8; i++) {
        switch (i) {
            case 0: {
                if (bankInformation[playerid][bATextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    bankInformation[playerid][bATextDrawings][i] = CreatePlayerTextDraw(playerid, 6.000, 115.000, "LD_SPAC:black");
                    PlayerTextDrawTextSize(playerid, bankInformation[playerid][bATextDrawings][i], 250.000, 160.000);
                    PlayerTextDrawAlignment(playerid, bankInformation[playerid][bATextDrawings][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, bankInformation[playerid][bATextDrawings][i], -81);
                    PlayerTextDrawSetShadow(playerid, bankInformation[playerid][bATextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, bankInformation[playerid][bATextDrawings][i], 0);
                    PlayerTextDrawBackgroundColour(playerid, bankInformation[playerid][bATextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, bankInformation[playerid][bATextDrawings][i], TEXT_DRAW_FONT_SPRITE_DRAW);
                    PlayerTextDrawSetProportional(playerid, bankInformation[playerid][bATextDrawings][i], true);

                    PlayerTextDrawShow(playerid, bankInformation[playerid][bATextDrawings][i]);
                }
            }
            case 1: {
                if (bankInformation[playerid][bATextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    bankInformation[playerid][bATextDrawings][i] = CreatePlayerTextDraw(playerid, 130.000, 132.000, "~g~~h~Banco");
                    PlayerTextDrawLetterSize(playerid, bankInformation[playerid][bATextDrawings][i], 0.349, 1.199);
                    PlayerTextDrawAlignment(playerid, bankInformation[playerid][bATextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, bankInformation[playerid][bATextDrawings][i], 792294655);
                    PlayerTextDrawSetShadow(playerid, bankInformation[playerid][bATextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, bankInformation[playerid][bATextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, bankInformation[playerid][bATextDrawings][i], 33752063);
                    PlayerTextDrawFont(playerid, bankInformation[playerid][bATextDrawings][i], TEXT_DRAW_FONT_3);
                    PlayerTextDrawSetProportional(playerid, bankInformation[playerid][bATextDrawings][i], true);

                    PlayerTextDrawShow(playerid, bankInformation[playerid][bATextDrawings][i]);
                }
            }
            case 2: {
                if (bankInformation[playerid][bATextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    bankInformation[playerid][bATextDrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 149.000, "Saldo_~b~~h~~h~$_%d", bankBalance);
                    PlayerTextDrawLetterSize(playerid, bankInformation[playerid][bATextDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, bankInformation[playerid][bATextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, bankInformation[playerid][bATextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, bankInformation[playerid][bATextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, bankInformation[playerid][bATextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, bankInformation[playerid][bATextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, bankInformation[playerid][bATextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, bankInformation[playerid][bATextDrawings][i], true);

                    PlayerTextDrawShow(playerid, bankInformation[playerid][bATextDrawings][i]);
                }
            }
            case 3: {
                if (bankInformation[playerid][bATextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    bankInformation[playerid][bATextDrawings][i] = CreatePlayerTextDraw(playerid, 60.000, 176.000, "~y~1~w~_-_Depositar");
                    PlayerTextDrawLetterSize(playerid, bankInformation[playerid][bATextDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, bankInformation[playerid][bATextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, bankInformation[playerid][bATextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, bankInformation[playerid][bATextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, bankInformation[playerid][bATextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, bankInformation[playerid][bATextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, bankInformation[playerid][bATextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, bankInformation[playerid][bATextDrawings][i], true);

                    PlayerTextDrawShow(playerid, bankInformation[playerid][bATextDrawings][i]);
                }
            }
            case 4: {
                if (bankInformation[playerid][bATextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    bankInformation[playerid][bATextDrawings][i] = CreatePlayerTextDraw(playerid, 46.000, 193.000, "~y~2~w~_-_Sacar");
                    PlayerTextDrawLetterSize(playerid, bankInformation[playerid][bATextDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, bankInformation[playerid][bATextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, bankInformation[playerid][bATextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, bankInformation[playerid][bATextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, bankInformation[playerid][bATextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, bankInformation[playerid][bATextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, bankInformation[playerid][bATextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, bankInformation[playerid][bATextDrawings][i], true);

                    PlayerTextDrawShow(playerid, bankInformation[playerid][bATextDrawings][i]);
                }
            }
            case 5: {
                if (bankInformation[playerid][bATextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    bankInformation[playerid][bATextDrawings][i] = CreatePlayerTextDraw(playerid, 142.000, 210.000, "~y~3~w~_-_Seguro_De_Vida________~g~$40,000");
                    PlayerTextDrawLetterSize(playerid, bankInformation[playerid][bATextDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, bankInformation[playerid][bATextDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, bankInformation[playerid][bATextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, bankInformation[playerid][bATextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, bankInformation[playerid][bATextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, bankInformation[playerid][bATextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, bankInformation[playerid][bATextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, bankInformation[playerid][bATextDrawings][i], true);

                    PlayerTextDrawShow(playerid, bankInformation[playerid][bATextDrawings][i]);
                }
            }
            case 6: {
                if (bankInformation[playerid][bATextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    bankInformation[playerid][bATextDrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 232.000, "Preciona_~y~F6~w~_(~y~T~w~)_y_selecciona_un_numero");
                    PlayerTextDrawLetterSize(playerid, bankInformation[playerid][bATextDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, bankInformation[playerid][bATextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, bankInformation[playerid][bATextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, bankInformation[playerid][bATextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, bankInformation[playerid][bATextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, bankInformation[playerid][bATextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, bankInformation[playerid][bATextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, bankInformation[playerid][bATextDrawings][i], true);

                    PlayerTextDrawShow(playerid, bankInformation[playerid][bATextDrawings][i]);
                }
            }
            case 7: {
                if (bankInformation[playerid][bATextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    bankInformation[playerid][bATextDrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 246.000, "Presiona_~y~BIR~w~_para_cerrar");
                    PlayerTextDrawLetterSize(playerid, bankInformation[playerid][bATextDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, bankInformation[playerid][bATextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, bankInformation[playerid][bATextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, bankInformation[playerid][bATextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, bankInformation[playerid][bATextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, bankInformation[playerid][bATextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, bankInformation[playerid][bATextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, bankInformation[playerid][bATextDrawings][i], true);

                    PlayerTextDrawShow(playerid, bankInformation[playerid][bATextDrawings][i]);
                }
            }
        }
    }
    return 1;
}