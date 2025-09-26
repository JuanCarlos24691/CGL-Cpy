#define MAX_WARNINGS (3)
#define DIALOG_WARN (8)

YCMD:warn(playerid, params[], help)  {
    if (accountInformation[playerid][administrativeLevel] < 1)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 1 para poder usar este comando.");

    new targetPlayerId, reasonForTheWarning[32];

    if (sscanf(params, "uS(No reason specified)[32]", targetPlayerId, reasonForTheWarning))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /warn <ID del jugador> <Razón>");

    if (!IsPlayerConnected(targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (!accountInformation[targetPlayerId][loggedIn])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un usuario que no esta registrado.");

    if (strlen(reasonForTheWarning) < 10 || strlen(reasonForTheWarning) > 32)
        return SendClientMessage(playerid, -1, ""COLOR_RED"La razón de la advertencia debe tener entre 10 y 32 caracteres.");

    ++accountInformation[targetPlayerId][warnings];

    new string[250];
    format(string, sizeof(string), ""COLOR_ROSA"**WARN: %s (%i) (ADMIN WARN) Un administrador ha advertido al jugador %s (%i). Razón: %s | Advertencias: %i/%i.", ReturnPlayerName(playerid), playerid, ReturnPlayerName(targetPlayerId), targetPlayerId, reasonForTheWarning, accountInformation[targetPlayerId][warnings], MAX_WARNINGS);
    SendClientMessageToAll(-1, string);

    if (accountInformation[targetPlayerId][warnings] >= MAX_WARNINGS) {
        format(string, sizeof(string), ""COLOR_ROSA"**WARN: %s (%i) (ADMIN WARN) El jugador fue expulsado del servidor por llegar al limite de advertencias | Advertencias: %i/%i.", ReturnPlayerName(targetPlayerId), targetPlayerId, accountInformation[targetPlayerId][warnings], MAX_WARNINGS);
        SendClientMessageToAll(-1, string);

        accountInformation[targetPlayerId][warnings] = 0;

        Kick(targetPlayerId);
        return 1;
    }

    format(string, sizeof(string), ""COLOR_WHITE"Fuiste advertido por el administrador "COLOR_ROSA"%s"COLOR_WHITE" (%i)\n\nRazón: "COLOR_RED"%s"COLOR_WHITE"\nCantidad de advertencias: "COLOR_RED"%i"COLOR_WHITE" de "COLOR_RED"%i"COLOR_WHITE"", ReturnPlayerName(playerid), playerid, reasonForTheWarning, accountInformation[targetPlayerId][warnings], MAX_WARNINGS);
    ShowPlayerDialog(targetPlayerId, DIALOG_WARN, DIALOG_STYLE_MSGBOX, "Advertencia", string, "Cerrar", "");
    return 1;
}

YCMD:resetwarns(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 1)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 1 para poder usar este comando.");

    new targetPlayerId;

    if (sscanf(params, "u", targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /resetwarns <ID del jugador>");

    if (!IsPlayerConnected(targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    if (!accountInformation[targetPlayerId][loggedIn])
        return SendClientMessage(playerid, -1, ""COLOR_RED"No puedes usar este comando con un usuario que no esta registrado.");

    accountInformation[targetPlayerId][warnings] = 0;

    new string[150];
    format(string, sizeof(string), ""COLOR_ROSA"**RESETWARNS: %s (%i) (ADMIN RESETWARNS) Un administrador ha removido tus advertencias.", ReturnPlayerName(playerid), playerid);
    SendClientMessage(targetPlayerId, -1, string);

    format(string, sizeof(string), ""COLOR_ROSA"**RESETWARNS: %s (%i) (ADMIN RESETWARNS) Has removido las advertencias del jugador.", ReturnPlayerName(targetPlayerId), targetPlayerId);
    SendClientMessage(playerid, -1, string);
    return 1;
}