forward CreateInAssault(const playerid);
public CreateInAssault(const playerid) {
    if (assaultPlayerInformation[playerid][aInAssault] != true)
        assaultPlayerInformation[playerid][aInAssault] = true;
    return 1;
}