forward RestoreASeconds(const playerid);
public RestoreASeconds(const playerid) {
    if (assaultPlayerInformation[playerid][aSeconds] != 0)
        assaultPlayerInformation[playerid][aSeconds] = 0;
    return 1;
}