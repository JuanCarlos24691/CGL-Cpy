#include <YSI_Coding\y_hooks>

hook OnPlayerDisconnect(playerid, disconnectReason) {
    new string[][] = { "Time out", "Quit", "Kicked", "Custom", "Mode End" };

    foreach (new i : Player)
        if (i != playerid)
            va_SendClientMessage(i, -1, ""COLOR_GRAY"* %s (%d) Ha salido del servidor. (%s)", ReturnPlayerName(playerid), playerid, string[disconnectReason]);
    return 1;
}