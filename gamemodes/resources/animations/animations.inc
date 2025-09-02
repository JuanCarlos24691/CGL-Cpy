#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    for (new i = 0; i < MAX_PLAYERS; i++) {
        for (new a = 0; a < 58; a++)
            animationAssistantInformation[i][firstTextDrawingOfAssistance][a] = PlayerText:INVALID_TEXT_DRAW;

        for (new b = 0; b < 12; b++)
            animationAssistantInformation[i][secondTextDrawingOfAssistance][b] = PlayerText:INVALID_TEXT_DRAW;

        for (new b = 0; b < 11; b++)
            animationAssistantInformation[i][thirdTextDrawingOfAssistance][b] = PlayerText:INVALID_TEXT_DRAW;
    }
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    RestoreAnimationAssistantInfo(playerid);
    return 1;
}