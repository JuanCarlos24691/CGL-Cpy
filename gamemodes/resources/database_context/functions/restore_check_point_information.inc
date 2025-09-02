forward RestoreCheckPointInformation(const index);
public RestoreCheckPointInformation(const index) {
    if (checkPointsInformation[index][UUID] != -1)
        checkPointsInformation[index][UUID] = -1;

    if (checkPointsInformation[index][type] != -1)
        checkPointsInformation[index][type] = -1;

    if (checkPointsInformation[index][icon] != -1)
        checkPointsInformation[index][icon] = -1;

    if (checkPointsInformation[index][inside] != -1)
        checkPointsInformation[index][inside] = -1;

    if (checkPointsInformation[index][outsideXCoordinate] != 0.0)
        checkPointsInformation[index][outsideXCoordinate] = 0.0;

    if (checkPointsInformation[index][outsideYCoordinate] != 0.0)
        checkPointsInformation[index][outsideYCoordinate] = 0.0;

    if (checkPointsInformation[index][outsideZCoordinate] != 0.0)
        checkPointsInformation[index][outsideZCoordinate] = 0.0;

    if (checkPointsInformation[index][outsideAngle] != 0.0)
        checkPointsInformation[index][outsideAngle] = 0.0;

    if (checkPointsInformation[index][insideXCoordinate] != 0.0)
        checkPointsInformation[index][insideXCoordinate] = 0.0;

    if (checkPointsInformation[index][insideYCoordinate] != 0.0)
        checkPointsInformation[index][insideYCoordinate] = 0.0;

    if (checkPointsInformation[index][insideZCoordinate] != 0.0)
        checkPointsInformation[index][insideZCoordinate] = 0.0;

    if (checkPointsInformation[index][insideAngle] != 0.0)
        checkPointsInformation[index][insideAngle] = 0.0;

    if (checkPointsInformation[index][interactionZoneXCoordinate] != 0.0)
        checkPointsInformation[index][interactionZoneXCoordinate] = 0.0;

    if (checkPointsInformation[index][interactionZoneYCoordinate] != 0.0)
        checkPointsInformation[index][interactionZoneYCoordinate] = 0.0;

    if (checkPointsInformation[index][interactionZoneZCoordinate] != 0.0)
        checkPointsInformation[index][interactionZoneZCoordinate] = 0.0;

    if (checkPointsInformation[index][interactionZoneAngle] != 0.0)
        checkPointsInformation[index][interactionZoneAngle] = 0.0;

    if (checkPointsInformation[index][virtualWorld] != -1)
        checkPointsInformation[index][virtualWorld] = -1;

    if (checkPointsInformation[index][outsideCheckPoint] != INVALID_STREAMER_ID)  {
        DestroyDynamicCP(checkPointsInformation[index][outsideCheckPoint]);
        checkPointsInformation[index][outsideCheckPoint] = INVALID_STREAMER_ID;
    }

    if (checkPointsInformation[index][insideCheckPoint] != INVALID_STREAMER_ID)  {
        DestroyDynamicCP(checkPointsInformation[index][insideCheckPoint]);
        checkPointsInformation[index][insideCheckPoint] = INVALID_STREAMER_ID;
    }

    if (checkPointsInformation[index][interactionZoneCheckPoint] != INVALID_STREAMER_ID)  {
        DestroyDynamicCP(checkPointsInformation[index][interactionZoneCheckPoint]);
        checkPointsInformation[index][interactionZoneCheckPoint] = INVALID_STREAMER_ID;
    }

    if (checkPointsInformation[index][mapIcon] != INVALID_STREAMER_ID)  {
        DestroyDynamicMapIcon(checkPointsInformation[index][mapIcon]);
        checkPointsInformation[index][mapIcon] = INVALID_STREAMER_ID;
    }
    return 1;
}