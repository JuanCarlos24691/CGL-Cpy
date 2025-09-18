forward CreateMBTextDrawings(const playerid, const locationOfTheMoneyBag[]);
public CreateMBTextDrawings(const playerid, const locationOfTheMoneyBag[]) {
    RestoreGlobalTextDrawings(playerid);

    for (new i = 0; i < 7; i++) {
        switch (i) {
            case 0: {
                if (moneyBangPlayerInformation[playerid][mBTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    moneyBangPlayerInformation[playerid][mBTextDrawings][i] = CreatePlayerTextDraw(playerid, 6.000, 115.000, "LD_SPAC:black");
                    PlayerTextDrawTextSize(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], 250.000, 114.000);
                    PlayerTextDrawAlignment(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], -87);
                    PlayerTextDrawSetShadow(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], 0);
                    PlayerTextDrawBackgroundColour(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], TEXT_DRAW_FONT_SPRITE_DRAW);
                    PlayerTextDrawSetProportional(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i]);
                }
            }
            case 1: {
                if (moneyBangPlayerInformation[playerid][mBTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    moneyBangPlayerInformation[playerid][mBTextDrawings][i] = CreatePlayerTextDraw(playerid, 130.000, 124.000, "~g~Money_bang");
                    PlayerTextDrawLetterSize(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], 0.349, 1.199);
                    PlayerTextDrawAlignment(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], 792294655);
                    PlayerTextDrawSetShadow(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], 33752063);
                    PlayerTextDrawFont(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], TEXT_DRAW_FONT_3);
                    PlayerTextDrawSetProportional(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i]);
                }
            }
            case 2: {
                if (moneyBangPlayerInformation[playerid][mBTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    moneyBangPlayerInformation[playerid][mBTextDrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 151.000, "~w~A_~p~La Mafia_~w~Se_Le_Perdio");
                    PlayerTextDrawLetterSize(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i]);
                }
            }
            case 3: {
                if (moneyBangPlayerInformation[playerid][mBTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    moneyBangPlayerInformation[playerid][mBTextDrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 162.000, "Una_~g~Bolsa_Con_Dinero_~w~En_Algun_Lugar_De");
                    PlayerTextDrawLetterSize(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i]);
                }
            }
            case 4: {
                if (moneyBangPlayerInformation[playerid][mBTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    moneyBangPlayerInformation[playerid][mBTextDrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 173.000, locationOfTheMoneyBag);
                    PlayerTextDrawLetterSize(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i]);
                } else {
                    PlayerTextDrawSetString(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], locationOfTheMoneyBag);
                }
            }
            case 5: {
                if (moneyBangPlayerInformation[playerid][mBTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    moneyBangPlayerInformation[playerid][mBTextDrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 193.000, "~y~Encuentralo_~w~Antes_Que_Otro!");
                    PlayerTextDrawLetterSize(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i]);
                }
            }
            case 6: {
                if (moneyBangPlayerInformation[playerid][mBTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    moneyBangPlayerInformation[playerid][mBTextDrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 210.000, "Presiona_~y~BIR~w~_para_cerrar");
                    PlayerTextDrawLetterSize(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, moneyBangPlayerInformation[playerid][mBTextDrawings][i]);
                }
            }
        }
    }
    return 1;
}