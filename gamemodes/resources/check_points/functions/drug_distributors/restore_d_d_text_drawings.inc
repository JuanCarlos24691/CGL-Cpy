forward RestoreDDTextDrawings(const playerid);
public RestoreDDTextDrawings(const playerid) {
    for (new i = 0; i < 11; i++) {
        if (drugDistributorsInformation[playerid][dDTextDrawings][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, drugDistributorsInformation[playerid][dDTextDrawings][i]);
            drugDistributorsInformation[playerid][dDTextDrawings][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }
    return 1;
}