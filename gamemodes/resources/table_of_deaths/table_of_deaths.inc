#include <YSI_Coding\y_hooks>

hook OnPlayerDeath(playerid, killerid, WEAPON:weapon) {
    if (killerid == INVALID_PLAYER_ID || playerid == killerid)
        SendDeathMessage(INVALID_PLAYER_ID, playerid, weapon);
    else if (!accountInformation[killerid][onDuty] && killerid != INVALID_PLAYER_ID || playerid != killerid)
        SendDeathMessage(killerid, playerid, weapon);
    return 1;
}