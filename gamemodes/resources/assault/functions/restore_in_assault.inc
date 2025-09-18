forward RestoreInAssault(const playerid);
public RestoreInAssault(const playerid) {
    if (assaultPlayerInformation[playerid][aInAssault] != false)
        assaultPlayerInformation[playerid][aInAssault] = false;
    return 1;
}