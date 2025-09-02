forward CreateStatisticsTextDrawings(playerid, const _name[], const _deaths[], const _killings[], const _level[], const _range[], const _clanName[], const _clanColor);
public CreateStatisticsTextDrawings(playerid, const _name[], const _deaths[], const _killings[], const _level[], const _range[], const _clanName[], const _clanColor) {
    for (new i = 0; i < 7; i++) {
        switch (i) {
            case 0: {
                if (statisticsInformation[playerid][statisticsTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    statisticsInformation[playerid][statisticsTextDrawings][i] = CreatePlayerTextDraw(playerid, 490.000, 323.000, "LD_SPAC:black");
                    PlayerTextDrawTextSize(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], 121.000, 83.000);
                    PlayerTextDrawAlignment(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], -96);
                    PlayerTextDrawSetShadow(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], 0);
                    PlayerTextDrawBackgroundColour(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], TEXT_DRAW_FONT_SPRITE_DRAW);
                    PlayerTextDrawSetProportional(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], true);

                    PlayerTextDrawShow(playerid,  statisticsInformation[playerid][statisticsTextDrawings][i]);
                }
            }
            case 1: {
                if (statisticsInformation[playerid][statisticsTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    statisticsInformation[playerid][statisticsTextDrawings][i] = CreatePlayerTextDraw(playerid, 550.000, 331.000, _name);
                    PlayerTextDrawLetterSize(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], 0.250, 0.999);
                    PlayerTextDrawAlignment(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], 1);
                    PlayerTextDrawSetOutline(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], 150);
                    PlayerTextDrawFont(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], TEXT_DRAW_FONT_2);
                    PlayerTextDrawSetProportional(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], true);

                    PlayerTextDrawShow(playerid,  statisticsInformation[playerid][statisticsTextDrawings][i]);
                } else {
                    PlayerTextDrawSetString(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], _name);
                }
            }
            case 2: {
                if (statisticsInformation[playerid][statisticsTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    statisticsInformation[playerid][statisticsTextDrawings][i] = CreatePlayerTextDraw(playerid, 551.000, 344.000, _deaths);
                    PlayerTextDrawLetterSize(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], 0.220, 0.999);
                    PlayerTextDrawAlignment(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], 1);
                    PlayerTextDrawSetOutline(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], 150);
                    PlayerTextDrawFont(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], TEXT_DRAW_FONT_2);
                    PlayerTextDrawSetProportional(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], true);

                    PlayerTextDrawShow(playerid,  statisticsInformation[playerid][statisticsTextDrawings][i]);
                } else {
                    PlayerTextDrawSetString(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], _deaths);
                }
            }
            case 3: {
                if (statisticsInformation[playerid][statisticsTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    statisticsInformation[playerid][statisticsTextDrawings][i] = CreatePlayerTextDraw(playerid, 552.000, 354.000, _killings);
                    PlayerTextDrawLetterSize(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], 0.200, 1.099);
                    PlayerTextDrawAlignment(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], 1);
                    PlayerTextDrawSetOutline(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], 150);
                    PlayerTextDrawFont(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], TEXT_DRAW_FONT_2);
                    PlayerTextDrawSetProportional(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], true);

                    PlayerTextDrawShow(playerid,  statisticsInformation[playerid][statisticsTextDrawings][i]);
                } else {
                    PlayerTextDrawSetString(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], _killings);
                }
            }
            case 4: {
                if (statisticsInformation[playerid][statisticsTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    statisticsInformation[playerid][statisticsTextDrawings][i] = CreatePlayerTextDraw(playerid, 551.000, 364.000, _level);
                    PlayerTextDrawLetterSize(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], 0.200, 0.999);
                    PlayerTextDrawAlignment(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], 1);
                    PlayerTextDrawSetOutline(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], 150);
                    PlayerTextDrawFont(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], TEXT_DRAW_FONT_2);
                    PlayerTextDrawSetProportional(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], true);

                    PlayerTextDrawShow(playerid,  statisticsInformation[playerid][statisticsTextDrawings][i]);
                } else {
                    PlayerTextDrawSetString(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], _level);
                }
            }
            case 5: {
                if (statisticsInformation[playerid][statisticsTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    statisticsInformation[playerid][statisticsTextDrawings][i] = CreatePlayerTextDraw(playerid, 553.000, 374.000, _range);
                    PlayerTextDrawLetterSize(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], 0.189, 0.999);
                    PlayerTextDrawAlignment(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], 1);
                    PlayerTextDrawSetOutline(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], 150);
                    PlayerTextDrawFont(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], TEXT_DRAW_FONT_2);
                    PlayerTextDrawSetProportional(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], true);

                    PlayerTextDrawShow(playerid,  statisticsInformation[playerid][statisticsTextDrawings][i]);
                } else {
                    PlayerTextDrawSetString(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], _range);
                }
            }
            case 6: {
                if (statisticsInformation[playerid][statisticsTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    statisticsInformation[playerid][statisticsTextDrawings][i] = CreatePlayerTextDraw(playerid, 552.000, 385.000, _clanName);
                    PlayerTextDrawLetterSize(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], 0.200, 0.999);
                    PlayerTextDrawAlignment(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], _clanColor);
                    PlayerTextDrawSetShadow(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], 1);
                    PlayerTextDrawSetOutline(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], 150);
                    PlayerTextDrawFont(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], TEXT_DRAW_FONT_2);
                    PlayerTextDrawSetProportional(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], true);

                    PlayerTextDrawShow(playerid,  statisticsInformation[playerid][statisticsTextDrawings][i]);
                } else {
                    PlayerTextDrawSetString(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], _clanName);
                    PlayerTextDrawColour(playerid, statisticsInformation[playerid][statisticsTextDrawings][i], _clanColor);
                    PlayerTextDrawShow(playerid,  statisticsInformation[playerid][statisticsTextDrawings][i]);
                }
            }
        }
    }
    return 1;
}