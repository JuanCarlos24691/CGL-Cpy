forward ChangeClanTag(const playerid);
public ChangeClanTag(const playerid) {
    if (accountInformation[playerid][assignedClan] == NO_TEAM)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"No puedes cambiar el tag de tu clan sí, no perteneces a uno.");

    new clanIdentifierSearched = SearchClanIndex(accountInformation[playerid][assignedClan]);

    if (!isequal(clanInformation[clanIdentifierSearched][leader], accountInformation[playerid][name], true))
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"No puedes cambiar el tag de tu clan sí, no eres el lider.");

    inline DialogueResponse(pid, dialogid, response, listitem, string:inputtext[]) {
	    #pragma unused dialogid, listitem
 
        if (!response)
            return va_SendClientMessage(pid, -1, ""COLOR_RED"Has cancelado el cambio de tag de tu clan.");

        if (strlen(inputtext) < 3 || strlen(inputtext) > 7)
            return va_SendClientMessage(pid, -1, ""COLOR_RED"El tag del clan debe tener entre 3 y 7 caracteres.");

        for (new i = 0; i < numberOfClansCreated; i++)
            if (isequal(clanInformation[i][tag], inputtext, true))
                return va_SendClientMessage(pid, -1, ""COLOR_RED"El tag ingresado no está disponible, por favor, vuelve a intentarlo.");

        strcpy(clanInformation[clanIdentifierSearched][tag], inputtext);

        foreach (new i : Player)
            if (accountInformation[i][assignedClan] == clanIdentifierSearched)
                AssignPlayerName(i);
    }

    Dialog_ShowCallback(playerid, using inline DialogueResponse, DIALOG_STYLE_INPUT, "CLAN TAG", "Por Favor Ingresa El Tag De Tu Clan\nEl Tag Debe Contener Entre 3 y 7 Caracteres.", "Aceptar", "Cancelar");
    return 1;
}