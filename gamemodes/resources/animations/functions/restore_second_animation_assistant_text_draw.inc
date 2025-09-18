forward RestoreSecondAnimAssistantTd(const playerid);
public RestoreSecondAnimAssistantTd(const playerid) {
    for (new i = 0; i < 12; i++) {
        if (animationAssistantInformation[playerid][aNSecondTextDrawingOfAssistance][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, animationAssistantInformation[playerid][aNSecondTextDrawingOfAssistance][i]);
            animationAssistantInformation[playerid][aNSecondTextDrawingOfAssistance][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }
    return 1;
}