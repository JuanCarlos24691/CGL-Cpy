forward CreateAssaultCompleted(const playerid);
public CreateAssaultCompleted(const playerid) {
    if (assaultPlayerInformation[playerid][assaultCompleted] != true)
        assaultPlayerInformation[playerid][assaultCompleted] = true;
    return 1;
}