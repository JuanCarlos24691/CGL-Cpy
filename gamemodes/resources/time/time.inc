#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    timeInformation[timer] = INVALID_TIMER;
    
    StartTime();
    return 1;
}