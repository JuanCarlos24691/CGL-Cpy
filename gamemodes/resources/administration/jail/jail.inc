#include <YSI_Coding\y_hooks>

new playerJailDestinationPlayerId[MAX_PLAYERS] = { -1 };

#define DIALOG_JAILED_LIST (4)
#define DIALOG_UNJAIL (5)

hook OnPlayerDisconnect(playerid, text[]) {
    if (playerJailTimer[playerid] != INVALID_TIMER) {
        KillTimer(playerJailTimer[playerid]);
        playerJailTimer[playerid] = INVALID_TIMER;
    }

    if (playerJailDestinationPlayerId[playerid] != -1)
        playerJailDestinationPlayerId[playerid] = -1;
    return 1;
}

hook OnPlayerText(playerid, text[]) {
    if (accountInformation[playerid][jailTime] > 0 && playerJailTimer[playerid] != INVALID_TIMER) {
        SendClientMessage(playerid, -1, ""COLOR_RED"No puedes hablar por el chat mientras estas jaileado.");
        return ~0;
    }
    return 1;
}

hook OnDialogResponse(playerid, dialogid, response, listitem, inputtext[]) {
    switch (dialogid) {
        case DIALOG_JAILED_LIST: {
            if (response) {
                new index, dialogInformation[700];

                foreach (new i : Player) {
                    if (accountInformation[i][loggedIn] && accountInformation[i][inGame] && accountInformation[i][jailTime] > 0) {
                        if (index == listitem) {
                            format(dialogInformation, sizeof(dialogInformation), ""COLOR_WHITE"Preciona el boton 'Sacar' para sacar al jugador del jail\n\nJugador selecciónado: "COLOR_ROSA"%s"COLOR_WHITE" (%i) (El jugador saldra del jail en "COLOR_GREEN"%i"COLOR_WHITE" segundos)", ReturnPlayerName(i), i, accountInformation[i][jailTime]);
                            ShowPlayerDialog(playerid, DIALOG_UNJAIL, DIALOG_STYLE_MSGBOX, "Sacar al jugador del jail", dialogInformation, "Sacar", "Cancelar");

                            playerJailDestinationPlayerId[playerid] = i;
                            break;
                        }

                        index++;
                    }
                }
            }
        }
        case DIALOG_UNJAIL: {
            if (response) {
                UnJailThePlayer(playerJailDestinationPlayerId[playerid]);

                new string[124];
                format(string, sizeof(string), ""COLOR_ROSA"**UNJAIL: %s (%i) (ADMIN UNJAIL) Un Admnistrador ha sacado del jail al jugador %s (%i).", ReturnPlayerName(playerid), playerid, ReturnPlayerName(playerJailDestinationPlayerId[playerid]), playerJailDestinationPlayerId[playerid]);
                SendClientMessageToAll(-1, string);

                if (accountInformation[playerid][loggedIn] && accountInformation[playerid][inGame] && accountInformation[playerid][loggedIn] && accountInformation[playerid][inGame] && playerJailDestinationPlayerId[playerid] != -1)
                    playerJailDestinationPlayerId[playerid] = -1;
            }
        }
    }
    return 1;
}