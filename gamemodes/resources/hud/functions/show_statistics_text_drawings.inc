forward ShowStatisticsTextDrawings(const playerid);
public ShowStatisticsTextDrawings(const playerid) {
    for (new i = 0; i < 7; i++)
        if (statisticsInformation[playerid][statisticsTextDrawings][i] != PlayerText:INVALID_TEXT_DRAW)
            PlayerTextDrawShow(playerid,  statisticsInformation[playerid][statisticsTextDrawings][i]);
    return 1;
}