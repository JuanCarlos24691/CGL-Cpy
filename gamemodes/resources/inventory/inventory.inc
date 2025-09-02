#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    for (new i = 0; i < MAX_PLAYERS; i++)
        for (new e = 0; e < 12; e++)
            inventoryInformation[i][textDrawings][e] = PlayerText:INVALID_TEXT_DRAW;
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    DestroyInventoryInformationVar(playerid);
    return 1;
}

hook OnPlayerKeyStateChange(playerid, KEY:newkeys, KEY:oldkeys) {
    if (newkeys & KEY_FIRE && inventoryInformation[playerid][inOperation])
        DestroyInventoryInformationVar(playerid);
    return 1;
}