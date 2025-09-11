forward RestoreAAtTheCheckPoint(const playerid);
public RestoreAAtTheCheckPoint(const playerid) {
    if (assaultPlayerInformation[playerid][aAtTheCheckPoint] != false)
        assaultPlayerInformation[playerid][aAtTheCheckPoint] = false;
    return 1;
}