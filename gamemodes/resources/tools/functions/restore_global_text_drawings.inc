forward RestoreGlobalTextDrawings(const playerid);
public RestoreGlobalTextDrawings(const playerid) {
    RestoreFirstAnimAssistantTd(playerid);
    RestoreSecondAnimAssistantTd(playerid);
    RestoreThirdAnimAssistantTd(playerid);
    RestoreATextDrawings(playerid);
    RestoreCompletedATextDrawings(playerid);
    RestoreASTextDrawings(playerid);
    RestoreRATextDrawings(playerid);
    RestoreARTextDrawings(playerid);
    RestoreBATextDrawings(playerid);
    RestoreDDTextDrawings(playerid);
    RestoreLVPlayerTextDrawings(playerid);
    RestorePSTextDrawings(playerid);
    return 1;
}