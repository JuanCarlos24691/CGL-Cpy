#include <YSI_Coding\y_hooks>

hook OnPlayerText(playerid, text[]) {
    if (text[0] == '#') {
        if (accountInformation[playerid][administrativeLevel] >= 1 && accountInformation[playerid][administrativeLevel] <= 5) {
            new string[524];
            format(string, sizeof(string), ""COLOR_SINTAXYS"(Chat Administrativo) %s (%i) Díce: "COLOR_WHITE"%s", accountInformation[playerid][name], playerid, text[1]);

            foreach (new i : Player)
                if (accountInformation[playerid][administrativeLevel] >= 1 && accountInformation[playerid][administrativeLevel] <= 5)
                    va_SendClientMessage(i, -1, string);

            return ~0;
        }
    }
    return 1;
}