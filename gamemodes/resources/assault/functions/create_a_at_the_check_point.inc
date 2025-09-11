forward CreateAAtTheCheckPoint(const playerid);
public CreateAAtTheCheckPoint(const playerid) {
    if (assaultPlayerInformation[playerid][aAtTheCheckPoint] != true)
        assaultPlayerInformation[playerid][aAtTheCheckPoint] = true;
    return 1;
}