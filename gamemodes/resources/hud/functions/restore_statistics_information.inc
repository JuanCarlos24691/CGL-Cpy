forward RestoreStatisticsInformation(const playerid);
public RestoreStatisticsInformation(const playerid) {
    for (new i = 0; i < 7; i++) {
        if (statisticsInformation[playerid][statisticsTextDrawings][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, statisticsInformation[playerid][statisticsTextDrawings][i]);
            statisticsInformation[playerid][statisticsTextDrawings][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }

    if (statisticsInformation[playerid][statisticsTimer] != INVALID_TIMER) {
        KillTimer(statisticsInformation[playerid][statisticsTimer]);
        statisticsInformation[playerid][statisticsTimer] = INVALID_TIMER;
    }

    if (statisticsInformation[playerid][uniqueClanIdentifier] != 0)
        statisticsInformation[playerid][uniqueClanIdentifier] = 0;

    if (statisticsInformation[playerid][clanColor] != 0)
        statisticsInformation[playerid][clanColor] = 0;

    if (statisticsInformation[playerid][name][0] != EOS)
        statisticsInformation[playerid][name][0] = EOS;

    if (statisticsInformation[playerid][deaths][0] != EOS)
        statisticsInformation[playerid][deaths][0] = EOS;

    if (statisticsInformation[playerid][killings][0] != EOS)
        statisticsInformation[playerid][killings][0] = EOS;

    if (statisticsInformation[playerid][level][0] != EOS)
        statisticsInformation[playerid][level][0] = EOS;

    if (statisticsInformation[playerid][range][0] != EOS)
        statisticsInformation[playerid][range][0] = EOS;

    if (statisticsInformation[playerid][clanName][0] != EOS)
        statisticsInformation[playerid][clanName][0] = EOS;
    return 1;
}