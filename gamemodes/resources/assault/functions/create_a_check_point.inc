forward CreateACheckPoint();
public CreateACheckPoint() {
    if (assaultInformation[aCheckPoint] == INVALID_STREAMER_ID)
        assaultInformation[aCheckPoint] = CreateDynamicCP(assaultInformation[ax][citiesInformation[selectedCity]], assaultInformation[ay][citiesInformation[selectedCity]], assaultInformation[az][citiesInformation[selectedCity]], 2.0, -1, -1, -1, 9.0);
    return 1;
}