#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    RestoreAssaultInformation(false, false, false, false);
    CreateAssaultCheckPoint();

    for (new i = 0; i < MAX_PLAYERS; i++)
        RestoreAssaultPlayerInformation(i);

    SetTimerEx("UpdateAssault", 1000, true);
    return 1;
}

hook OnPlayerEnterDynamicCP(playerid, checkpoint) {
    if (checkpoint == assaultInformation[thiefCheckPoint]) {
        CreateAssaultTextDrawing(playerid);

        if (assaultInformation[atTheAssaultCheckPoint] != true)
            assaultInformation[atTheAssaultCheckPoint] = true;

        if (assaultPlayerInformation[playerid][checkPointExitTimer] == INVALID_TIMER)
            assaultPlayerInformation[playerid][checkPointExitTimer] = SetTimerEx("ExitFromTheTheftCheckPoint", 1000, true, "i", playerid);
    }
    return 1;
}

hook OnPlayerKeyStateChange(playerid, KEY:newkeys, KEY:oldkeys) {
    if (newkeys & KEY_FIRE && assaultInformation[atTheAssaultCheckPoint])
        RestoreAssaultPlayerInformation(playerid);
    return 1;
}