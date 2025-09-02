forward UpdateDateTextDrawing();
public UpdateDateTextDrawing() {
    foreach (new i : Player)
        if (!accountInformation[i][inGame])
            return HideDateTextDrawing(i);
        else
            ShowDateTextDrawing(i);

    new _date[16], year, month, _day;
    getdate(year, month, _day);
    format(_date, sizeof(_date), "%02d/%02d/%04d", _day, month, year);

    CreateDateTextDrawing(_date);
    return 1;
}