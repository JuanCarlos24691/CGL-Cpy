forward UpdateATInTheProcessOfDelivery(const playerid);
public UpdateATInTheProcessOfDelivery(const playerid) {
    if (assaultPlayerInformation[playerid][aMinutes] != 0 || assaultPlayerInformation[playerid][aSeconds] != 0)
        return UpdateTTextDrawings(playerid);

    RestoreAssaultPlayerInformation(playerid);
    GameTextForPlayer(playerid, "~r~Fallaste_el_robo", 4500, 3);
    return 1;
}