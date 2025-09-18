#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    for (new i = 0; i < MAX_PLAYERS; i++)
        RestoreInventoryInformation(i);
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    RestoreInventoryInformation(playerid);
    return 1;
}

hook OnPlayerKeyStateChange(playerid, KEY:newkeys, KEY:oldkeys) {
    if (newkeys & KEY_FIRE && inventoryInformation[playerid][iNInOperation])
        RestoreInventoryInformation(playerid);
    return 1;
}