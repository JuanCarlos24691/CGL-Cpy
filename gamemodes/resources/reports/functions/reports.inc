forward Reports(const playerid);
public Reports(const playerid) {
    new string[512], dialog[sizeof(string) * MAX_REPORTS];

    strcat(dialog, ""COLOR_SINTAXYS"Aprobar todos los reportes.\n");

    for (new i = 0; i < MAX_REPORTS; i++) {
        if (reportInformation[i][playerReported] != EOS && reportInformation[i][idOfThePlayerReported] != INVALID_PLAYER_ID && reportInformation[i][reportingPlayer] != EOS && reportInformation[i][idOfTheReportingPlayer] != INVALID_PLAYER_ID && reportInformation[i][reasonForReport] != EOS && reportInformation[i][reasonForReport] != EOS) {
            if (reportInformation[i][reportRead])
                format(string, sizeof(string), ""COLOR_RED"(Leído) "COLOR_WHITE"El jugador "COLOR_ROSA"%s"COLOR_WHITE" (%i) reporto al jugador "COLOR_RED"%s"COLOR_WHITE" (%i)", reportInformation[i][reportingPlayer], reportInformation[i][idOfTheReportingPlayer], reportInformation[i][playerReported], reportInformation[i][idOfThePlayerReported], reportInformation[i][reasonForReport], reportInformation[i][reportingTime]);
            else
                format(string, sizeof(string), ""COLOR_GREEN"(No leído) "COLOR_WHITE"El jugador "COLOR_ROSA"%s"COLOR_WHITE" (%i) reporto al jugador "COLOR_RED"%s"COLOR_WHITE" (%i)", reportInformation[i][reportingPlayer], reportInformation[i][idOfTheReportingPlayer], reportInformation[i][playerReported], reportInformation[i][idOfThePlayerReported], reportInformation[i][reasonForReport], reportInformation[i][reportingTime]);

            strcat(dialog, string);
            strcat(dialog, "\n");
        }
    }

    if (isempty(string[0]))
        return SendClientMessage(playerid, -1, ""COLOR_RED"Actualmente no hay reportes.");

    inline DialogueResponse(pid, dialogid, response, listitem, string:inputtext[]) {
	    #pragma unused dialogid, inputtext

        if (!response)
            return va_SendClientMessage(pid, -1, ""COLOR_RED"Has cerrado el menu de reportes.");

        if (listitem == 0) {
            for (new i; i < MAX_REPORTS; i++) {
                reportInformation[i][playerReported][0] = EOS;
                reportInformation[i][idOfThePlayerReported] = INVALID_PLAYER_ID;
                reportInformation[i][reportingPlayer][0] = EOS;
                reportInformation[i][idOfTheReportingPlayer] = INVALID_PLAYER_ID;
                reportInformation[i][reasonForReport][0] = EOS;
                reportInformation[i][reportingTime][0] = EOS;
                reportInformation[i][reportRead] = false;
            }

            foreach (new i : Player)
                if (accountInformation[i][administrativeLevel] > 0)
                    va_SendClientMessage(i, -1, ""COLOR_ROSA"**REPORTE: %s (%i) (ADMIN REPORTE) Un administrador aprobó todos los reportes.", accountInformation[playerid][name], playerid);
            return 1;
        }

        if (isequal(reportInformation[listitem - 1][reportingPlayer], accountInformation[reportInformation[listitem - 1][idOfTheReportingPlayer]][name], true) && !reportInformation[listitem - 1][reportRead])
            va_SendClientMessage(reportInformation[listitem - 1][idOfTheReportingPlayer], -1, ""COLOR_ROSA"**REPORTE: %s (%i) (ADMIN REPORTE) Un administrador esta revisando tu reporte.", accountInformation[playerid][name], playerid);

        if (reportInformation[listitem - 1][playerReported] != EOS && reportInformation[listitem - 1][idOfThePlayerReported] != INVALID_PLAYER_ID && reportInformation[listitem - 1][reportingPlayer] != EOS && reportInformation[listitem - 1][idOfTheReportingPlayer] != INVALID_PLAYER_ID && reportInformation[listitem - 1][reasonForReport] != EOS && reportInformation[listitem - 1][reasonForReport] != EOS && reportInformation[listitem - 1][reportRead])
            format(string, sizeof(string), ""COLOR_WHITE"Reporte del jugador "COLOR_ROSA"%s "COLOR_WHITE"(%i)"COLOR_WHITE".\n\nJugador reportado: "COLOR_RED"%s "COLOR_WHITE"(%i) | Reazón: "COLOR_RED"%s"COLOR_WHITE" | Tiempo: "COLOR_GREEN"%s"COLOR_WHITE" | Revisado: "COLOR_GREEN"Sí"COLOR_WHITE".", reportInformation[listitem - 1][reportingPlayer], reportInformation[listitem - 1][idOfTheReportingPlayer], reportInformation[listitem - 1][playerReported], reportInformation[listitem - 1][idOfThePlayerReported], reportInformation[listitem - 1][reasonForReport], reportInformation[listitem - 1][reportingTime]);
        else
            format(string, sizeof(string), ""COLOR_WHITE"Reporte del jugador "COLOR_ROSA"%s "COLOR_WHITE"(%i)"COLOR_WHITE".\n\nJugador reportado: "COLOR_RED"%s "COLOR_WHITE"(%i) | Reazón: "COLOR_RED"%s"COLOR_WHITE" | Tiempo: "COLOR_GREEN"%s"COLOR_WHITE" | Revisado: "COLOR_RED"No"COLOR_WHITE".", reportInformation[listitem - 1][reportingPlayer], reportInformation[listitem - 1][idOfTheReportingPlayer], reportInformation[listitem - 1][playerReported], reportInformation[listitem - 1][idOfThePlayerReported], reportInformation[listitem - 1][reasonForReport], reportInformation[listitem - 1][reportingTime]);

        if (!reportInformation[listitem - 1][reportRead])
            reportInformation[listitem - 1][reportRead] = true;

        ShowPlayerDialog(playerid, 0, DIALOG_STYLE_MSGBOX, "Reportes", string, "Cerrar", "");
    }

    Dialog_ShowCallback(playerid, using inline DialogueResponse, DIALOG_STYLE_LIST, "Reportes", dialog, "Abrir", "Cerrar");
    return 1;
}