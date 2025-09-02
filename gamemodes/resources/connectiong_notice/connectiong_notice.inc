#include <YSI_Coding\y_hooks>

hook OnPlayerConnect(playerid) {
    foreach (new i : Player)
        if (i != playerid)
            va_SendClientMessage(i, -1, ""COLOR_GRAY"* %s (%d) Ha entrado al servidor.", accountInformation[playerid][name], playerid);
    return 1;
}