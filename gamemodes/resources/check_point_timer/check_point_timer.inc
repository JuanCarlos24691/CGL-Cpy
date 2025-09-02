#include <YSI_Coding\y_hooks>

hook OnPlayerEnterDynamicCP(playerid, checkpoint) {
    if (gettime() - checkPointTimer[playerid] < 3)
        return -1;

    checkPointTimer[playerid] = gettime();
    return 1;
}