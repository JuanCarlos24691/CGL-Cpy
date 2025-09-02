forward CreateDayTextDrawing(const _day[]);
public CreateDayTextDrawing(const _day[]) {
    if (dayTextDrawing == Text:INVALID_TEXT_DRAW) {
        dayTextDrawing = TextDrawCreate(571.000, 8.000, _day);
        TextDrawLetterSize(dayTextDrawing, 0.428, 1.098);
        TextDrawAlignment(dayTextDrawing, TEXT_DRAW_ALIGN_CENTER);
        TextDrawColour(dayTextDrawing, -1);
        TextDrawSetShadow(dayTextDrawing, 0);
        TextDrawSetOutline(dayTextDrawing, 1);
        TextDrawBackgroundColour(dayTextDrawing, 150);
        TextDrawFont(dayTextDrawing, TEXT_DRAW_FONT_3);
        TextDrawSetProportional(dayTextDrawing, true);
    } else {
        TextDrawSetString(dayTextDrawing, _day);
    }
    return 1;
}