forward ChangeClanColor(const playerid);
public ChangeClanColor(const playerid) {
    if (accountInformation[playerid][assignedClan] == NO_TEAM)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"No puedes cambiar el color de un clan sí, no perteneces a uno.");

    new clanIdentifierSearched = SearchClanIndex(accountInformation[playerid][assignedClan]);

    if (!isequal(clanInformation[clanIdentifierSearched][leader], accountInformation[playerid][name], true))
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"No puedes cambiar el color de un clan sí, no eres el lider.");

    inline IDialog_ShowCallback(pid, dialogid, response, listitem, string:inputtext[]) {
	    #pragma unused dialogid, inputtext

        if (!response)
            return va_SendClientMessage(pid, -1, ""COLOR_RED"Cancelaste el cambio de color de tu clan.");

        for (new i = 0; i < numberOfClansCreated; i++)
            if (clanInformation[i][argb] == clanColorInformation[listitem][cCArgbColor] || isequal(clanColorInformation[i][cCHexadecimalColor], clanColorInformation[listitem][cCHexadecimalColor], true))
                return va_SendClientMessage(pid, -1, ""COLOR_RED"El color escogido no está disponible, por favor, vuelve a intentarlo.");

        clanInformation[clanIdentifierSearched][argb] = clanColorInformation[listitem][cCArgbColor];
        strcpy(clanInformation[clanIdentifierSearched][hexadecimal], clanColorInformation[listitem][cCHexadecimalColor]);

        foreach (new i : Player)
            if (accountInformation[i][assignedClan] == clanIdentifierSearched)
                AssignPlayerColor(i);

        va_SendClientMessage(pid, -1, "Haz cambiado el {%s}color{FFFFFF} de tu clan.", clanInformation[clanIdentifierSearched][hexadecimal]);
    }

    new colorsName[512], colorName[512];

    for (new i = 0; i < MAX_CLANS_COLORS; i++) {
        format(colorName, sizeof(colorsName), "{%s}%s\n", clanColorInformation[i][cCHexadecimalColor], clanColorInformation[i][cCNameColor]);
        strcat(colorsName, colorName);
    }

    Dialog_ShowCallback(playerid, using inline IDialog_ShowCallback, DIALOG_STYLE_LIST, "CLAN COLOR", colorsName, "OK", "CANCELAR");
    return 1;
}