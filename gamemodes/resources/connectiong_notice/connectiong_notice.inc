#include <YSI_Coding\y_hooks>

hook OnPlayerConnect(playerid) {
    inline ITimer_CreateCallback() {
        foreach (new i : Player)
            if (i != playerid)
                va_SendClientMessage(i, -1, ""COLOR_GRAY"* %s (%d) Ha entrado al servidor.", accountInformation[playerid][name], playerid);
    }

    Timer_CreateCallback(using inline ITimer_CreateCallback, 1500, 1);
    return 1;
}