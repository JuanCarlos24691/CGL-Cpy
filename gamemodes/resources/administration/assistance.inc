#include <YSI_Coding\y_hooks>

new PlayerText:adminAssistanceTextDraw[MAX_PLAYERS][8] = { { PlayerText:INVALID_TEXT_DRAW, ...}, ...};
new bool:inAdministrativeAssistant[MAX_PLAYERS] = { false, ...};

hook OnPlayerDisconnect(playerid, text[]) {
    DestroyAdminAssistantTextDraw(playerid);

    if (inAdministrativeAssistant[playerid])
        inAdministrativeAssistant[playerid] = false;
    return 1;
}

hook OnPlayerKeyStateChange(playerid, KEY:newkeys, KEY:oldkeys) {
    if (newkeys & KEY_FIRE && inAdministrativeAssistant[playerid]) {
        DestroyAdminAssistantTextDraw(playerid);

        if (inAdministrativeAssistant[playerid])
            inAdministrativeAssistant[playerid] = false;
    }
    return 1;
}

stock DestroyAdminAssistantTextDraw(playerid) {
    for (new i = 0; i < 8; i++) {
        if (adminAssistanceTextDraw[playerid][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, adminAssistanceTextDraw[playerid][i]);
            adminAssistanceTextDraw[playerid][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }
    return 1;
}

YCMD:acmds(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 1)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 1 para poder usar este comando.");

    RestoreGlobalTextDrawings(playerid);

    if (accountInformation[playerid][inGame]) {
        for (new i = 0; i < 8; i++) {
            switch (i) {
                case 0: {
                    if (adminAssistanceTextDraw[playerid][i] == PlayerText:INVALID_TEXT_DRAW) {
                        adminAssistanceTextDraw[playerid][i] = CreatePlayerTextDraw(playerid, 6.000, 105.000, "LD_SPAC:black");
                        PlayerTextDrawTextSize(playerid, adminAssistanceTextDraw[playerid][i], 250.000, 222.000);
                        PlayerTextDrawAlignment(playerid, adminAssistanceTextDraw[playerid][i], TEXT_DRAW_ALIGN_LEFT);
                        PlayerTextDrawColour(playerid, adminAssistanceTextDraw[playerid][i], -81);
                        PlayerTextDrawSetShadow(playerid, adminAssistanceTextDraw[playerid][i], 0);
                        PlayerTextDrawSetOutline(playerid, adminAssistanceTextDraw[playerid][i], 0);
                        PlayerTextDrawBackgroundColour(playerid, adminAssistanceTextDraw[playerid][i], 255);
                        PlayerTextDrawFont(playerid, adminAssistanceTextDraw[playerid][i], TEXT_DRAW_FONT_SPRITE_DRAW);
                        PlayerTextDrawSetProportional(playerid, adminAssistanceTextDraw[playerid][i], true);

                        PlayerTextDrawShow(playerid, adminAssistanceTextDraw[playerid][i]);
                    }

                }
                case 1: {
                    if (adminAssistanceTextDraw[playerid][i] == PlayerText:INVALID_TEXT_DRAW) {
                        adminAssistanceTextDraw[playerid][i] = CreatePlayerTextDraw(playerid, 130.000, 111.000, "Comandos_administrativos");
                        PlayerTextDrawLetterSize(playerid, adminAssistanceTextDraw[playerid][i], 0.349, 1.199);
                        PlayerTextDrawAlignment(playerid, adminAssistanceTextDraw[playerid][i], TEXT_DRAW_ALIGN_CENTER);
                        PlayerTextDrawColour(playerid, adminAssistanceTextDraw[playerid][i], 792294655);
                        PlayerTextDrawSetShadow(playerid, adminAssistanceTextDraw[playerid][i], 0);
                        PlayerTextDrawSetOutline(playerid, adminAssistanceTextDraw[playerid][i], 1);
                        PlayerTextDrawBackgroundColour(playerid, adminAssistanceTextDraw[playerid][i], 33752063);
                        PlayerTextDrawFont(playerid, adminAssistanceTextDraw[playerid][i], TEXT_DRAW_FONT_3);
                        PlayerTextDrawSetProportional(playerid, adminAssistanceTextDraw[playerid][i], true);

                        PlayerTextDrawShow(playerid, adminAssistanceTextDraw[playerid][i]);
                    }
                }
                case 2: {
                    if (adminAssistanceTextDraw[playerid][i] == PlayerText:INVALID_TEXT_DRAW && accountInformation[playerid][administrativeLevel] >= 1) {
                        adminAssistanceTextDraw[playerid][i] = CreatePlayerTextDraw(playerid, 14.000, 126.000, "#~n~/acmds~n~/onduty~n~/offduty~n~/reports~n~/warn~n~/resetwarns~n~/spec~n~/specoff~n~/adminarea~n~/repair~n~/addnos~n~/flip~n~/ip~n~/playerspawn~n~/goto~n~/kick~n~/asay");
                        PlayerTextDrawLetterSize(playerid, adminAssistanceTextDraw[playerid][i], 0.169, 0.698);
                        PlayerTextDrawAlignment(playerid, adminAssistanceTextDraw[playerid][i], TEXT_DRAW_ALIGN_LEFT);
                        PlayerTextDrawColour(playerid, adminAssistanceTextDraw[playerid][i], -928293889);
                        PlayerTextDrawSetShadow(playerid, adminAssistanceTextDraw[playerid][i], 0);
                        PlayerTextDrawSetOutline(playerid, adminAssistanceTextDraw[playerid][i], -1);
                        PlayerTextDrawBackgroundColour(playerid, adminAssistanceTextDraw[playerid][i], 255);
                        PlayerTextDrawFont(playerid, adminAssistanceTextDraw[playerid][i], TEXT_DRAW_FONT_1);
                        PlayerTextDrawSetProportional(playerid, adminAssistanceTextDraw[playerid][i], true);

                        PlayerTextDrawShow(playerid, adminAssistanceTextDraw[playerid][i]);
                    }
                }
                case 3: {
                    if (adminAssistanceTextDraw[playerid][i] == PlayerText:INVALID_TEXT_DRAW && accountInformation[playerid][administrativeLevel] >= 2) {
                        adminAssistanceTextDraw[playerid][i] = CreatePlayerTextDraw(playerid, 63.000, 126.000, "/banaccount~n~/unbanaccount~n~/banip~n~/unbanip~n~/jailed~n~/jail~n~/unjail~n~/muted~n~/mute~n~/unmute~n~/ann~n~/jetpack~n~/aweaps~n~/text~n~/eject~n~/carpaint~n~/carcolor~n~/akill~n~/setskin~n~/cc~n~/aheal~n~/aarmour~n~/setinterior~n~/slap~n~/explode~n~/disarm");
                        PlayerTextDrawLetterSize(playerid, adminAssistanceTextDraw[playerid][i], 0.169, 0.698);
                        PlayerTextDrawAlignment(playerid, adminAssistanceTextDraw[playerid][i], TEXT_DRAW_ALIGN_LEFT);
                        PlayerTextDrawColour(playerid, adminAssistanceTextDraw[playerid][i], -928293889);
                        PlayerTextDrawSetShadow(playerid, adminAssistanceTextDraw[playerid][i], 0);
                        PlayerTextDrawSetOutline(playerid, adminAssistanceTextDraw[playerid][i], -1);
                        PlayerTextDrawBackgroundColour(playerid, adminAssistanceTextDraw[playerid][i], 255);
                        PlayerTextDrawFont(playerid, adminAssistanceTextDraw[playerid][i], TEXT_DRAW_FONT_1);
                        PlayerTextDrawSetProportional(playerid, adminAssistanceTextDraw[playerid][i], true);

                        PlayerTextDrawShow(playerid, adminAssistanceTextDraw[playerid][i]);
                    }
                }
                case 4: {
                    if (adminAssistanceTextDraw[playerid][i] == PlayerText:INVALID_TEXT_DRAW && accountInformation[playerid][administrativeLevel] >= 3) {
                        adminAssistanceTextDraw[playerid][i] = CreatePlayerTextDraw(playerid, 111.000, 126.000, "/setkills~n~/setdeaths~n~/giveweapon~n~/get~n~/armourall~n~/sethealth~n~/setarmour~n~/freeze~n~/unfreeze~n~/setcash~n~/setscore~n~/givecash~n~/givescore~n~/spawncar~n~/destroycar~n~/spawncars");
                        PlayerTextDrawLetterSize(playerid, adminAssistanceTextDraw[playerid][i], 0.169, 0.698);
                        PlayerTextDrawAlignment(playerid, adminAssistanceTextDraw[playerid][i], TEXT_DRAW_ALIGN_LEFT);
                        PlayerTextDrawColour(playerid, adminAssistanceTextDraw[playerid][i], -928293889);
                        PlayerTextDrawSetShadow(playerid, adminAssistanceTextDraw[playerid][i], 0);
                        PlayerTextDrawSetOutline(playerid, adminAssistanceTextDraw[playerid][i], -1);
                        PlayerTextDrawBackgroundColour(playerid, adminAssistanceTextDraw[playerid][i], 255);
                        PlayerTextDrawFont(playerid, adminAssistanceTextDraw[playerid][i], TEXT_DRAW_FONT_1);
                        PlayerTextDrawSetProportional(playerid, adminAssistanceTextDraw[playerid][i], true);

                        PlayerTextDrawShow(playerid, adminAssistanceTextDraw[playerid][i]);
                    }
                }
                case 5: {
                    if (adminAssistanceTextDraw[playerid][i] == PlayerText:INVALID_TEXT_DRAW && accountInformation[playerid][administrativeLevel] >= 4) {
                        adminAssistanceTextDraw[playerid][i] = CreatePlayerTextDraw(playerid, 159.000, 126.000, "/banaccountall~n~/unbanaccountall~n~/banipall~n~/unbanipall~n~/muteall~n~/unmuteall~n~/jailall~n~/unjailall~n~/giveallcash~n~/setalltime");
                        PlayerTextDrawLetterSize(playerid, adminAssistanceTextDraw[playerid][i], 0.169, 0.698);
                        PlayerTextDrawAlignment(playerid, adminAssistanceTextDraw[playerid][i], TEXT_DRAW_ALIGN_LEFT);
                        PlayerTextDrawColour(playerid, adminAssistanceTextDraw[playerid][i], -928293889);
                        PlayerTextDrawSetShadow(playerid, adminAssistanceTextDraw[playerid][i], 0);
                        PlayerTextDrawSetOutline(playerid, adminAssistanceTextDraw[playerid][i], -1);
                        PlayerTextDrawBackgroundColour(playerid, adminAssistanceTextDraw[playerid][i], 255);
                        PlayerTextDrawFont(playerid, adminAssistanceTextDraw[playerid][i], TEXT_DRAW_FONT_1);
                        PlayerTextDrawSetProportional(playerid, adminAssistanceTextDraw[playerid][i], true);

                        PlayerTextDrawShow(playerid, adminAssistanceTextDraw[playerid][i]);
                    }
                }
                case 6: {
                    if (adminAssistanceTextDraw[playerid][i] == PlayerText:INVALID_TEXT_DRAW && accountInformation[playerid][administrativeLevel] == 5) {
                        adminAssistanceTextDraw[playerid][i] = CreatePlayerTextDraw(playerid, 206.000, 126.000, "/gmx~n~/setadminlevel~n~/fakechat~n~/giveallweapon~n~/crear~n~/setlotto~n~/gotomb~n~/colocarmb~n~/cambiarciudad");
                        PlayerTextDrawLetterSize(playerid, adminAssistanceTextDraw[playerid][i], 0.169, 0.698);
                        PlayerTextDrawAlignment(playerid, adminAssistanceTextDraw[playerid][i], TEXT_DRAW_ALIGN_LEFT);
                        PlayerTextDrawColour(playerid, adminAssistanceTextDraw[playerid][i], -928293889);
                        PlayerTextDrawSetShadow(playerid, adminAssistanceTextDraw[playerid][i], 0);
                        PlayerTextDrawSetOutline(playerid, adminAssistanceTextDraw[playerid][i], -1);
                        PlayerTextDrawBackgroundColour(playerid, adminAssistanceTextDraw[playerid][i], 255);
                        PlayerTextDrawFont(playerid, adminAssistanceTextDraw[playerid][i], TEXT_DRAW_FONT_1);
                        PlayerTextDrawSetProportional(playerid, adminAssistanceTextDraw[playerid][i], true);

                        PlayerTextDrawShow(playerid, adminAssistanceTextDraw[playerid][i]);
                    }
                }
                case 7: {
                    if (adminAssistanceTextDraw[playerid][i] == PlayerText:INVALID_TEXT_DRAW) {
                        adminAssistanceTextDraw[playerid][i] = CreatePlayerTextDraw(playerid, 131.000, 312.000, "Presiona_~y~BIR~w~_para_cerrar");
                        PlayerTextDrawLetterSize(playerid, adminAssistanceTextDraw[playerid][i], 0.209, 0.999);
                        PlayerTextDrawAlignment(playerid, adminAssistanceTextDraw[playerid][i], TEXT_DRAW_ALIGN_CENTER);
                        PlayerTextDrawColour(playerid, adminAssistanceTextDraw[playerid][i], -1);
                        PlayerTextDrawSetShadow(playerid, adminAssistanceTextDraw[playerid][i], 0);
                        PlayerTextDrawSetOutline(playerid, adminAssistanceTextDraw[playerid][i], 1);
                        PlayerTextDrawBackgroundColour(playerid, adminAssistanceTextDraw[playerid][i], 255);
                        PlayerTextDrawFont(playerid, adminAssistanceTextDraw[playerid][i], TEXT_DRAW_FONT_1);
                        PlayerTextDrawSetProportional(playerid, adminAssistanceTextDraw[playerid][i], true);

                        PlayerTextDrawShow(playerid, adminAssistanceTextDraw[playerid][i]);
                    }
                }
            }
        }

        inAdministrativeAssistant[playerid] = true;
    }
    return 1;
}