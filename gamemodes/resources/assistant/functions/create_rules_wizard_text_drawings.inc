forward CreateRulesWizardTextDrawings(const playerid);
public CreateRulesWizardTextDrawings(const playerid) {
    for (new i = 0; i < 14; i++) {
        switch (i) {
            case 0: {
                if (rulesAssistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    rulesAssistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 156.000, 105.000, "LD_SPAC:black");
                    PlayerTextDrawTextSize(playerid, rulesAssistantInformation[playerid][textDrawings][i], 340.000, 230.000);
                    PlayerTextDrawAlignment(playerid, rulesAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_LEFT);
                    PlayerTextDrawColour(playerid, rulesAssistantInformation[playerid][textDrawings][i], -81);
                    PlayerTextDrawSetShadow(playerid, rulesAssistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, rulesAssistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawBackgroundColour(playerid, rulesAssistantInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, rulesAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_SPRITE_DRAW);
                    PlayerTextDrawSetProportional(playerid, rulesAssistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, rulesAssistantInformation[playerid][textDrawings][i]);
                }
            }
            case 1: {
                if (rulesAssistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    rulesAssistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 326.000, 116.000, "Reglas_combastes_guerras_latinos");
                    PlayerTextDrawLetterSize(playerid, rulesAssistantInformation[playerid][textDrawings][i], 0.349, 1.199);
                    PlayerTextDrawAlignment(playerid, rulesAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, rulesAssistantInformation[playerid][textDrawings][i], 792294655);
                    PlayerTextDrawSetShadow(playerid, rulesAssistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, rulesAssistantInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, rulesAssistantInformation[playerid][textDrawings][i], 33752063);
                    PlayerTextDrawFont(playerid, rulesAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_3);
                    PlayerTextDrawSetProportional(playerid, rulesAssistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, rulesAssistantInformation[playerid][textDrawings][i]);
                }
            }
            case 2: {
                if (rulesAssistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    rulesAssistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 324.000, 138.000, "-No_pidas_ser_~r~Admin");
                    PlayerTextDrawLetterSize(playerid, rulesAssistantInformation[playerid][textDrawings][i], 0.249, 1.098);
                    PlayerTextDrawAlignment(playerid, rulesAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, rulesAssistantInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, rulesAssistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, rulesAssistantInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, rulesAssistantInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, rulesAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, rulesAssistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, rulesAssistantInformation[playerid][textDrawings][i]);
                }
            }
            case 3: {
                if (rulesAssistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    rulesAssistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 324.000, 153.000, "-No_usar_~r~Cheats/Hacks");
                    PlayerTextDrawLetterSize(playerid, rulesAssistantInformation[playerid][textDrawings][i], 0.249, 1.098);
                    PlayerTextDrawAlignment(playerid, rulesAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, rulesAssistantInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, rulesAssistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, rulesAssistantInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, rulesAssistantInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, rulesAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, rulesAssistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, rulesAssistantInformation[playerid][textDrawings][i]);
                }
            }
            case 4: {
                if (rulesAssistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    rulesAssistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 324.000, 169.000, "-No_utilizar_~p~~h~MODS_/_BUGS~w~_para_tu_ventaja");
                    PlayerTextDrawLetterSize(playerid, rulesAssistantInformation[playerid][textDrawings][i], 0.248, 1.098);
                    PlayerTextDrawAlignment(playerid, rulesAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, rulesAssistantInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, rulesAssistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, rulesAssistantInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, rulesAssistantInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, rulesAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, rulesAssistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, rulesAssistantInformation[playerid][textDrawings][i]);
                }
            }
            case 5: {
                if (rulesAssistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    rulesAssistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 324.000, 185.000, "-No_Escribas_en_~r~MAYUSCULAS~w~_en_el_chat_principal");
                    PlayerTextDrawLetterSize(playerid, rulesAssistantInformation[playerid][textDrawings][i], 0.248, 1.098);
                    PlayerTextDrawAlignment(playerid, rulesAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, rulesAssistantInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, rulesAssistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, rulesAssistantInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, rulesAssistantInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, rulesAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, rulesAssistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, rulesAssistantInformation[playerid][textDrawings][i]);
                }
            }
            case 6: {
                if (rulesAssistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    rulesAssistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 324.000, 201.000, "-~g~Respeta~w~_jugadores_y_admins");
                    PlayerTextDrawLetterSize(playerid, rulesAssistantInformation[playerid][textDrawings][i], 0.248, 1.098);
                    PlayerTextDrawAlignment(playerid, rulesAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, rulesAssistantInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, rulesAssistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, rulesAssistantInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, rulesAssistantInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, rulesAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, rulesAssistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, rulesAssistantInformation[playerid][textDrawings][i]);
                }
            }
            case 7: {
                if (rulesAssistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    rulesAssistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 324.000, 217.000, "-~r~No~w~_hagas_~r~publicidad~w~_de_otros_servers");
                    PlayerTextDrawLetterSize(playerid, rulesAssistantInformation[playerid][textDrawings][i], 0.248, 1.098);
                    PlayerTextDrawAlignment(playerid, rulesAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, rulesAssistantInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, rulesAssistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, rulesAssistantInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, rulesAssistantInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, rulesAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, rulesAssistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, rulesAssistantInformation[playerid][textDrawings][i]);
                }
            }
            case 8: {
                if (rulesAssistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    rulesAssistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 324.000, 233.000, "-No_~r~Pausar_/_Teleports_/_Quit~w~_para_evadir_la_muerte");
                    PlayerTextDrawLetterSize(playerid, rulesAssistantInformation[playerid][textDrawings][i], 0.248, 1.098);
                    PlayerTextDrawAlignment(playerid, rulesAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, rulesAssistantInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, rulesAssistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, rulesAssistantInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, rulesAssistantInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, rulesAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, rulesAssistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, rulesAssistantInformation[playerid][textDrawings][i]);
                }
            }
            case 9: {
                if (rulesAssistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    rulesAssistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 324.000, 249.000, "-~r~Prohibido_SPAWN-KILL");
                    PlayerTextDrawLetterSize(playerid, rulesAssistantInformation[playerid][textDrawings][i], 0.248, 1.098);
                    PlayerTextDrawAlignment(playerid, rulesAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, rulesAssistantInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, rulesAssistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, rulesAssistantInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, rulesAssistantInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, rulesAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, rulesAssistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, rulesAssistantInformation[playerid][textDrawings][i]);
                }
            }
            case 10: {
                if (rulesAssistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    rulesAssistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 324.000, 265.000, "-No_te_pongas_de_~g~Pasajero~w~_en_un_auto_~r~Sin_Conductor");
                    PlayerTextDrawLetterSize(playerid, rulesAssistantInformation[playerid][textDrawings][i], 0.248, 1.098);
                    PlayerTextDrawAlignment(playerid, rulesAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, rulesAssistantInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, rulesAssistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, rulesAssistantInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, rulesAssistantInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, rulesAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, rulesAssistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, rulesAssistantInformation[playerid][textDrawings][i]);
                }
            }
            case 11: {
                if (rulesAssistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    rulesAssistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 324.000, 288.000, "Al_romper_algunas_de_estas");
                    PlayerTextDrawLetterSize(playerid, rulesAssistantInformation[playerid][textDrawings][i], 0.248, 1.098);
                    PlayerTextDrawAlignment(playerid, rulesAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, rulesAssistantInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, rulesAssistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, rulesAssistantInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, rulesAssistantInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, rulesAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, rulesAssistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, rulesAssistantInformation[playerid][textDrawings][i]);
                }
            }
            case 12: {
                if (rulesAssistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    rulesAssistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 324.000, 301.000, "reglas_te_ocasionaria_~y~KICKED_/_BANNED");
                    PlayerTextDrawLetterSize(playerid, rulesAssistantInformation[playerid][textDrawings][i], 0.248, 1.098);
                    PlayerTextDrawAlignment(playerid, rulesAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, rulesAssistantInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, rulesAssistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, rulesAssistantInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, rulesAssistantInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, rulesAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, rulesAssistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, rulesAssistantInformation[playerid][textDrawings][i]);
                }
            }
            case 13: {
                if (rulesAssistantInformation[playerid][textDrawings][i] == PlayerText:INVALID_TEXT_DRAW) {
                    rulesAssistantInformation[playerid][textDrawings][i] = CreatePlayerTextDraw(playerid, 324.000, 314.000, "Escribe_~r~/cmds~w~_para_ver_los_comandos_disponibles");
                    PlayerTextDrawLetterSize(playerid, rulesAssistantInformation[playerid][textDrawings][i], 0.248, 1.098);
                    PlayerTextDrawAlignment(playerid, rulesAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    PlayerTextDrawColour(playerid, rulesAssistantInformation[playerid][textDrawings][i], -1);
                    PlayerTextDrawSetShadow(playerid, rulesAssistantInformation[playerid][textDrawings][i], 0);
                    PlayerTextDrawSetOutline(playerid, rulesAssistantInformation[playerid][textDrawings][i], 1);
                    PlayerTextDrawBackgroundColour(playerid, rulesAssistantInformation[playerid][textDrawings][i], 255);
                    PlayerTextDrawFont(playerid, rulesAssistantInformation[playerid][textDrawings][i], TEXT_DRAW_FONT_1);
                    PlayerTextDrawSetProportional(playerid, rulesAssistantInformation[playerid][textDrawings][i], true);

                    PlayerTextDrawShow(playerid, rulesAssistantInformation[playerid][textDrawings][i]);
                }
            }
        }
    }
    return 1;
}