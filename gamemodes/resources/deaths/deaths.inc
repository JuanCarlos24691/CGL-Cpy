#include <YSI_Coding\y_hooks>

hook OnPlayerDeath(playerid, killerid, WEAPON:weapon) {
    if (hospitalInformation[playerid][inSkinSelection])
        return -1;

    Penalize(playerid, killerid);
    Reward(playerid, killerid, weapon);

    SetPlayerSpawn(playerid, 0.0, 0.0, 0.0, 0.0, false);
    return 1;
}