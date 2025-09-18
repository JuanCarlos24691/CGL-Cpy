forward RestoreThirdAnimAssistantTd(const playerid);
public RestoreThirdAnimAssistantTd(const playerid) {
    for (new i = 0; i < 11; i++) {
        if (animationAssistantInformation[playerid][aNThirdTextDrawingOfAssistance][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, animationAssistantInformation[playerid][aNThirdTextDrawingOfAssistance][i]);
            animationAssistantInformation[playerid][aNThirdTextDrawingOfAssistance][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }
    return 1;
}