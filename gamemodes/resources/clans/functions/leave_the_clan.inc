forward LeaveTheClan(const playerid);
public LeaveTheClan(const playerid) {
    if (accountInformation[playerid][assignedClan] == NO_TEAM)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"No puedes salir de un clan sí, no perteneces a uno.");

    new clanIdentifierSearched = SearchClanIndex(accountInformation[playerid][assignedClan]);

    inline const IExpelDisconnectedClanMembers(const rows) printf("[CLANES] Se han expulsado %d jugadores de un clan recién borrado.", rows);

    inline const IDeleteClanInformation(const result) {
        if (result == 0)
            return va_SendClientMessage(playerid, -1, ""COLOR_RED"Se ha producido un error al intentar eliminar tu clan.");

        foreach (new i : Player) {
            if (accountInformation[i][assignedClan] == clanInformation[clanIdentifierSearched][uniqueClanIdentifier]) {
                accountInformation[i][assignedClan] = NO_TEAM;

                AssignPlayerName(i);
                AssignPlayerColor(i);
            }
        }

        va_SendClientMessageToAll(-1, "{%s}[CLANES]: El jugador (%s) ya no forma parte de su propio clan (%s) [CLAN ELIMINADO].", clanInformation[clanIdentifierSearched][hexadecimal], accountInformation[playerid][name], clanInformation[clanIdentifierSearched][name]);

        clanInformation[clanIdentifierSearched][UUID] = 0;
        clanInformation[clanIdentifierSearched][uniqueClanIdentifier] = 0;
        clanInformation[clanIdentifierSearched][leader][0] = EOS;
        clanInformation[clanIdentifierSearched][subLeader][0] = EOS;
        clanInformation[clanIdentifierSearched][name][0] = EOS;
        clanInformation[clanIdentifierSearched][tag][0] = EOS;
        clanInformation[clanIdentifierSearched][argb] = 0;
        clanInformation[clanIdentifierSearched][hexadecimal][0] = EOS;

        ExpelDisconnectedClanMembers(clanInformation[clanIdentifierSearched][uniqueClanIdentifier], using inline IExpelDisconnectedClanMembers);
        ProcessClanInformation();
    }

    inline IDialog_ShowCallback(pid, dialogid, response, listitem, string:inputtext[]) {
	    #pragma unused dialogid, listitem, inputtext

        if (!response)
            return va_SendClientMessage(pid, -1, ""COLOR_RED"Has cancelado la salida del clan.");

        if (isequal(accountInformation[pid][name], clanInformation[clanIdentifierSearched][leader], true))
            return DeleteClanInformation(clanInformation[clanIdentifierSearched][UUID], using inline IDeleteClanInformation);

        va_SendClientMessageToAll(-1, "{%s}[CLANES]: El jugador (%s) ya no forma parte del clan (%s).", clanInformation[clanIdentifierSearched][hexadecimal], accountInformation[pid][name], clanInformation[clanIdentifierSearched][name]);

        accountInformation[pid][assignedClan] = NO_TEAM;
        clanInformation[clanIdentifierSearched][members]--;

        AssignPlayerName(pid);
        AssignPlayerColor(pid);
    }

    Dialog_ShowCallback(playerid, using inline IDialog_ShowCallback, DIALOG_STYLE_MSGBOX, "Salida del clan", "Estas apunto de abandonar tu clan.", "Salir", "Cancelar");
    return 1;
}