#include <YSI_Coding\y_hooks>

new playerMuteTimer[MAX_PLAYERS] = { INVALID_TIMER };
new playerMutetargetPlayerId[MAX_PLAYERS] = { -1 };

#define DIALOG_MUTE_LIST (6)
#define DIALOG_UNMUTE (7)

hook OnPlayerSpawn(playerid) {
    if (accountInformation[playerid][inGame] && accountInformation[playerid][loggedIn] && accountInformation[playerid][muteTime] > 0 && playerMuteTimer[playerid] == INVALID_TIMER)
        playerMuteTimer[playerid] = SetTimerEx("UpdatePlayerMuteTime", 1000, true, "i", playerid);
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    if (accountInformation[playerid][inGame] && accountInformation[playerid][loggedIn]) {
        if (playerMuteTimer[playerid] != INVALID_TIMER) {
            KillTimer(playerMuteTimer[playerid]);
            playerMuteTimer[playerid] = INVALID_TIMER;
        }

        if (accountInformation[playerid][loggedIn] && accountInformation[playerid][inGame] && playerMutetargetPlayerId[playerid] != -1)
            playerMutetargetPlayerId[playerid] = -1;
    }
    return 1;
}

hook OnPlayerText(playerid, text[]) {
    if (accountInformation[playerid][inGame] && accountInformation[playerid][loggedIn] && accountInformation[playerid][muteTime] > 0 && playerMuteTimer[playerid] != INVALID_TIMER) {
        SendClientMessage(playerid, -1, ""COLOR_RED"No puedes hablar por el chat mientras estas muteado.");
        return ~0;
    }
    return 1;
}

hook OnDialogResponse(playerid, dialogid, response, listitem, inputtext[]) {
    switch (dialogid) {
        case DIALOG_MUTE_LIST: {
            if (response) {
                new index, dialogInformation[700];

                foreach (new i : Player) {
                    if (accountInformation[i][loggedIn] && accountInformation[i][inGame] && accountInformation[i][muteTime] > 0) {
                        if (index == listitem) {
                            format(dialogInformation, sizeof(dialogInformation), ""COLOR_WHITE"Preciona el boton 'Desmutear' para desmutear al jugador\n\nJugador selecciónado: "COLOR_ROSA"%s"COLOR_WHITE" (%i) (El jugador sera desmuteado en "COLOR_GREEN"%i"COLOR_WHITE" segundos)", ReturnPlayerName(i), i, accountInformation[i][muteTime]);
                            ShowPlayerDialog(playerid, DIALOG_UNMUTE, DIALOG_STYLE_MSGBOX, "Desmutear al jugador", dialogInformation, "Desmutear", "Cancelar");

                            playerMutetargetPlayerId[playerid] = i;
                            break;
                        }

                        index++;
                    }
                }
            }
        }
        case DIALOG_UNMUTE: {
            if (response) {
                UnMuteThePlayer(playerMutetargetPlayerId[playerid]);

                new string[124];
                format(string, sizeof(string), ""COLOR_ROSA"**UNMUTE: %s (%i) (ADMIN UNMUTE) Un Admnistrador ha desmuteado al jugador %s (%i).", ReturnPlayerName(playerid), playerid, ReturnPlayerName(playerMutetargetPlayerId[playerid]), playerMutetargetPlayerId[playerid]);
                SendClientMessageToAll(-1, string);

                if (accountInformation[playerid][loggedIn] && accountInformation[playerid][inGame] && playerMutetargetPlayerId[playerid] != -1)
                    playerMutetargetPlayerId[playerid] = -1;
            }
        }
    }
    return 1;
}

forward UpdatePlayerMuteTime(playerid);
public UpdatePlayerMuteTime(playerid) {
    if (accountInformation[playerid][inGame] && accountInformation[playerid][loggedIn] && playerMuteTimer[playerid] != INVALID_TIMER) {
        accountInformation[playerid][muteTime]--;

        if (accountInformation[playerid][muteTime] == 0) {
            KillTimer(playerMuteTimer[playerid]);
            playerMuteTimer[playerid] = INVALID_TIMER;

            new string[150];
            format(string, sizeof(string), ""COLOR_ROSA"**MUTE: %s (%i) (ADMIN MUTE) El jugador ha cumplido el tiempo de muteo.", ReturnPlayerName(playerid), playerid);
            SendClientMessageToAll(-1, string);
        }
    }
    return 1;
}

stock UnMuteThePlayer(targetPlayerId) {
    if (accountInformation[targetPlayerId][loggedIn] && accountInformation[targetPlayerId][inGame] && accountInformation[targetPlayerId][muteTime] > 0 && playerMuteTimer[targetPlayerId] != INVALID_TIMER) {
        accountInformation[targetPlayerId][muteTime] = 0;

        KillTimer(playerMuteTimer[targetPlayerId]);
        playerMuteTimer[targetPlayerId] = INVALID_TIMER;

        PlayerPlaySound(targetPlayerId, 1057, 0.0, 0.0, 0.0);
    }
    return 1;
}

YCMD:muted(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 2)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 2 para poder usar este comando.");

    new mutedInformation[MAX_PLAYER_NAME * 100], string[238];

    foreach (new i : Player) {
        if (accountInformation[i][muteTime] > 0) {
            format(string, sizeof(string), "Jugador muteado "COLOR_ROSA"%s"COLOR_WHITE" (%i) por "COLOR_GREEN"%i"COLOR_WHITE" segundos.", ReturnPlayerName(i), i, accountInformation[i][muteTime]);
            strcat(mutedInformation, string);
        }
    }

    if (!mutedInformation[0])
        return SendClientMessage(playerid, -1, ""COLOR_RED"Actualmente no hay jugadores muteados.");

    ShowPlayerDialog(playerid, DIALOG_MUTE_LIST, DIALOG_STYLE_LIST, "Jugadores muteados", mutedInformation, "Ver mute", "Cerrar");
    return 1;
}

