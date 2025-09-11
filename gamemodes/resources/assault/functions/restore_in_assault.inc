forward RestoreInAssault(const playerid);
public RestoreInAssault(const playerid) {
    if (assaultPlayerInformation[playerid][inAssault] != false)
        assaultPlayerInformation[playerid][inAssault] = false;
    return 1;
}