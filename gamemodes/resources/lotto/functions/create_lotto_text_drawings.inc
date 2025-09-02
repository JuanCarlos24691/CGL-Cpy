forward CreateLottoTextDrawings(const lotto[], const winner[]);
public CreateLottoTextDrawings(const lotto[], const winner[]) {
    for (new i = 0; i < 4; i++) {
        switch (i) {
            case 0: {
                if (lottoInformation[textDrawings][i] == Text:INVALID_TEXT_DRAW) {
                    lottoInformation[textDrawings][i] = TextDrawCreate(194.000, 349.000, "LD_SPAC:black");
                    TextDrawTextSize(lottoInformation[textDrawings][i], 250.000, 43.000);
                    TextDrawAlignment(lottoInformation[textDrawings][i], TEXT_DRAW_ALIGN_LEFT);
                    TextDrawColour(lottoInformation[textDrawings][i], -81);
                    TextDrawSetShadow(lottoInformation[textDrawings][i], 0);
                    TextDrawSetOutline(lottoInformation[textDrawings][i], 0);
                    TextDrawBackgroundColour(lottoInformation[textDrawings][i], 255);
                    TextDrawFont(lottoInformation[textDrawings][i], TEXT_DRAW_FONT_SPRITE_DRAW);
                    TextDrawSetProportional(lottoInformation[textDrawings][i], true);

                    TextDrawShowForAll(lottoInformation[textDrawings][i]);
                }
            }
            case 1: {
                if (lottoInformation[textDrawings][i] == Text:INVALID_TEXT_DRAW) {
                    lottoInformation[textDrawings][i] = TextDrawCreate(319.000, 352.000, "Sorteo_De_La_Loteria_"SERVER_TAG"");
                    TextDrawLetterSize(lottoInformation[textDrawings][i], 0.289, 1.199);
                    TextDrawAlignment(lottoInformation[textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    TextDrawColour(lottoInformation[textDrawings][i], -1);
                    TextDrawSetShadow(lottoInformation[textDrawings][i], 0);
                    TextDrawSetOutline(lottoInformation[textDrawings][i], 1);
                    TextDrawBackgroundColour(lottoInformation[textDrawings][i], 255);
                    TextDrawFont(lottoInformation[textDrawings][i], TEXT_DRAW_FONT_1);
                    TextDrawSetProportional(lottoInformation[textDrawings][i], true);

                    TextDrawShowForAll(lottoInformation[textDrawings][i]);
                }
            }
            case 2: {
                if (lottoInformation[textDrawings][i] == Text:INVALID_TEXT_DRAW) {
                    lottoInformation[textDrawings][i] = TextDrawCreate(319.000, 367.000, lotto);
                    TextDrawLetterSize(lottoInformation[textDrawings][i], 0.289, 1.199);
                    TextDrawAlignment(lottoInformation[textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    TextDrawColour(lottoInformation[textDrawings][i], -1);
                    TextDrawSetShadow(lottoInformation[textDrawings][i], 0);
                    TextDrawSetOutline(lottoInformation[textDrawings][i], 1);
                    TextDrawBackgroundColour(lottoInformation[textDrawings][i], 255);
                    TextDrawFont(lottoInformation[textDrawings][i], TEXT_DRAW_FONT_1);
                    TextDrawSetProportional(lottoInformation[textDrawings][i], true);

                    TextDrawShowForAll(lottoInformation[textDrawings][i]);
                } else {
                    TextDrawSetString(lottoInformation[textDrawings][i], lotto);
                }
            }
            case 3: {
                if (lottoInformation[textDrawings][i] == Text:INVALID_TEXT_DRAW) {
                    lottoInformation[textDrawings][i] = TextDrawCreate(319.000, 378.000, winner);
                    TextDrawLetterSize(lottoInformation[textDrawings][i], 0.289, 1.199);
                    TextDrawAlignment(lottoInformation[textDrawings][i], TEXT_DRAW_ALIGN_CENTER);
                    TextDrawColour(lottoInformation[textDrawings][i], -1);
                    TextDrawSetShadow(lottoInformation[textDrawings][i], 0);
                    TextDrawSetOutline(lottoInformation[textDrawings][i], 1);
                    TextDrawBackgroundColour(lottoInformation[textDrawings][i], 255);
                    TextDrawFont(lottoInformation[textDrawings][i], TEXT_DRAW_FONT_1);
                    TextDrawSetProportional(lottoInformation[textDrawings][i], true);

                    TextDrawShowForAll(lottoInformation[textDrawings][i]);
                } else {
                    TextDrawSetString(lottoInformation[textDrawings][i], winner);
                }
            }
        }
    }
}