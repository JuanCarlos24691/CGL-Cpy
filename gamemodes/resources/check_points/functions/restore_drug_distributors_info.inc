forward RestoreDrugDistributorsInfo(const playerid);
public RestoreDrugDistributorsInfo(const playerid) {
    for (new i = 0; i < 11; i++) {
        if (drugDistributorsInformation[playerid][drugDistributorsTextDrawings][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, drugDistributorsInformation[playerid][drugDistributorsTextDrawings][i]);
            drugDistributorsInformation[playerid][drugDistributorsTextDrawings][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }

    if (drugDistributorsInformation[playerid][inOperation])
        drugDistributorsInformation[playerid][inOperation] = false;

    if (drugDistributorsInformation[playerid][drugDistributorsTimer] != INVALID_TIMER) {
        KillTimer(drugDistributorsInformation[playerid][drugDistributorsTimer]);
        drugDistributorsInformation[playerid][drugDistributorsTimer] = INVALID_TIMER;
    }
    return 1;
}