#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    ProcessCheckPointsInformation();
    return 1;
}