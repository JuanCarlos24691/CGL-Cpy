forward RestoreAMinutes(const playerid);
public RestoreAMinutes(const playerid) {
    if (assaultPlayerInformation[playerid][aMinutes] != 3)
        assaultPlayerInformation[playerid][aMinutes] = 3;
    return 1;
}