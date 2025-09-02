forward CreateDateTextDrawing(const _date[]);
public CreateDateTextDrawing(const _date[]) {
    if (dateTextDrawing == Text:INVALID_TEXT_DRAW) {
        dateTextDrawing = TextDrawCreate(321.000, 427.000, _date);
        TextDrawLetterSize(dateTextDrawing, 0.508, 1.098);
        TextDrawAlignment(dateTextDrawing, TEXT_DRAW_ALIGN_CENTER);
        TextDrawColour(dateTextDrawing, -2686721);
        TextDrawSetShadow(dateTextDrawing, 0);
        TextDrawSetOutline(dateTextDrawing, 1);
        TextDrawBackgroundColour(dateTextDrawing, 33752063);
        TextDrawFont(dateTextDrawing, TEXT_DRAW_FONT_3);
        TextDrawSetProportional(dateTextDrawing, true);
    } else {
        TextDrawSetString(dateTextDrawing, _date);
    }
    return 1;
}