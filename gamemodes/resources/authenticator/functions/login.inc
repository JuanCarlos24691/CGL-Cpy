forward Login(const playerid);
public Login(const playerid) {
    inline const ISearchAccountInformation(const result) {
        if (result == 0 || !accountInformation[playerid][exists])
            return 1;

        if (accountInformation[playerid][banTime] > 0 || accountInformation[playerid][banTime] == -1) {
            new string[248];
            strcat(string, ""COLOR_WHITE"Actualmente tu cuenta se encuentra baneada del servidor\n\n");
            format(string, sizeof(string), "%s"COLOR_WHITE"Fecha de baneo: "COLOR_YELLOW"%s", string, accountInformation[playerid][banDate]);
            strcat(string, ""COLOR_WHITE" | Días de baneo: "COLOR_RED"");

            if (accountInformation[playerid][banTime] == -1)
                strcat(string, "Permanente");
            else
                format(string, sizeof(string), "%s%d", string, accountInformation[playerid][banTime]);

            format(string, sizeof(string), "%s"COLOR_WHITE" | Razón del baneo: "COLOR_YELLOW"%s"COLOR_WHITE"", string, accountInformation[playerid][banReason]);
            ShowPlayerDialog(playerid, 0, DIALOG_STYLE_MSGBOX, ""COLOR_RED"SISTEMA DE BANEO CGL", string, "Aceptar", "");
            Kick(playerid);
        }

        SetPlayerSkin(playerid, accountInformation[playerid][skin]);

        inline const IDialog_ShowCallback(pid, dialogid, response, listitem, string:inputtext[]) {
	    #pragma unused dialogid, listitem

            if (!response) {
                va_SendClientMessage(pid, -1, ""COLOR_RED"Has cancelado el inicio de sesión.");
                return Kick(pid);
            }

            if (strlen(inputtext) < 8 || strlen(inputtext) > 128) {
                va_SendClientMessage(pid, -1, ""COLOR_RED"La contraseña ingresada no es válida. Esta debe tener entre 8 y 128 caracteres, por favor, vuelve a intentarlo.");
                return Login(pid);
            }

            VerifyLoginPassword(pid, inputtext);
        }

        new string[254];
        format(string, sizeof(string), ""COLOR_WHITE"Bienvenido a "COLOR_RED""SERVER_NAME"\n"COLOR_WHITE"Este nick, "COLOR_PURPLE"%s"COLOR_WHITE", esta Registrado\nSi esta no es tu cuenta, por favor salga y cambie su nick\n\nPor favor Escriba Aqui Su "COLOR_PHOSPHORESCENT_GREEN"Contraseña"COLOR_WHITE":", accountInformation[playerid][name]);
        Dialog_ShowCallback(playerid, using inline IDialog_ShowCallback, DIALOG_STYLE_PASSWORD, ""SERVER_NAME" - Ingrese", string, "Aceptar", "Cancelar");
    }

    SearchAccountInformation(playerid, accountInformation[playerid][name], using inline ISearchAccountInformation);
    return 1;
}

forward VerifyLoginPassword(const playerid, const loginPassword[]);
public VerifyLoginPassword(const playerid, const loginPassword[]) {
    inline const IVerifyPassword() {
        if (bcrypt_is_equal()) {
            if (!accountInformation[playerid][loggedIn])
                accountInformation[playerid][loggedIn] = true;

            switch (accountInformation[playerid][administrativeLevel]) {
                case 0: {
                    if (accountInformation[playerid][level] < 1000)
                        va_SendClientMessage(playerid, -1, ""COLOR_WHITE"Se Ha Identificado "COLOR_RED"Correctamente. "COLOR_BLUE"Player");
                    else
                        va_SendClientMessage(playerid, -1, ""COLOR_WHITE"Se Ha Identificado "COLOR_RED"Correctamente. "COLOR_BLUE"Regular Player");
                }
                case 1..3: va_SendClientMessage(playerid, -1, ""COLOR_WHITE"Se Ha Identificado "COLOR_RED"Correctamente. "COLOR_BLUE"Moderador");
                case 4..5: va_SendClientMessage(playerid, -1, ""COLOR_WHITE"Se Ha Identificado "COLOR_RED"Correctamente. "COLOR_BLUE"Administrador");
            }

            RestoreLoginAttemptInformation(playerid);
            SearchForAndUploadAccountInfo(playerid, accountInformation[playerid][name]);
        } else {
            if (loginAttempts[playerid] == 2) {
                va_SendClientMessage(playerid, -1, ""COLOR_ROSA"**KICK: %s (%d) (LOGIN INVALIDO) Demasiados inicios de sesión fallidos!", accountInformation[playerid][name], playerid);
                RestoreLoginAttemptInformation(playerid);
                Kick(playerid);
                return 1;
            }

            va_SendClientMessage(playerid, -1, ""COLOR_RED"Contraseña Incorrecta.");

            loginAttempts[playerid]++;
            Login(playerid);
        }
    }

    VerifyPassword(loginPassword, accountInformation[playerid][password], using inline IVerifyPassword);
    return 1;
}