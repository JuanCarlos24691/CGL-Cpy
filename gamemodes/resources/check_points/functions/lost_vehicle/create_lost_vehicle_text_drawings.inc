forward CreateLostVehicleTextDrawings(const playerid, const vehicleName[]);
public CreateLostVehicleTextDrawings(const playerid, const vehicleName[]) {
    for (new i = 0; i < 6; i++) {
        switch (i) {
            case 0: {
                if (lostVehiclePlayerInformation[playerid][lVTextdrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    lostVehiclePlayerInformation[playerid][lVTextdrawings][i] = CreatePlayerTextDraw(playerid, 6.000, 115.000, "LD_SPAC:black");
                    PlayerTextDrawTextSize(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], 250.000, 114.000);
                    PlayerTextDrawAlignment(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], -87);
                    PlayerTextDrawSetShadow(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], 0);
                    PlayerTextDrawBackgroundColour(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], 255);
                    PlayerTextDrawFont(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], TEXT_DRAW_FONT_SPRITE_DRAW);
                    PlayerTextDrawSetProportional(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], true);

                    PlayerTextDrawShow(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i]);
                }
            }
            case 1: {
                if (lostVehiclePlayerInformation[playerid][lVTextdrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    lostVehiclePlayerInformation[playerid][lVTextdrawings][i] = CreatePlayerTextDraw(playerid, 130.000, 124.000, "~g~Vehiculo_perdido");
                    PlayerTextDrawLetterSize(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], 0.349, 1.199);
                    PlayerTextDrawAlignment(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], 792294655);
                    PlayerTextDrawSetShadow(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], 33752063);
                    PlayerTextDrawFont(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], TEXT_DRAW_FONT_3);
                    PlayerTextDrawSetProportional(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], true);

                    PlayerTextDrawShow(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i]);
                }
            }
            case 2: {
                if (lostVehiclePlayerInformation[playerid][lVTextdrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    lostVehiclePlayerInformation[playerid][lVTextdrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 151.000, "~w~A~p~_Karl_Benz~w~_Se_Le_Perdio_Un_Vehiculo");
                    PlayerTextDrawLetterSize(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], 255);
                    PlayerTextDrawFont(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], true);

                    PlayerTextDrawShow(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i]);
                }
            }
            case 3: {
                if (lostVehiclePlayerInformation[playerid][lVTextdrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    new string[128];
                    format(string, sizeof(string), "~w~Vehiculo_perdido:~b~~h~_%s", vehicleName);

                    lostVehiclePlayerInformation[playerid][lVTextdrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 162.000, string);
                    PlayerTextDrawLetterSize(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], 255);
                    PlayerTextDrawFont(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], true);

                    PlayerTextDrawShow(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i]);
                }
            }
            case 4: {
                if (lostVehiclePlayerInformation[playerid][lVTextdrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    lostVehiclePlayerInformation[playerid][lVTextdrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 193.000, "~y~Encuentralo_~w~Antes_Que_Otro!");
                    PlayerTextDrawLetterSize(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], 255);
                    PlayerTextDrawFont(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], true);

                    PlayerTextDrawShow(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i]);
                }
            }
            case 5: {
                if (lostVehiclePlayerInformation[playerid][lVTextdrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    lostVehiclePlayerInformation[playerid][lVTextdrawings][i] = CreatePlayerTextDraw(playerid, 131.000, 210.000, "Presiona_~y~BIR~w~_para_cerrar");
                    PlayerTextDrawLetterSize(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], 0.209, 0.999);
                    PlayerTextDrawAlignment(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], 255);
                    PlayerTextDrawFont(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i], true);

                    PlayerTextDrawShow(playerid, lostVehiclePlayerInformation[playerid][lVTextdrawings][i]);
                }
            }
        }
    }
    return 1;
}