forward CreateNewClan(const playerid, const nameOfTheNewClan[]);
public CreateNewClan(const playerid, const nameOfTheNewClan[]) {
    if (!IsAlphaNumeric(nameOfTheNewClan)) {
        va_SendClientMessage(playerid, -1, ""COLOR_RED"¡Ups! El nombre del clan no es válido.");
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Solo se admiten caracteres alfanuméricos. Sí, estás usando caracteres especiales en el nombre del clan, debes saber que no es válido.");
    }

    if (strlen(nameOfTheNewClan) < 4 || strlen(nameOfTheNewClan) > 16)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"El nombre del clan debe tener entre 4 y 16 caracteres.");

    for (new i = 0; i < numberOfClansCreated; i++)
        if (isequal(clanInformation[i][name], nameOfTheNewClan, true))
            return va_SendClientMessage(playerid, -1, ""COLOR_RED"Ya existe un clan con el nombre ingresado, por favor, vuelve a intentarlo.");

    new uniqueIdentifierOfTheNewClan = GetUniqueClanIdentifier();

    if (uniqueIdentifierOfTheNewClan == NO_TEAM)
        return va_SendClientMessage(playerid, -1, "¡Ups! Se ha alcanzado el límite de clanes, puedes intentarlo en otro momento.");

    AssignTagToNewClan(playerid, uniqueIdentifierOfTheNewClan, nameOfTheNewClan);
    return 1;
}

forward AssignTagToNewClan(const playerid, const uniqueIdentifierOfTheNewClan, const nameOfTheNewClan[]);
public AssignTagToNewClan(const playerid, const uniqueIdentifierOfTheNewClan, const nameOfTheNewClan[]) {
    new nameOfTheNewClanBuffered[17];
    strcpy(nameOfTheNewClanBuffered, nameOfTheNewClan);

    inline const IDialogResponseTagCreation(pid, dialogid, response, listitem, string:inputtext[]) {
	    #pragma unused dialogid, listitem

        new tagOfTheNewClan[8];

        if (response) {
            if (strlen(inputtext) < 3 || strlen(inputtext) > 7)
                return va_SendClientMessage(playerid, -1, ""COLOR_RED"El nombre del tag debe tener entre 3 y 7 caracteres.");

            for (new i = 0; i < numberOfClansCreated; i++)
                if (isequal(clanInformation[i][tag], inputtext, true))
                    return va_SendClientMessage(pid, -1, ""COLOR_RED"Ya existe un clan con el tag ingresado, por favor, vuelve a intentarlo.");

            strcpy(tagOfTheNewClan, inputtext);
        } else {
            strcpy(tagOfTheNewClan, "No tag");
        }

        AssignColorToNewClan(playerid, uniqueIdentifierOfTheNewClan, nameOfTheNewClanBuffered, tagOfTheNewClan);
    }

    Dialog_ShowCallback(playerid, using inline IDialogResponseTagCreation, DIALOG_STYLE_INPUT, "CLAN TAG", "Por Favor Ingresa El Tag De Tu Clan\nEl Tag Debe Contener Entre 3 y 7 Caracteres.", "Aceptar", "Omitir");
    return 1;
}

forward AssignColorToNewClan(const playerid, const uniqueIdentifierOfTheNewClan, const nameOfTheNewClan[], const tagOfTheNewClan[]);
public AssignColorToNewClan(const playerid, const uniqueIdentifierOfTheNewClan, const nameOfTheNewClan[], const tagOfTheNewClan[]) {
    new nameOfTheNewClanBuffered[17], tagOfTheNewClanBuffered[7];
    strcpy(nameOfTheNewClanBuffered, nameOfTheNewClan);
    strcpy(tagOfTheNewClanBuffered, tagOfTheNewClan);

    inline const IDialogResponseColorCreation(pid, dialogid, response, listitem, string:inputtext[]) {
	    #pragma unused dialogid, inputtext

        if (!response)
            return va_SendClientMessage(pid, -1, ""COLOR_RED"Se ha cancelado la creación del clan debido a que no seleccionaste un color válido.");

        for (new i = 0; i < numberOfClansCreated; i++)
            if (clanInformation[i][argb] == clanColorInformation[listitem][cCArgbColor] || isequal(clanInformation[i][hexadecimal], clanColorInformation[listitem][cCHexadecimalColor], true))
                return va_SendClientMessage(pid, -1, ""COLOR_RED"Ya existe un clan con el color ingresado, por favor, vuelve a intentarlo.");

        InsertNewClanInformation(playerid, uniqueIdentifierOfTheNewClan, nameOfTheNewClanBuffered, tagOfTheNewClanBuffered, clanColorInformation[listitem][cCArgbColor], clanColorInformation[listitem][cCHexadecimalColor]);
    }

    new colorsName[512], colorName[512];

    for (new i = 0; i < MAX_CLANS_COLORS; i++) {
        format(colorName, sizeof(colorName), "{%s}%s\n", clanColorInformation[i][cCHexadecimalColor], clanColorInformation[i][cCNameColor]);
        strcat(colorsName, colorName);
    }

    Dialog_ShowCallback(playerid, using inline IDialogResponseColorCreation, DIALOG_STYLE_LIST, "CLAN COLOR", colorsName, "OK", "CANCELAR");
    return 1;
}

forward InsertNewClanInformation(const playerid, const uniqueIdentifierOfTheNewClan, const nameOfTheNewClan[], const tagOfTheNewClan[], const argbColorOfTheNewClan, const hexadecimalColorOfTheNewClan[]);
public InsertNewClanInformation(const playerid, const uniqueIdentifierOfTheNewClan, const nameOfTheNewClan[], const tagOfTheNewClan[], const argbColorOfTheNewClan, const hexadecimalColorOfTheNewClan[]) {
    inline const IInsertClanInformation(const result) {
        if (result == 0)
            return va_SendClientMessage(playerid, -1, ""COLOR_RED"Ha ocurrido un error al intentar crear tu clan, por favor, vuelve a intentarlo.");

        LoadAndAssignNewClanInformation(playerid, uniqueIdentifierOfTheNewClan);
    }

    InsertClanInformation(uniqueIdentifierOfTheNewClan, accountInformation[playerid][name], nameOfTheNewClan, tagOfTheNewClan, argbColorOfTheNewClan, hexadecimalColorOfTheNewClan, using inline IInsertClanInformation);
    return 1;
}

forward LoadAndAssignNewClanInformation(const playerid, const uniqueIdentifierOfTheNewClan);
public LoadAndAssignNewClanInformation(const playerid, const uniqueIdentifierOfTheNewClan) {
    inline const ILoadClansInformation(const rows) {
        if (rows == 0)
            return va_SendClientMessage(playerid, -1, "Se ha producido un error al intentar crear tu clan, por favor, vuelve a intentarlo.");

        clanOld[uniqueIdentifierOfTheNewClan] = clanInformation[uniqueIdentifierOfTheNewClan]; // Copia los datos actuales del clan a clanOld para preservar el estado anterior
        accountInformation[playerid][assignedClan] = uniqueIdentifierOfTheNewClan; // Asigna el identificador del clan al jugador

        AssignPlayerName(playerid);
        AssignPlayerColor(playerid);

        accountInformation[playerid][cashInHand] -= 5000000; // Descontar el costo de crear un clan
        va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE_GREEN"¡EnHorabuena! El clan fue creado correctamente.");
    }

    LoadClansInformation(using inline ILoadClansInformation);
    return 1;
}