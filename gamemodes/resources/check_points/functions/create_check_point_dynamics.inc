forward CreateCheckPointDynamics(const rows);
public CreateCheckPointDynamics(const rows) {
    for (new i = 0; i < rows; i++) {
        new uniqueIdentifier = ((i + 1) * 2654435760) & 0x7FFFFFFF;

        if (checkPointsInformation[i][outsideCheckPoint] == INVALID_STREAMER_ID)
            checkPointsInformation[i][outsideCheckPoint] = CreateDynamicCP(checkPointsInformation[i][outsideXCoordinate], checkPointsInformation[i][outsideYCoordinate], checkPointsInformation[i][outsideZCoordinate], 2.0, -1, -1, -1, 9.0);

        if (checkPointsInformation[i][insideCheckPoint] == INVALID_STREAMER_ID)
            checkPointsInformation[i][insideCheckPoint] = CreateDynamicCP(checkPointsInformation[i][insideXCoordinate], checkPointsInformation[i][insideYCoordinate], checkPointsInformation[i][insideZCoordinate], 2.0, uniqueIdentifier, -1, -1, 9.0);

        if (checkPointsInformation[i][type] == 0 || checkPointsInformation[i][type] == 1 || checkPointsInformation[i][type] == 2 || checkPointsInformation[i][type] == 6 && checkPointsInformation[i][interactionZoneCheckPoint] == INVALID_STREAMER_ID) {
            checkPointsInformation[i][interactionZoneCheckPoint] = CreateDynamicCP(checkPointsInformation[i][interactionZoneXCoordinate], checkPointsInformation[i][interactionZoneYCoordinate], checkPointsInformation[i][interactionZoneZCoordinate], 1.3, uniqueIdentifier, -1, -1, 9.0);
            checkPointsInformation[i][mapIcon] = CreateDynamicMapIcon(checkPointsInformation[i][outsideXCoordinate], checkPointsInformation[i][outsideYCoordinate], checkPointsInformation[i][outsideZCoordinate], checkPointsInformation[i][icon], -1, -1, -1, -1, -1);
        } else if (checkPointsInformation[i][interactionZoneCheckPoint] == INVALID_STREAMER_ID) {
            checkPointsInformation[i][interactionZoneCheckPoint] = CreateDynamicCP(checkPointsInformation[i][interactionZoneXCoordinate], checkPointsInformation[i][interactionZoneYCoordinate], checkPointsInformation[i][interactionZoneZCoordinate], 2.0, -1, -1, -1, 9.0);
            checkPointsInformation[i][mapIcon] = CreateDynamicMapIcon(checkPointsInformation[i][interactionZoneXCoordinate], checkPointsInformation[i][interactionZoneYCoordinate], checkPointsInformation[i][interactionZoneZCoordinate], checkPointsInformation[i][icon], -1, -1, -1, -1, -1);
        }

        if (checkPointsInformation[i][virtualWorld] != uniqueIdentifier)
            checkPointsInformation[i][virtualWorld] = uniqueIdentifier;
    }
    return 1;
}