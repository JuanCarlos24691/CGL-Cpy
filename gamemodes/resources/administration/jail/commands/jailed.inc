YCMD:jailed(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 2)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 2 para poder usar este comando.");

    new string[100], information[MAX_PLAYER_NAME * 100];

    foreach (new i : Player) {
        if (accountInformation[i][jailTime] > 0) {
            format(string, sizeof(string), "Jugador jaileado "COLOR_ROSA"%s"COLOR_WHITE" (%i) por "COLOR_GREEN"%i"COLOR_WHITE" segundos.", ReturnPlayerName(i), i, accountInformation[i][jailTime]);
            strcat(information, string);
        }
    }

    if (!information[0])
        return SendClientMessage(playerid, -1, ""COLOR_RED"Actualmente no hay jugadores jaileados.");

    ShowPlayerDialog(playerid, DIALOG_JAILED_LIST, DIALOG_STYLE_LIST, "Jugadores jaileados", information, "Ver jail", "Cerrar");
    return 1;
}