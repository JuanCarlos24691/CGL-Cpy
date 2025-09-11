forward RestoreATInTheProcessOfDelivery(const playerid);
public RestoreATInTheProcessOfDelivery(const playerid) {
    if (assaultPlayerInformation[playerid][aTInTheProcessOfDelivery] != INVALID_TIMER)  {
        KillTimer(assaultPlayerInformation[playerid][aTInTheProcessOfDelivery]);
        assaultPlayerInformation[playerid][aTInTheProcessOfDelivery] = INVALID_TIMER;
    }
    return 1;
}