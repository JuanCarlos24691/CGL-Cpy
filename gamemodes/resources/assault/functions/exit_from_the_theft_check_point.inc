forward ExitFromTheTheftCheckPoint(const playerid);
public ExitFromTheTheftCheckPoint(const playerid) {
    if (assaultInformation[atTheAssaultCheckPoint] == true && IsPlayerInCheckpoint(playerid))
        return 1;

    if (assaultPlayerInformation[playerid][inTheft]) {
        RestoreAssaultInformation(false, true, true, true);
        va_SendClientMessage(playerid, -1, ""COLOR_RED"Tu Robo Fue Cancelado Por Abandonar El Checkpoint.");
    }

    RestoreAssaultPlayerInformation(playerid);
    return 1;
}