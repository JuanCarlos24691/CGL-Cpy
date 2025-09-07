forward CreateAssaultCheckPoint();
public CreateAssaultCheckPoint() {
    if (assaultInformation[thiefCheckPoint] == INVALID_STREAMER_ID)
        assaultInformation[thiefCheckPoint] = CreateDynamicCP(assaultInformation[xCoordinateOfTheft][citiesInformation[selectedCity]], assaultInformation[yCoordinateOfTheft][citiesInformation[selectedCity]], assaultInformation[zCoordinateOfTheft][citiesInformation[selectedCity]], 2.0, -1, -1, -1, 9.0);

    if (assaultInformation[robberyLocationMapIcon] == INVALID_STREAMER_ID)
            assaultInformation[robberyLocationMapIcon] = CreateDynamicMapIcon(assaultInformation[xCoordinateOfTheft][citiesInformation[selectedCity]], assaultInformation[yCoordinateOfTheft][citiesInformation[selectedCity]], assaultInformation[zCoordinateOfTheft][citiesInformation[selectedCity]], 38, -1, -1, -1, -1, -1);
    return 1;
}