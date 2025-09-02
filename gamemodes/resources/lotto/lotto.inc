#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    for (new i = 0; i < 4; i++)
        lottoInformation[textDrawings][i] = Text:INVALID_TEXT_DRAW;

    lottoInformation[accumulatedWell] = (1000000 + (1000000 + random(4000001)));
    lottoInformation[setWinningNumber] = -1;

    SetTimerEx("LotteryWinnerAnnouncements", 1000, true);
    SetTimerEx("LotteryAnnouncements", 1000, true);
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    for (new i = 0; i < MAX_LOTTO; i++)
        if (isequal(accountInformation[playerid][name], lottoPlayerInformation[i][name], true) && lottoPlayerInformation[i][reserved])
            RestoreLottoPlayerInformation(i);
    return 1;
}