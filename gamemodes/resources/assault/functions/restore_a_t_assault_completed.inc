forward RestoreATAssaultCompleted(const playerid);
public RestoreATAssaultCompleted(const playerid) {
    if (assaultPlayerInformation[playerid][aTAssaultCompleted] != INVALID_TIMER)  {
        KillTimer(assaultPlayerInformation[playerid][aTAssaultCompleted]);
        assaultPlayerInformation[playerid][aTAssaultCompleted] = INVALID_TIMER;
    }
    return 1;
}