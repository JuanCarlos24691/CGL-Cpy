forward CreateATInTheProcessOfDelivery(const playerid);
public CreateATInTheProcessOfDelivery(const playerid) {
    if (assaultPlayerInformation[playerid][aTInTheProcessOfDelivery] == INVALID_TIMER)
        assaultPlayerInformation[playerid][aTInTheProcessOfDelivery] = SetTimerEx("UpdateATInTheProcessOfDelivery", 1000, true, "i", playerid);
    return 1;
}