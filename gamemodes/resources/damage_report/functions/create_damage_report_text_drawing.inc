forward CreateDamageReportTextDrawing(const playerid, const damage[], const _name[], const weapon[]);
public CreateDamageReportTextDrawing(const playerid, const damage[], const _name[], const weapon[]) {
    for (new i = 0; i < 6; i++) {
        switch (i) {
            case 0: {
                if (damageReportInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    damageReportInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 372.000, 240.000, "PARTICLE:bloodpool_64");
                    PlayerTextDrawTextSize(playerid, damageReportInformation[playerid][textDrawings][i], 27.000, 24.000);
                    PlayerTextDrawAlignment(playerid, damageReportInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, damageReportInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, damageReportInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, damageReportInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawBackgroundColour(playerid, damageReportInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, damageReportInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_SPRITE_DRAW);
                    PlayerTextDrawSetProportional(playerid, damageReportInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid,  damageReportInformation[playerid][textDrawings][i]);
                }
            }
            case 1: {
                if (damageReportInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    damageReportInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 411.000, 246.000, "PARTICLE:bloodpool_64");
                    PlayerTextDrawTextSize(playerid, damageReportInformation[playerid][textDrawings][i], 24.000, 22.000);
                    PlayerTextDrawAlignment(playerid, damageReportInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, damageReportInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, damageReportInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, damageReportInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawBackgroundColour(playerid, damageReportInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, damageReportInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_SPRITE_DRAW);
                    PlayerTextDrawSetProportional(playerid, damageReportInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid,  damageReportInformation[playerid][textDrawings][i]);
                }
            }
            case 2: {
                if (damageReportInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    damageReportInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 408.000, 238.000, "~y~Buen_tiro!");
                    PlayerTextDrawLetterSize(playerid, damageReportInformation[playerid][textDrawings][i], 0.187, 0.796);
                    PlayerTextDrawAlignment(playerid, damageReportInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, damageReportInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, damageReportInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, damageReportInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, damageReportInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, damageReportInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, damageReportInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid,  damageReportInformation[playerid][textDrawings][i]);
                }
            }
            case 3: {
                if (damageReportInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    damageReportInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 393.000, 247.000, damage);
                    PlayerTextDrawLetterSize(playerid, damageReportInformation[playerid][textDrawings][i], 0.187, 0.796);
                    PlayerTextDrawAlignment(playerid, damageReportInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_RIGHT);
                    PlayerTextDrawColour(playerid, damageReportInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, damageReportInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, damageReportInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, damageReportInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, damageReportInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, damageReportInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid,  damageReportInformation[playerid][textDrawings][i]);
                }
            }
            case 4: {
                if (damageReportInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    damageReportInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 396.000, 247.000, _name);
                    PlayerTextDrawLetterSize(playerid, damageReportInformation[playerid][textDrawings][i], 0.187, 0.796);
                    PlayerTextDrawAlignment(playerid, damageReportInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, damageReportInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, damageReportInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, damageReportInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, damageReportInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, damageReportInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, damageReportInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid,  damageReportInformation[playerid][textDrawings][i]);
                }
            }
            case 5: {
                if (damageReportInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    damageReportInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 409.000, 255.000, weapon);
                    PlayerTextDrawLetterSize(playerid, damageReportInformation[playerid][textDrawings][i], 0.187, 0.796);
                    PlayerTextDrawAlignment(playerid, damageReportInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, damageReportInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, damageReportInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, damageReportInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, damageReportInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, damageReportInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, damageReportInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid,  damageReportInformation[playerid][textDrawings][i]);
                }
            }
        }
    }
    return 1;
}