YCMD:mute(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 2)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 2 para poder usar este comando.");

    new targetPlayerId, tempMuteTime, tempMuteReason[32];

    if (sscanf(params, "uI(60)S(No reason specified)[32]", targetPlayerId, tempMuteTime, tempMuteReason))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /mute <ID del jugador> <Segundos> <Razón>");

    if (!IsPlayerConnected(targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (!accountInformation[targetPlayerId][loggedIn])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un usuario que no esta registrado.");

    if (tempMuteTime < 0 || tempMuteTime < 60)
        return SendClientMessage(playerid, -1, ""COLOR_RED"El tiempo de muteo no puede tener un valor negativo ni tener un valor menor a 60 segundos.");

    if (strlen(tempMuteReason) < 10 || strlen(tempMuteReason) > 32)
        return SendClientMessage(playerid, -1, ""COLOR_RED"La razón del muteo no es valída. Este deber tener un rango de caracteres de 10 a 32 caracteres.");

    if (accountInformation[targetPlayerId][muteTime] > 0)
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador espesificado ya fue muteado.");

    accountInformation[targetPlayerId][muteTime] = tempMuteTime;
    playerMuteTimer[targetPlayerId] = SetTimerEx("UpdatePlayerMuteTime", 1000, true, "i", targetPlayerId);

    PlayerPlaySound(targetPlayerId, 1057, 0.0, 0.0, 0.0);
    PlayerPlaySound(playerid, 1057, 0.0, 0.0, 0.0);

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**MUTE: %s (%i) (ADMIN MUTE) Un Admnistrador ha muteado al jugador %s (%i) por %i segundos por la razón: %s.", ReturnPlayerName(playerid), playerid, ReturnPlayerName(targetPlayerId), targetPlayerId,  tempMuteTime, tempMuteReason);
    SendClientMessageToAll(-1, string);
    return 1;
}

YCMD:muteall(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 4)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos nivel 4 de administración para usar este comando.");

    new tempMuteTime, tempMuteReason[32];

    if (sscanf(params, "I(60)S(No reason specified)[32]", tempMuteTime, tempMuteReason))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /muteall <Segundos> <Razón>");

    if (tempMuteTime < 60)
        return SendClientMessage(playerid, -1, ""COLOR_RED"El tiempo de muteo no puede ser menor a 60 segundos.");

    if (strlen(tempMuteReason) < 10 || strlen(tempMuteReason) > 32)
        return SendClientMessage(playerid, -1, ""COLOR_RED"La razón del muteo debe tener entre 10 y 32 caracteres.");

    foreach (new i : Player) {
        if (accountInformation[i][loggedIn] && accountInformation[i][inGame] && accountInformation[playerid][muteTime] == 0 && accountInformation[playerid][administrativeLevel] == 0) {
            accountInformation[i][muteTime] = tempMuteTime;
            playerMuteTimer[i] = SetTimerEx("UpdatePlayerMuteTime", 1000, true, "i", i);
        }
    }

    new string[180];
    format(string, sizeof(string), ""COLOR_ROSA"**MUTEALL: %s (%i) (ADMIN MUTEALL) Un administrador ha muteado a todos los jugadores por %i segundos por la razón: %s", ReturnPlayerName(playerid), playerid, tempMuteTime, tempMuteReason);
    SendClientMessageToAll(-1, string);
    return 1;
}

YCMD:unmute(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 2)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 2 para poder usar este comando.");

    new targetPlayerId;

    if (sscanf(params, "u", targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /unmute <ID del jugador>");

    if (!IsPlayerConnected(targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (!accountInformation[targetPlayerId][loggedIn])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un usuario que no esta registrado.");

    if (accountInformation[targetPlayerId][muteTime] == 0)
        return SendClientMessage(playerid, -1, "El jugador espesificado no esta muteado.");

    UnMuteThePlayer(targetPlayerId);

    new string[124];
    format(string, sizeof(string), ""COLOR_ROSA"**UNMUTE: %s (%i) (ADMIN UNMUTE) Un Admnistrador ha desmuteado al jugador %s (%i).", ReturnPlayerName(playerid), playerid, ReturnPlayerName(targetPlayerId), targetPlayerId);
    SendClientMessageToAll(-1, string);

    if (accountInformation[playerid][loggedIn] && accountInformation[playerid][inGame] && playerMutetargetPlayerId[playerid] != -1)
        playerMutetargetPlayerId[playerid] = -1;
    return 1;
}

YCMD:unmuteall(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 4)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos nivel 4 de administración para usar este comando.");

    foreach (new i : Player)
        if (accountInformation[i][loggedIn] && accountInformation[i][inGame] && accountInformation[i][muteTime] > 0)
            UnMuteThePlayer(i);

    new string[124];
    format(string, sizeof(string), ""COLOR_ROSA"**UNMUTEALL: %s (%i) (ADMIN UNMUTEALL) Un administrador ha desmuteado a todos los jugadores.", ReturnPlayerName(playerid), playerid);
    SendClientMessageToAll(-1, string);

    if (accountInformation[playerid][loggedIn] && accountInformation[playerid][inGame] && playerMutetargetPlayerId[playerid] != -1)
        playerMutetargetPlayerId[playerid] = -1;
    return 1;
}