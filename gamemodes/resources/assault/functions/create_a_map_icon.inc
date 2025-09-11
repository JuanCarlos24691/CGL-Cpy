forward CreateAMapIcon();
public CreateAMapIcon() {
    if (assaultInformation[aMapIcon] == INVALID_STREAMER_ID)
        assaultInformation[aMapIcon] = CreateDynamicMapIcon(assaultInformation[ax][citiesInformation[selectedCity]], assaultInformation[ay][citiesInformation[selectedCity]], assaultInformation[az][citiesInformation[selectedCity]], 38, -1, -1, -1, -1, -1);
    return 1;
}