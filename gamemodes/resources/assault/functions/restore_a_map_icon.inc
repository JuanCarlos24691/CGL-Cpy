forward RestoreAMapIcon();
public RestoreAMapIcon() {
    if (assaultInformation[aMapIcon] != INVALID_STREAMER_ID)  {
        DestroyDynamicMapIcon(assaultInformation[aMapIcon]);
        assaultInformation[aMapIcon] = INVALID_STREAMER_ID;
    }
    return 1;
}