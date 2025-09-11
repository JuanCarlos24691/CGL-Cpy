forward CreateInAssault(const playerid);
public CreateInAssault(const playerid) {
    if (assaultPlayerInformation[playerid][inAssault] != true)
        assaultPlayerInformation[playerid][inAssault] = true;
    return 1;
}