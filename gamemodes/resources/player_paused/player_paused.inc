#include <YSI_Coding\y_hooks>
hook OnGameModeInit() {
    for (new i = 0; i < MAX_PLAYERS; i++)
        RestorePlayerPausedInformation(i);
    return 1;
}

hook OnPlayerConnect(playerid) {
    CreatePSPlayerOnPause(playerid);
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    RestorePlayerPausedInformation(playerid);
    return 1;
}

hook OnPlayerUpdate(playerid) {
    if (playerPausedInformation[playerid][pSLastUpdate] != GetTickCount())
        CreatePSLastUpdate(playerid, GetTickCount());

    if (!IsPlayerPaused(playerid, 800) && playerPausedInformation[playerid][pSPaused] == true) {
        RestorePSTYimeLimitForExpulsion(playerid);
        RestorePSPaused(playerid);
        RestorePS3DLabel(playerid);
        RestorePSTUpdate3DLabel(playerid);
        RestorePSMinutes(playerid);
        RestorePSSeconds(playerid);
    }
    return 1;
}