YCMD:reportar(playerid, params[], help) {
    new targetPlayerId, _reasonForReport[128];

    if (sscanf(params, "us[128]", targetPlayerId, _reasonForReport))
        return SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /reportar <ID del jugador> <Razón>");

    if (strlen(_reasonForReport) < 10 || strlen(_reasonForReport) > 32)
        return SendClientMessage(playerid, -1, ""COLOR_RED"La razón del reporte no es valída. Este deber tener un rango de caracteres de 10 a 32 caracteres.");

    if (!IsPlayerConnected(targetPlayerId))
        return SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    Report(playerid, targetPlayerId, _reasonForReport);
    return 1;
}