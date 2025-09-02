forward UpdateDayTextDrawing();
public UpdateDayTextDrawing() {
    foreach (new i : Player)
        if (!accountInformation[i][inGame])
            return HideDayTextDrawing(i);
        else
            ShowDayTextDrawing(i);

    CreateDayTextDrawing(daysOfTheWeek[dayInformation[day]]);
    return 1;
}