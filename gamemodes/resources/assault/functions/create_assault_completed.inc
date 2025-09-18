forward CreateAssaultCompleted(const playerid);
public CreateAssaultCompleted(const playerid) {
    if (assaultPlayerInformation[playerid][aAssaultCompleted] != true)
        assaultPlayerInformation[playerid][aAssaultCompleted] = true;
    return 1;
}