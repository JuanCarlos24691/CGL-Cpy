forward Register(const playerid);
public Register(const playerid) {
    inline const IDialog_ShowCallback(pid, dialogid, response, listitem, string:inputtext[]) {
	    #pragma unused dialogid, listitem

        if (!response)
            return va_SendClientMessage(pid, -1, ""COLOR_RED"Has cancelado el registro. Aun puedes volver a intentarlo con /registrar.");

        if (strlen(inputtext) < 8 || strlen(inputtext) > 128)
            return va_SendClientMessage(pid, -1, ""COLOR_RED"La contraseña ingresada no es válida. Esta debe tener entre 8 y 128 caracteres, por favor, vuelve a intentarlo.");

        EncryptRegistrationPassword(playerid, inputtext);
    }

    new string[254];
    format(string, sizeof(string), ""SERVER_NAME"\n\nNuevo Registro - Nick: %s\n\nRecomendado: Minimo 4 Caracteres, Maximo: 12 Caracteres\n\nPor Favor Escriba Una Contraseña:", accountInformation[playerid][name]);
    Dialog_ShowCallback(playerid, using inline IDialog_ShowCallback, DIALOG_STYLE_PASSWORD, ""SERVER_NAME" - Registro", string, "Registrar", "Cancelar");
    return 1;
}

forward EncryptRegistrationPassword(const playerid, const registrationPassword[]);
public EncryptRegistrationPassword(const playerid, const registrationPassword[]) {
    inline const IEncryptPassword() {
        bcrypt_get_hash(accountInformation[playerid][password]);

        inline const IInsertaccountInformation(const result) {
            if (result == 0) {
                va_SendClientMessage(playerid, -1, ""COLOR_RED"Ha ocurrido un error al intentar crear tu cuenta, por favor, vuelve a intentarlo.");
                return Kick(playerid);
            }

            va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE_GREEN"Ey %s (%d), El registro fue exítoso, ahora todo tu progreso se guardara.", accountInformation[playerid][name], playerid);
            va_SendClientMessageToAll(-1, ""COLOR_DARK_BLUE"%s (%d) Se Ha Registrado En El Server.", accountInformation[playerid][name], playerid);
            
            SearchForAndUploadAccountInfo(playerid, accountInformation[playerid][name]);
        }

        InsertaccountInformation(accountInformation[playerid][name], accountInformation[playerid][password], GetPlayerSkin(playerid), 1, 1, using inline IInsertaccountInformation);
    }

    EncryptPassword(registrationPassword, BCRYPT_COST, using inline IEncryptPassword);
    return 1;
}