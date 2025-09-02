forward CreateRandomMessagesTextDrawing(const firstMessage[], const secondMessage[]);
public CreateRandomMessagesTextDrawing(const firstMessage[], const secondMessage[]) {
    for (new i = 0; i < 2; i++) {
        switch (i) {
            case 0: {
                if (!isempty(firstMessage)) {
                    if (randomMessagesTextDrawing[i] == Text:INVALID_TEXT_DRAW) {
                        randomMessagesTextDrawing[i] = TextDrawCreate(319.000, 398.000, firstMessage);
                        TextDrawLetterSize(randomMessagesTextDrawing[i], 0.209, 0.999);
                        TextDrawAlignment(randomMessagesTextDrawing[i], TEXT_DRAW_ALIGN_CENTER);
                        TextDrawColour(randomMessagesTextDrawing[i], -1);
                        TextDrawSetShadow(randomMessagesTextDrawing[i], 0);
                        TextDrawSetOutline(randomMessagesTextDrawing[i], 1);
                        TextDrawBackgroundColour(randomMessagesTextDrawing[i], 255);
                        TextDrawFont(randomMessagesTextDrawing[i], TEXT_DRAW_FONT_1);
                        TextDrawSetProportional(randomMessagesTextDrawing[i], true);
                    } else {
                        TextDrawSetString(randomMessagesTextDrawing[i], firstMessage);
                        TextDrawShowForAll(randomMessagesTextDrawing[i]);
                    }
                } else {
                    TextDrawHideForAll(randomMessagesTextDrawing[i]);
                }
            }
            case 1: {
                if (!isempty(secondMessage)) {
                    if (randomMessagesTextDrawing[i] == Text:INVALID_TEXT_DRAW) {
                        randomMessagesTextDrawing[i] = TextDrawCreate(319.000, 408.000, secondMessage);
                        TextDrawLetterSize(randomMessagesTextDrawing[i], 0.209, 0.999);
                        TextDrawAlignment(randomMessagesTextDrawing[i], TEXT_DRAW_ALIGN_CENTER);
                        TextDrawColour(randomMessagesTextDrawing[i], -1);
                        TextDrawSetShadow(randomMessagesTextDrawing[i], 0);
                        TextDrawSetOutline(randomMessagesTextDrawing[i], 1);
                        TextDrawBackgroundColour(randomMessagesTextDrawing[i], 255);
                        TextDrawFont(randomMessagesTextDrawing[i], TEXT_DRAW_FONT_1);
                        TextDrawSetProportional(randomMessagesTextDrawing[i], true);
                    } else {
                        TextDrawSetString(randomMessagesTextDrawing[i], secondMessage);
                        TextDrawShowForAll(randomMessagesTextDrawing[i]);
                    }
                } else {
                    TextDrawHideForAll(randomMessagesTextDrawing[i]);
                }
            }
        }
    }
    return 1;
}