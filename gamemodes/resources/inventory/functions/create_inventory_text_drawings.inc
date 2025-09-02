forward CreateInventoryTextDrawings(const playerid, const _cashInTheBank[], const _diseases[], const _lifeInsurance[], const _drugs[], const _drugged[], const _condoms[], const _aspirin[]);
public CreateInventoryTextDrawings(const playerid, const _cashInTheBank[], const _diseases[], const _lifeInsurance[], const _drugs[], const _drugged[], const _condoms[], const _aspirin[]) {
    for (new i = 0; i < 12; i++) {
        switch (i) {
            case 0: {
                if (inventoryInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    inventoryInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 6.000, 105.000, "LD_SPAC:black");
                    PlayerTextDrawTextSize(playerid, inventoryInformation[playerid][textDrawings][i], 250.000, 222.000);
                    PlayerTextDrawAlignment(playerid, inventoryInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, inventoryInformation[playerid][textDrawings][i], -81);
                    PlayerTextDrawSetShadow(playerid, inventoryInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, inventoryInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawBackgroundColour(playerid, inventoryInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, inventoryInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_SPRITE_DRAW);
                    PlayerTextDrawSetProportional(playerid, inventoryInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid,  inventoryInformation[playerid][textDrawings][i]);
                }
            }
            case 1: {
                if (inventoryInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    inventoryInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 130.000, 111.000, "Inventario");
                    PlayerTextDrawLetterSize(playerid, inventoryInformation[playerid][textDrawings][i], 0.349, 1.199);
                    PlayerTextDrawAlignment(playerid, inventoryInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, inventoryInformation[playerid][textDrawings][i], 792294655);
                    PlayerTextDrawSetShadow(playerid, inventoryInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, inventoryInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, inventoryInformation[playerid][textDrawings][i], 33752063);
                    PlayerTextDrawFont(playerid, inventoryInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_3);
                    PlayerTextDrawSetProportional(playerid, inventoryInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid,  inventoryInformation[playerid][textDrawings][i]);
                }
            }
            case 2: {
                if (inventoryInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    inventoryInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 164.000, _diseases);
                    PlayerTextDrawLetterSize(playerid, inventoryInformation[playerid][textDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, inventoryInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, inventoryInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, inventoryInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, inventoryInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, inventoryInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, inventoryInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, inventoryInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid,  inventoryInformation[playerid][textDrawings][i]);
                } else {
                    PlayerTextDrawSetString(playerid, inventoryInformation[playerid][textDrawings][i], _diseases);
                }
            }
            case 3: {
                if (inventoryInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    inventoryInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 142.000, _cashInTheBank);
                    PlayerTextDrawLetterSize(playerid, inventoryInformation[playerid][textDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, inventoryInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, inventoryInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, inventoryInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, inventoryInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, inventoryInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, inventoryInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, inventoryInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid,  inventoryInformation[playerid][textDrawings][i]);
                } else {
                    PlayerTextDrawSetString(playerid, inventoryInformation[playerid][textDrawings][i], _cashInTheBank);
                }
            }
            case 4: {
                if (inventoryInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    inventoryInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 190.000, _lifeInsurance);
                    PlayerTextDrawLetterSize(playerid, inventoryInformation[playerid][textDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, inventoryInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, inventoryInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, inventoryInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, inventoryInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, inventoryInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, inventoryInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, inventoryInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid,  inventoryInformation[playerid][textDrawings][i]);
                } else {
                    PlayerTextDrawSetString(playerid, inventoryInformation[playerid][textDrawings][i], _lifeInsurance);
                }
            }
            case 5: {
                if (inventoryInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    inventoryInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 201.000, _drugs);
                    PlayerTextDrawLetterSize(playerid, inventoryInformation[playerid][textDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, inventoryInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, inventoryInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, inventoryInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, inventoryInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, inventoryInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, inventoryInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, inventoryInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid,  inventoryInformation[playerid][textDrawings][i]);
                } else {
                    PlayerTextDrawSetString(playerid, inventoryInformation[playerid][textDrawings][i], _drugs);
                }
            }
            case 6: {
                if (inventoryInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    inventoryInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 212.000, _drugged);
                    PlayerTextDrawLetterSize(playerid, inventoryInformation[playerid][textDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, inventoryInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, inventoryInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, inventoryInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, inventoryInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, inventoryInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, inventoryInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, inventoryInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid,  inventoryInformation[playerid][textDrawings][i]);
                } else {
                    PlayerTextDrawSetString(playerid, inventoryInformation[playerid][textDrawings][i], _drugged);
                }
            }
            case 7: {
                if (inventoryInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    inventoryInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 223.000, "Tacos:_~g~0");
                    PlayerTextDrawLetterSize(playerid, inventoryInformation[playerid][textDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, inventoryInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, inventoryInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, inventoryInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, inventoryInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, inventoryInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, inventoryInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, inventoryInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid,  inventoryInformation[playerid][textDrawings][i]);
                }
            }
            case 8: {
                if (inventoryInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    inventoryInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 234.000, "Bombas:_~g~0");
                    PlayerTextDrawLetterSize(playerid, inventoryInformation[playerid][textDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, inventoryInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, inventoryInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, inventoryInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, inventoryInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, inventoryInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, inventoryInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, inventoryInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid,  inventoryInformation[playerid][textDrawings][i]);
                }
            }
            case 9: {
                if (inventoryInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    inventoryInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 245.000, _condoms);
                    PlayerTextDrawLetterSize(playerid, inventoryInformation[playerid][textDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, inventoryInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, inventoryInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, inventoryInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, inventoryInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, inventoryInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, inventoryInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, inventoryInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid,  inventoryInformation[playerid][textDrawings][i]);
                } else {
                    PlayerTextDrawSetString(playerid, inventoryInformation[playerid][textDrawings][i], _condoms);
                }
            }
            case 10: {
                if (inventoryInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    inventoryInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 256.000, _aspirin);
                    PlayerTextDrawLetterSize(playerid, inventoryInformation[playerid][textDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, inventoryInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, inventoryInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, inventoryInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, inventoryInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, inventoryInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, inventoryInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, inventoryInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid,  inventoryInformation[playerid][textDrawings][i]);
                } else {
                    PlayerTextDrawSetString(playerid, inventoryInformation[playerid][textDrawings][i], _aspirin);
                }
            }
            case 11: {
                if (inventoryInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    inventoryInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 312.000, "Presiona_~y~BIR~w~_para_cerrar");
                    PlayerTextDrawLetterSize(playerid, inventoryInformation[playerid][textDrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, inventoryInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, inventoryInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, inventoryInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, inventoryInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, inventoryInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, inventoryInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, inventoryInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid,  inventoryInformation[playerid][textDrawings][i]);
                }
            }
        }
    }
    return 1;
}