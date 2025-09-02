#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    for (new i = 0; i < MAX_PLAYERS; i++)
        messagesWhenSpawningInfo[i][textDrawing] = PlayerText:INVALID_TEXT_DRAW;
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    if (messagesWhenSpawningInfo[playerid][seen])
        messagesWhenSpawningInfo[playerid][seen] = false;
    return 1;
}

hook OnPlayerSpawn(playerid) {
    if (!messagesWhenSpawningInfo[playerid][seen]) {
        va_SendClientMessage(playerid, -1, ""COLOR_ROSA"RECUERDA! - No abuses de BUGS o seras Kicked / Banned.");

        if (messagesWhenSpawningInfo[playerid][textDrawing] == PlayerText:INVALID_TEXT_DRAW) {
            messagesWhenSpawningInfo[playerid][textDrawing] = CreatePlayerTextDraw(playerid, 315.000, 225.000, "~w~Bienvenido_a_~p~Combates_Guerras_Latinos~n~~b~%s~n~~w~Escribe_~y~/reglas~w~_o_~y~/cmds_~n~~w~Para_mas_informacion_del_juego.", accountInformation[playerid][name]);
            PlayerTextDrawLetterSize(playerid, messagesWhenSpawningInfo[playerid][textDrawing], 0.499, 2.000);
            PlayerTextDrawAlignment(playerid, messagesWhenSpawningInfo[playerid][textDrawing], TEXT_DRAW_ALIGN_CENTER);
            PlayerTextDrawColour(playerid, messagesWhenSpawningInfo[playerid][textDrawing], -1);
            PlayerTextDrawSetShadow(playerid, messagesWhenSpawningInfo[playerid][textDrawing], 0);
            PlayerTextDrawSetOutline(playerid, messagesWhenSpawningInfo[playerid][textDrawing], 1);
            PlayerTextDrawBackgroundColour(playerid, messagesWhenSpawningInfo[playerid][textDrawing], 150);
            PlayerTextDrawFont(playerid, messagesWhenSpawningInfo[playerid][textDrawing], TEXT_DRAW_FONT_3);
            PlayerTextDrawSetProportional(playerid, messagesWhenSpawningInfo[playerid][textDrawing], true);

            PlayerTextDrawShow(playerid, messagesWhenSpawningInfo[playerid][textDrawing]);

            inline MessagesWhenSpawningInfo() {
                PlayerTextDrawHide(playerid, messagesWhenSpawningInfo[playerid][textDrawing]);
                messagesWhenSpawningInfo[playerid][textDrawing] = PlayerText:INVALID_TEXT_DRAW;
            }

            Timer_CreateCallback(using inline MessagesWhenSpawningInfo, 5000, 1);
        }

        if (!messagesWhenSpawningInfo[playerid][seen])
            messagesWhenSpawningInfo[playerid][seen] = true;
    }
    return 1;
}