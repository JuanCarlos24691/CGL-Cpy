forward Report(const playerid, const targetPlayerId, const _reasonForReport[]);
public Report(const playerid, const targetPlayerId, const _reasonForReport[]) {
    for (new i = MAX_REPORTS - 2; i >= 0; i--) {
        strcpy(reportInformation[i + 1][playerReported], reportInformation[i][playerReported], MAX_PLAYER_NAME);
        reportInformation[i + 1][idOfThePlayerReported] = reportInformation[i][idOfThePlayerReported];

        strcpy(reportInformation[i + 1][reportingPlayer], reportInformation[i][reportingPlayer], MAX_PLAYER_NAME);
        reportInformation[i + 1][idOfTheReportingPlayer] = reportInformation[i][idOfTheReportingPlayer];

        strcpy(reportInformation[i + 1][reasonForReport], reportInformation[i][reasonForReport], 100);
        strcpy(reportInformation[i + 1][reportingTime], reportInformation[i][reportingTime], 15);

        reportInformation[i + 1][reportRead] = reportInformation[i][reportRead];
    }

    strcpy(reportInformation[0][playerReported], accountInformation[targetPlayerId][name]);
    reportInformation[0][idOfThePlayerReported] = targetPlayerId;

    strcpy(reportInformation[0][reportingPlayer], accountInformation[playerid][name]);
    reportInformation[0][idOfTheReportingPlayer] = playerid;

    strcpy(reportInformation[0][reasonForReport], _reasonForReport);

    format(reportInformation[0][reportingTime], 15, "%02d:%02d", timeInformation[hour], timeInformation[minute]);

    reportInformation[0][reportRead] = false;

    foreach (new i : Player) {
        if (accountInformation[i][administrativeLevel] >= 1 && accountInformation[i][administrativeLevel] <= 5) {
            va_SendClientMessage(i, -1, ""COLOR_ROSA"**REPORTE: %s (%i) (ADMIN REPORTE) El jugador reporto al jugador %s (%i).", accountInformation[playerid][name], playerid, accountInformation[targetPlayerId][name], targetPlayerId);
            va_SendClientMessage(i, -1, "Utiliza el comando "COLOR_SINTAXYS"/reports"COLOR_WHITE" para ver el reporte.");
        }
    }

    va_SendClientMessage(playerid, -1, ""COLOR_GREEN"Has reportado al jugador %s (%d) con exíto. Ahora espera la repuesta de un administrador.", accountInformation[targetPlayerId][name], targetPlayerId);
    return 1;
}