forward CreateATAssaultCompleted(const playerid);
public CreateATAssaultCompleted(const playerid) {
    if (assaultPlayerInformation[playerid][aTAssaultCompleted] == INVALID_TIMER)
        assaultPlayerInformation[playerid][aTAssaultCompleted] = SetTimerEx("CreateAssaultCompleted", 30000, true, "i", playerid);
    return 1;
}