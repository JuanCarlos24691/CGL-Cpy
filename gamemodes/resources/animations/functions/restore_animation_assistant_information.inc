forward RestoreAnimationAssistantInfo(const playerid);
public RestoreAnimationAssistantInfo(const playerid) {
    for (new i = 0; i < 58; i++) {
        if (animationAssistantInformation[playerid][firstTextDrawingOfAssistance][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, animationAssistantInformation[playerid][firstTextDrawingOfAssistance][i]);
            animationAssistantInformation[playerid][firstTextDrawingOfAssistance][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }

    for (new i = 0; i < 12; i++) {
        if (animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i]);
            animationAssistantInformation[playerid][secondTextDrawingOfAssistance][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }

    for (new i = 0; i < 11; i++) {
        if (animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i]);
            animationAssistantInformation[playerid][thirdTextDrawingOfAssistance][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }

    if (animationAssistantInformation[playerid][inOperation])
        animationAssistantInformation[playerid][inOperation] = false;
    return 1;
}