forward LotteryWinnerAnnouncements();
public LotteryWinnerAnnouncements() {
    if (timeInformation[hour] != 18 || timeInformation[minute] != 0)
        return 1;

    new winningNumber;
    winningNumber = (lottoInformation[setWinningNumber] != -1) ? lottoInformation[setWinningNumber] : random(50);

    if (lottoInformation[setWinningNumber] != -1)
        lottoInformation[setWinningNumber] = -1;

    va_SendClientMessageToAll(-1, ""COLOR_DARK_GREEN"Sorteo De La Loteria De "SERVER_NAME"");
    va_SendClientMessageToAll(-1, ""COLOR_DARK_GREEN"Numero De Hoy: %d   Premio Mayor: $%d", winningNumber + 1, lottoInformation[accumulatedWell]);

    new lotto[60];
    format(lotto, sizeof(lotto), "Lotto: ~g~$%d~w~ Numero Ganador: ~b~~h~%d", lottoInformation[accumulatedWell], winningNumber + 1);

    if (strlen(lotto) > 56)
        format(lotto, sizeof(lotto), "%s..", ret_strmid(lotto, 0, 56));

    RepairTextdrawString(lotto);

    foreach (new i : Player) {
        if (isequal(accountInformation[i][name], lottoPlayerInformation[winningNumber][name], true) && lottoPlayerInformation[winningNumber][reserved]) {
            accountInformation[i][cashInHand] += lottoInformation[accumulatedWell];
            lottoInformation[accumulatedWell] = (1000000 + (500000 + random(2000001)));

            for (new e = 0; e < MAX_LOTTO; e++)
                RestoreLottoPlayerInformation(e);

            new winner[60];
            format(winner, sizeof(winner), "Ganador: %s (%d)", accountInformation[i][name], i);

            if (strlen(winner) > 56)
                format(winner, sizeof(winner), "%s..", ret_strmid(lotto, 0, 56));

            RepairTextdrawString(winner);

            CreateLottoTextDrawings(lotto, winner);
            SetTimerEx("DestroyLottoTextDrawings", 10000, false);

            va_SendClientMessageToAll(-1, ""COLOR_DARK_GREEN"Ganador: %s (%d)", accountInformation[i][name], i);
            ApplyAnimation(i, "CASINO", "manwind", 2.7, false, false, false, false, SYNC_NONE);
            return 1;
        }
    }

    CreateLottoTextDrawings(lotto, "No_Hubo_Ganador");
    SetTimerEx("DestroyLottoTextDrawings", 10000, false);

    for (new i = 0; i < MAX_LOTTO; i++)
        RestoreLottoPlayerInformation(i);

    if (dayInformation[day] == 0)
        lottoInformation[accumulatedWell] = 1000000 + (500000 + random(2000001));
    else
        lottoInformation[accumulatedWell] += 500000 + random(2000001);

    va_SendClientMessageToAll(-1, ""COLOR_DARK_GREEN"No Hubo Ganador");
    va_SendClientMessageToAll(-1, ""COLOR_DARK_GREEN"Premio Mayor Acumulado: $%d", lottoInformation[accumulatedWell]);
    return 1;
}