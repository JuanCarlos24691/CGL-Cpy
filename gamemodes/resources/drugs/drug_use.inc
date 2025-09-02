#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    for (new i = 0; i < MAX_PLAYERS; i++)
        drugUseInformation[i][lifeRegenTimer] = INVALID_TIMER;
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    RestoreDrugUseInformation(playerid, true);
    return 1;
}

hook OnPlayerDeath(playerid, killerid, WEAPON:weapon) {
    if (drugUseInformation[playerid][inOperation]) {
        va_SendClientMessage(playerid, -1, ""COLOR_RED"Drogas Off");
        GameTextForPlayer(playerid, "~r~Drogas Off", 3000, 4);
    }

    RestoreDrugUseInformation(playerid, true);
    return 1;
}

