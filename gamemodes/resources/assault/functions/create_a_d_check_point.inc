forward CreateADCheckPoint(const playerid);
public CreateADCheckPoint(const playerid) {
    if (assaultPlayerInformation[playerid][aDCheckPoint] == INVALID_STREAMER_ID)
        assaultPlayerInformation[playerid][aDCheckPoint] = CreateDynamicRaceCP(2, assaultInformation[adx][citiesInformation[selectedCity]], assaultInformation[ady][citiesInformation[selectedCity]], assaultInformation[adz][citiesInformation[selectedCity]], assaultInformation[adx][citiesInformation[selectedCity]], assaultInformation[ady][citiesInformation[selectedCity]], assaultInformation[adz][citiesInformation[selectedCity]], 10.0, -1, -1, playerid, 10000.0);
    return 1;
}