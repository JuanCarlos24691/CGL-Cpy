#include <YSI_Coding\y_hooks>

hook OnPlayerConnect(playerid) {
    inline const ITimer_CreateCallback() Authenticator(playerid);
    Timer_CreateCallback(using inline ITimer_CreateCallback, 1500, 1);
    return 1;
}

hook OnPlayerDisconnect(playerid) {
    RestoreLoginAttemptInformation(playerid);
    return 1;
}

forward Authenticator(const playerid);
public Authenticator(const playerid) {
    strcpy(accountInformation[playerid][name], ReturnPlayerName(playerid));
    PlayerView(playerid);

    if (!IsAlphaNumeric(accountInformation[playerid][name])) {
        va_SendClientMessage(playerid, -1, ""COLOR_RED"¡Ups! El nombre con que entraste al servidor no es válido.");
        va_SendClientMessage(playerid, -1, ""COLOR_RED"Este servidor solo admite caracteres alfanuméricos.");
        va_SendClientMessage(playerid, -1, ""COLOR_RED"Sí, estás usando caracteres especiales en tu nombre, debes saber que no es válido.");
        DelayToEjectThePlayer(playerid, 1500);
        return 1;
    }

    inline const ProcessBanInformation(const rows) {
        if (!isequal(banInformation[playerid][ip], ReturnPlayerIp(playerid), true) && rows == 0)
            return Login(playerid);

        new string[248];
        format(string, sizeof(string), ""COLOR_WHITE"Actualmente tu IP se encuentra baneada del servidor\n\nFecha de baneo: "COLOR_YELLOW"%s "COLOR_WHITE"| IP Baneada: "COLOR_RED"%s "COLOR_WHITE"| Razón del baneo: "COLOR_YELLOW"%s"COLOR_WHITE"", banInformation[playerid][date], banInformation[playerid][ip], banInformation[playerid][reason]);
        ShowPlayerDialog(playerid, 0, DIALOG_STYLE_MSGBOX, ""COLOR_RED"SISTEMA DE BANEO DE IP CGL", string, "Aceptar", "");
        RestoreBanInformation(playerid);

        DelayToEjectThePlayer(playerid, 1500);
    }

    SearchBanInformation(playerid, ReturnPlayerIp(playerid), using inline ProcessBanInformation);
    AssignPlayerColor(playerid);
    return 1;
}