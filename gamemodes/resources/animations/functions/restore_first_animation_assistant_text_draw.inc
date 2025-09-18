forward RestoreFirstAnimAssistantTd(const playerid);
public RestoreFirstAnimAssistantTd(const playerid) {
    for (new i = 0; i < 58; i++) {
        if (animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i]);
            animationAssistantInformation[playerid][aNFirstTextDrawingOfAssistance][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }
    return 1;
}