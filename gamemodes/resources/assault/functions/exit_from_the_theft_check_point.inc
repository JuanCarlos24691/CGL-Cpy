forward ExitFromTheTheftCheckPoint(const playerid);
public ExitFromTheTheftCheckPoint(const playerid) {
    if (assaultPlayerInformation[playerid][aAtTheCheckPoint] == true && IsPlayerInCheckpoint(playerid))
        return 1;

    if (assaultPlayerInformation[playerid][aInAssault]) {
        RestoreAssaultPlayerInformation(playerid);
        va_SendClientMessage(playerid, -1, ""COLOR_RED"Tu Robo Fue Cancelado Por Abandonar El Checkpoint.");
    }

    if (assaultPlayerInformation[playerid][aAssaultCompleted])
        return RestoreCompletedATextDrawings(playerid);

    RestoreATextDrawings(playerid);
    RestoreAAtTheCheckPoint(playerid);
    RestoreATExitFromTheCheckPoint(playerid);
    return 1;
}