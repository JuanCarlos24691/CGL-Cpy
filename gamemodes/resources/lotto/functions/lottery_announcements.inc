forward LotteryAnnouncements();
public LotteryAnnouncements() {
    if (timeInformation[hour] != 16 || timeInformation[minute] != 0)
        return 1;

    GameTextForAll("~g~/lotto 1 - 50~n~Premio mayor: $%d", 4500, 5, accumulatedWell);
    return 1;
}