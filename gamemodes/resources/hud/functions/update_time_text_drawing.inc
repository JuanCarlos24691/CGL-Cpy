forward UpdateTimeTextDrawing();
public UpdateTimeTextDrawing() {
    foreach (new i : Player)
        if (!accountInformation[i][inGame])
            return HideTimeTextDrawing(i);
        else
            ShowTimeTextDrawing(i);

    new time[6];
    format(time, sizeof(time), "%02d:%02d", timeInformation[hour], timeInformation[minute]);

    CreateTimeTextDrawing(time);
    return 1;
}