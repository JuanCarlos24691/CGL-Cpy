#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    SetTimerEx("UpdateDay", 1000, true);

    dayInformation[day]++;
    return 1;
}