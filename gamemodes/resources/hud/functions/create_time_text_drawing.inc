forward CreateTimeTextDrawing(const time[]);
public CreateTimeTextDrawing(const time[]) {
    if (timeTextDrawing == Text:INVALID_TEXT_DRAW) {
        timeTextDrawing = TextDrawCreate(575.000, 24.000, time);
        TextDrawLetterSize(timeTextDrawing, 0.538, 1.799);
        TextDrawAlignment(timeTextDrawing, TEXT_DRAW_ALIGN_CENTER);
        TextDrawColour(timeTextDrawing, -1);
        TextDrawSetShadow(timeTextDrawing, 0);
        TextDrawSetOutline(timeTextDrawing, 1);
        TextDrawBackgroundColour(timeTextDrawing, 150);
        TextDrawFont(timeTextDrawing, TEXT_DRAW_FONT_3);
        TextDrawSetProportional(timeTextDrawing, true);
    } else {
        TextDrawSetString(timeTextDrawing, time);
    }
    return 1;
}