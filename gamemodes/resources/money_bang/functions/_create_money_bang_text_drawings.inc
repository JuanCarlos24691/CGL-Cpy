forward CreateMoneyBangTextDrawings(const playerid, const _moneyBangLocation[]);
public CreateMoneyBangTextDrawings(const playerid, const _moneyBangLocation[]) {
    for (new i = 0; i < 7; i++) {
        switch (i) {
            case 0: {
                if (moneyBangTextDrawings[playerid][i] == PlayerText:INVALID_TEXT_DRAW) {
                    moneyBangTextDrawings[playerid][i] = CreatePlayerTextDraw(playerid, 6.000, 115.000, "LD_SPAC:black");
                    PlayerTextDrawTextSize(playerid, moneyBangTextDrawings[playerid][i], 250.000, 114.000);
                    PlayerTextDrawAlignment(playerid, moneyBangTextDrawings[playerid][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, moneyBangTextDrawings[playerid][i], -87);
                    PlayerTextDrawSetShadow(playerid, moneyBangTextDrawings[playerid][i], 0);
                    PlayerTextDrawSetOutline(playerid, moneyBangTextDrawings[playerid][i], 0);
                    PlayerTextDrawBackgroundColour(playerid, moneyBangTextDrawings[playerid][i], 255);
                    PlayerTextDrawFont(playerid, moneyBangTextDrawings[playerid][i], TEXT_DRAW_FONT_SPRITE_DRAW);
                    PlayerTextDrawSetProportional(playerid, moneyBangTextDrawings[playerid][i], true);

                    PlayerTextDrawShow(playerid, moneyBangTextDrawings[playerid][i]);
                }
            }
            case 1: {
                if (moneyBangTextDrawings[playerid][i] == PlayerText:INVALID_TEXT_DRAW) {
                    moneyBangTextDrawings[playerid][i] = CreatePlayerTextDraw(playerid, 130.000, 124.000, "~g~Money_bang");
                    PlayerTextDrawLetterSize(playerid, moneyBangTextDrawings[playerid][i], 0.349, 1.199);
                    PlayerTextDrawAlignment(playerid, moneyBangTextDrawings[playerid][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, moneyBangTextDrawings[playerid][i], 792294655);
                    PlayerTextDrawSetShadow(playerid, moneyBangTextDrawings[playerid][i], 0);
                    PlayerTextDrawSetOutline(playerid, moneyBangTextDrawings[playerid][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, moneyBangTextDrawings[playerid][i], 33752063);
                    PlayerTextDrawFont(playerid, moneyBangTextDrawings[playerid][i], TEXT_DRAW_FONT_3);
                    PlayerTextDrawSetProportional(playerid, moneyBangTextDrawings[playerid][i], true);

                    PlayerTextDrawShow(playerid, moneyBangTextDrawings[playerid][i]);
                }
            }
            case 2: {
                if (moneyBangTextDrawings[playerid][i] == PlayerText:INVALID_TEXT_DRAW) {
                    moneyBangTextDrawings[playerid][i] = CreatePlayerTextDraw(playerid, 131.000, 151.000, "~w~A_~p~La Mafia_~w~Se_Le_Perdio");
                    PlayerTextDrawLetterSize(playerid, moneyBangTextDrawings[playerid][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, moneyBangTextDrawings[playerid][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, moneyBangTextDrawings[playerid][i], -1);
                    PlayerTextDrawSetShadow(playerid, moneyBangTextDrawings[playerid][i], 0);
                    PlayerTextDrawSetOutline(playerid, moneyBangTextDrawings[playerid][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, moneyBangTextDrawings[playerid][i], 255);
                    PlayerTextDrawFont(playerid, moneyBangTextDrawings[playerid][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, moneyBangTextDrawings[playerid][i], true);

                    PlayerTextDrawShow(playerid, moneyBangTextDrawings[playerid][i]);
                }
            }
            case 3: {
                if (moneyBangTextDrawings[playerid][i] == PlayerText:INVALID_TEXT_DRAW) {
                    moneyBangTextDrawings[playerid][i] = CreatePlayerTextDraw(playerid, 131.000, 162.000, "Una_~g~Bolsa_Con_Dinero_~w~En_Algun_Lugar_De");
                    PlayerTextDrawLetterSize(playerid, moneyBangTextDrawings[playerid][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, moneyBangTextDrawings[playerid][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, moneyBangTextDrawings[playerid][i], -1);
                    PlayerTextDrawSetShadow(playerid, moneyBangTextDrawings[playerid][i], 0);
                    PlayerTextDrawSetOutline(playerid, moneyBangTextDrawings[playerid][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, moneyBangTextDrawings[playerid][i], 255);
                    PlayerTextDrawFont(playerid, moneyBangTextDrawings[playerid][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, moneyBangTextDrawings[playerid][i], true);

                    PlayerTextDrawShow(playerid, moneyBangTextDrawings[playerid][i]);
                }
            }
            case 4: {
                if (moneyBangTextDrawings[playerid][i] == PlayerText:INVALID_TEXT_DRAW) {
                    moneyBangTextDrawings[playerid][i] = CreatePlayerTextDraw(playerid, 131.000, 173.000, _moneyBangLocation);
                    PlayerTextDrawLetterSize(playerid, moneyBangTextDrawings[playerid][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, moneyBangTextDrawings[playerid][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, moneyBangTextDrawings[playerid][i], -1);
                    PlayerTextDrawSetShadow(playerid, moneyBangTextDrawings[playerid][i], 0);
                    PlayerTextDrawSetOutline(playerid, moneyBangTextDrawings[playerid][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, moneyBangTextDrawings[playerid][i], 255);
                    PlayerTextDrawFont(playerid, moneyBangTextDrawings[playerid][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, moneyBangTextDrawings[playerid][i], true);

                    PlayerTextDrawShow(playerid, moneyBangTextDrawings[playerid][i]);
                } else {
                    PlayerTextDrawSetString(playerid, moneyBangTextDrawings[playerid][i], _moneyBangLocation);
                }
            }
            case 5: {
                if (moneyBangTextDrawings[playerid][i] == PlayerText:INVALID_TEXT_DRAW) {
                    moneyBangTextDrawings[playerid][i] = CreatePlayerTextDraw(playerid, 131.000, 193.000, "~y~Encuentralo_~w~Antes_Que_Otro!");
                    PlayerTextDrawLetterSize(playerid, moneyBangTextDrawings[playerid][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, moneyBangTextDrawings[playerid][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, moneyBangTextDrawings[playerid][i], -1);
                    PlayerTextDrawSetShadow(playerid, moneyBangTextDrawings[playerid][i], 0);
                    PlayerTextDrawSetOutline(playerid, moneyBangTextDrawings[playerid][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, moneyBangTextDrawings[playerid][i], 255);
                    PlayerTextDrawFont(playerid, moneyBangTextDrawings[playerid][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, moneyBangTextDrawings[playerid][i], true);

                    PlayerTextDrawShow(playerid, moneyBangTextDrawings[playerid][i]);
                }
            }
            case 6: {
                if (moneyBangTextDrawings[playerid][i] == PlayerText:INVALID_TEXT_DRAW) {
                    moneyBangTextDrawings[playerid][i] = CreatePlayerTextDraw(playerid, 131.000, 210.000, "Presiona_~y~BIR~w~_para_cerrar");
                    PlayerTextDrawLetterSize(playerid, moneyBangTextDrawings[playerid][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, moneyBangTextDrawings[playerid][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, moneyBangTextDrawings[playerid][i], -1);
                    PlayerTextDrawSetShadow(playerid, moneyBangTextDrawings[playerid][i], 0);
                    PlayerTextDrawSetOutline(playerid, moneyBangTextDrawings[playerid][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, moneyBangTextDrawings[playerid][i], 255);
                    PlayerTextDrawFont(playerid, moneyBangTextDrawings[playerid][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, moneyBangTextDrawings[playerid][i], true);

                    PlayerTextDrawShow(playerid, moneyBangTextDrawings[playerid][i]);
                }
            }
        }
    }
    return 1;
}