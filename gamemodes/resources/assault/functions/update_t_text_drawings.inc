forward UpdateTTextDrawings(const playerid);
public UpdateTTextDrawings(const playerid) {
    if (!accountInformation[playerid][inGame])
        return RestoreTTextDrawings(playerid);

    new time[6];
    format(time, sizeof(time), "%02d:%02d", assaultPlayerInformation[playerid][aMinutes], assaultPlayerInformation[playerid][aSeconds]);

    if (assaultPlayerInformation[playerid][aSeconds] == 0) {
        if (assaultPlayerInformation[playerid][aMinutes] > 0) {
            assaultPlayerInformation[playerid][aMinutes]--;
            assaultPlayerInformation[playerid][aSeconds] = 59;
        }
    } else {
        assaultPlayerInformation[playerid][aSeconds]--;
    }

    CreateTTextDrawings(playerid, time);
    return 1;
}