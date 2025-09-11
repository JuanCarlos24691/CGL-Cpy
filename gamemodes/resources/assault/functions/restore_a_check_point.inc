forward RestoreACheckPoint();
public RestoreACheckPoint() {
    if (assaultInformation[aCheckPoint] != INVALID_STREAMER_ID)  {
        DestroyDynamicCP(assaultInformation[aCheckPoint]);
        assaultInformation[aCheckPoint] = INVALID_STREAMER_ID;
    }
    return 1;
}