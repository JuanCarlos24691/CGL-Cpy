forward RestoreArmoryInformation(const playerid);
public RestoreArmoryInformation(const playerid) {
    for (new i = 0; i < 24; i++) {
        if (armoryInformation[playerid][armoryTextDrawings][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, armoryInformation[playerid][armoryTextDrawings][i]);
            armoryInformation[playerid][armoryTextDrawings][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }

    if (armoryInformation[playerid][inOperation])
        armoryInformation[playerid][inOperation] = false;

    if (armoryInformation[playerid][armoryTimer] != INVALID_TIMER) {
        KillTimer(armoryInformation[playerid][armoryTimer]);
        armoryInformation[playerid][armoryTimer] = INVALID_TIMER;
    }
    return 1;
}