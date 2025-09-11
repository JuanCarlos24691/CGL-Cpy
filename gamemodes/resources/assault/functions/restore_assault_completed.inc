forward RestoreAssaultCompleted(const playerid);
public RestoreAssaultCompleted(const playerid) {
    if (assaultPlayerInformation[playerid][assaultCompleted] != false)
        assaultPlayerInformation[playerid][assaultCompleted] = false;
    return 1;
}