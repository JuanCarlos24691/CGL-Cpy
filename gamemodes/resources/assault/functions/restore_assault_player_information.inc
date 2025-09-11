forward RestoreAssaultPlayerInformation(const playerid);
public RestoreAssaultPlayerInformation(const playerid) {
    RestoreInAssault(playerid);
    RestoreATextDrawings(playerid);
    RestoreCompletedATextDrawings(playerid);
    RestoreAAtTheCheckPoint(playerid);
    RestoreATAssaultCompleted(playerid);
    RestoreATExitFromTheCheckPoint(playerid);
    RestoreAssaultCompleted(playerid);
    RestoreATInTheProcessOfDelivery(playerid);
    RestoreAMinutes(playerid);
    RestoreASeconds(playerid);
    RestoreTTextDrawings(playerid);
    RestoreADCheckPoint(playerid);
    return 1;
}