forward RestoreDamageReportInformation(const playerid);
public RestoreDamageReportInformation(const playerid) {
    for (new i = 0; i < 6; i++) {
        if (damageReportInformation[playerid][textDrawings][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, damageReportInformation[playerid][textDrawings][i]);
            damageReportInformation[playerid][textDrawings][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }

    if (damageReportInformation[playerid][timer] != INVALID_TIMER) {
        KillTimer(damageReportInformation[playerid][timer]);
        damageReportInformation[playerid][timer] = INVALID_TIMER;
    }
    return 1;
}