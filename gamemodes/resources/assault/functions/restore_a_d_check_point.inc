forward RestoreADCheckPoint(const playerid);
public RestoreADCheckPoint(const playerid) {
    if (assaultPlayerInformation[playerid][aDCheckPoint] != INVALID_STREAMER_ID)  {
        DestroyDynamicRaceCP(assaultPlayerInformation[playerid][aDCheckPoint]);
        assaultPlayerInformation[playerid][aDCheckPoint] = INVALID_STREAMER_ID;
    }
    return 1;
}