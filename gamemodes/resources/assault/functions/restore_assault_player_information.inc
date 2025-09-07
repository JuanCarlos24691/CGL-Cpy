forward RestoreAssaultPlayerInformation(const playerid);
public RestoreAssaultPlayerInformation(const playerid) {
    if (assaultPlayerInformation[playerid][inTheft] != false)
        assaultPlayerInformation[playerid][inTheft] = false;

    if (assaultPlayerInformation[playerid][checkPointExitTimer] != INVALID_TIMER)  {
        KillTimer(assaultPlayerInformation[playerid][checkPointExitTimer]);
        assaultPlayerInformation[playerid][checkPointExitTimer] = INVALID_TIMER;
    }

    for (new i = 0; i < 4; i++) {
        if (assaultPlayerInformation[playerid][assaultTextDrawing][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, assaultPlayerInformation[playerid][assaultTextDrawing][i]);
            assaultPlayerInformation[playerid][assaultTextDrawing][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }
    return 1;
}