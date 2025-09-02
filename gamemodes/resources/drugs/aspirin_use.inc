#include <YSI_Coding\y_hooks>

hook OnPlayerDisconnect(playerid, text[]) {
    if (aspirinUseInformation[playerid][waitingTime] != 0)
        aspirinUseInformation[playerid][waitingTime] = 0;
    return 1;
}