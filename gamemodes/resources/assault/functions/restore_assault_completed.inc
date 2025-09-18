forward RestoreAssaultCompleted(const playerid);
public RestoreAssaultCompleted(const playerid) {
    if (assaultPlayerInformation[playerid][aAssaultCompleted] != false)
        assaultPlayerInformation[playerid][aAssaultCompleted] = false;
    return 1;
}