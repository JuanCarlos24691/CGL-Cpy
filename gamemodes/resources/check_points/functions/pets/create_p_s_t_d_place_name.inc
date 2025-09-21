forward CreatePSTDPlaceName(const playerid, const petType);
public CreatePSTDPlaceName(const playerid, const petType) {
    RestoreGlobalTextDrawings(playerid);

    for (new i = 0; i < 4; i++) {
        switch (i) {
            case 0: {
                if (petsInformation[playerid][pSTDPlaceName][i] == PlayerText:INVALID_TEXT_DRAW) {
                    petsInformation[playerid][pSTDPlaceName][i] = CreatePlayerTextDraw(playerid, 3.000, 112.000, "LD_SPAC:black");
                    PlayerTextDrawTextSize(playerid, petsInformation[playerid][pSTDPlaceName][i], 260.000, 82.000);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDPlaceName][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDPlaceName][i], -106);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDPlaceName][i], 0);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDPlaceName][i], 0);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDPlaceName][i], 255);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDPlaceName][i], TEXT_DRAW_FONT_SPRITE_DRAW);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDPlaceName][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDPlaceName][i]);
                }
            }
            case 1: {
                if (petsInformation[playerid][pSTDPlaceName][i] == PlayerText:INVALID_TEXT_DRAW)  {
                    new string[24];
                    format(string, sizeof(string), "~b~%s", typeOfPetsNames[petType]);

                    petsInformation[playerid][pSTDPlaceName][i] = CreatePlayerTextDraw(playerid, 95.000, 123.000, string);
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDPlaceName][i], 0.469, 1.299);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDPlaceName][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDPlaceName][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDPlaceName][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDPlaceName][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDPlaceName][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDPlaceName][i], TEXT_DRAW_FONT_3);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDPlaceName][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDPlaceName][i]);
                }
            }
            case 2: {
                if (petsInformation[playerid][pSTDPlaceName][i] == PlayerText:INVALID_TEXT_DRAW)  {
                    petsInformation[playerid][pSTDPlaceName][i] = CreatePlayerTextDraw(playerid, 89.000, 146.000, "~p~Comprando_Mascota");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDPlaceName][i], 0.250, 0.999);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDPlaceName][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDPlaceName][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDPlaceName][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDPlaceName][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDPlaceName][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDPlaceName][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDPlaceName][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDPlaceName][i]);
                }
            }
            case 3: {
                if (petsInformation[playerid][pSTDPlaceName][i] == PlayerText:INVALID_TEXT_DRAW)  {
                    petsInformation[playerid][pSTDPlaceName][i] = CreatePlayerTextDraw(playerid, 33.000, 163.000, "Presiona_~y~T_~w~y_escribe_un_nombre_a_tu_mascota.");
                    PlayerTextDrawLetterSize(playerid, petsInformation[playerid][pSTDPlaceName][i], 0.240, 0.999);
                    PlayerTextDrawAlignment(playerid, petsInformation[playerid][pSTDPlaceName][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, petsInformation[playerid][pSTDPlaceName][i], -1);
                    PlayerTextDrawSetShadow(playerid, petsInformation[playerid][pSTDPlaceName][i], 1);
                    PlayerTextDrawSetOutline(playerid, petsInformation[playerid][pSTDPlaceName][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, petsInformation[playerid][pSTDPlaceName][i], 150);
                    PlayerTextDrawFont(playerid, petsInformation[playerid][pSTDPlaceName][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, petsInformation[playerid][pSTDPlaceName][i], true);

                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTDPlaceName][i]);
                }
            }
        }
    }
    return 1;
}