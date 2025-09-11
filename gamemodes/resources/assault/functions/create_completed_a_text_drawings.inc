forward CreateCompletedATextDrawings(const playerid, const hidingplace[]);
public CreateCompletedATextDrawings(const playerid, const hidingplace[]) {
    for (new i = 0; i < 6; i++) {
        switch (i) {
            case 0: {
                if (assaultPlayerInformation[playerid][cTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    assaultPlayerInformation[playerid][cTextDrawings][i] = CreatePlayerTextDraw(playerid, 22.000, 113.000, "LD_SPAC:black");
                    PlayerTextDrawTextSize(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], 227.000, 197.000);
                    PlayerTextDrawAlignment(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], -96);
                    PlayerTextDrawSetShadow(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], 0);
                    PlayerTextDrawBackgroundColour(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], 255);
                    PlayerTextDrawFont(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], TEXT_DRAW_FONT_SPRITE_DRAW);
                    PlayerTextDrawSetProportional(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, assaultPlayerInformation[playerid][cTextDrawings][i]);
                }
            }
            case 1: {
                if (assaultPlayerInformation[playerid][cTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    assaultPlayerInformation[playerid][cTextDrawings][i] = CreatePlayerTextDraw(playerid, 137.000, 125.000, "~g~ASALTO");
                    PlayerTextDrawLetterSize(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], 0.409, 1.098);
                    PlayerTextDrawAlignment(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], 1);
                    PlayerTextDrawSetOutline(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], 150);
                    PlayerTextDrawFont(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], TEXT_DRAW_FONT_3);
                    PlayerTextDrawSetProportional(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, assaultPlayerInformation[playerid][cTextDrawings][i]);
                }
            }
            case 2: {
                if (assaultPlayerInformation[playerid][cTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    assaultPlayerInformation[playerid][cTextDrawings][i] = CreatePlayerTextDraw(playerid, 135.000, 144.000, "Completaste_El_Robo~n~Tienes_~g~3_Minutos,_~w~Para~n~Llegar_Al_Lugar~n~Entrar_En_El_~r~Checkpoint_~w~Para_Cobrar_El_Dinero");
                    PlayerTextDrawLetterSize(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], 0.250, 1.098);
                    PlayerTextDrawAlignment(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], 1);
                    PlayerTextDrawSetOutline(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], 150);
                    PlayerTextDrawFont(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, assaultPlayerInformation[playerid][cTextDrawings][i]);
                }
            }
            case 3: {
                if (assaultPlayerInformation[playerid][cTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    new string[128];
                    format(string, sizeof(string), "Lugar_Del_Escondite:~n~~p~%s", hidingplace);

                    assaultPlayerInformation[playerid][cTextDrawings][i] = CreatePlayerTextDraw(playerid, 135.000, 195.000, string);
                    PlayerTextDrawLetterSize(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], 0.250, 1.098);
                    PlayerTextDrawAlignment(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], 1);
                    PlayerTextDrawSetOutline(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], 150);
                    PlayerTextDrawFont(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, assaultPlayerInformation[playerid][cTextDrawings][i]);
                }
            }
            case 4: {
                if (assaultPlayerInformation[playerid][cTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    assaultPlayerInformation[playerid][cTextDrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 232.000, "Presiona_~y~2_~W~O_Escribe_~y~/robar_~w~Para_Ver~n~El_Lugar_Nuevamente");
                    PlayerTextDrawLetterSize(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], 0.250, 1.098);
                    PlayerTextDrawAlignment(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], 1);
                    PlayerTextDrawSetOutline(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], 150);
                    PlayerTextDrawFont(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, assaultPlayerInformation[playerid][cTextDrawings][i]);
                }
            }
            case 5: {
                if (assaultPlayerInformation[playerid][cTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    assaultPlayerInformation[playerid][cTextDrawings][i] = CreatePlayerTextDraw(playerid, 137.000, 283.000, "Presiona_~y~BIR_~w~Para Cerrar");
                    PlayerTextDrawLetterSize(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], 0.270, 1.098);
                    PlayerTextDrawAlignment(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], 1);
                    PlayerTextDrawSetOutline(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], 150);
                    PlayerTextDrawFont(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, assaultPlayerInformation[playerid][cTextDrawings][i], true);

                    PlayerTextDrawShow(playerid, assaultPlayerInformation[playerid][cTextDrawings][i]);
                }
            }
        }
    }
    return 1;
}