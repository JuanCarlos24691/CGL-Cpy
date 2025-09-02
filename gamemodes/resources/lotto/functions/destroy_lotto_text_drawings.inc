forward DestroyLottoTextDrawings();
public DestroyLottoTextDrawings() {
    for (new i = 0; i < 4; i++) {
        if (lottoInformation[textDrawings][i] != Text:INVALID_TEXT_DRAW) {
            TextDrawDestroy(lottoInformation[textDrawings][i]);
            lottoInformation[textDrawings][i] = Text:INVALID_TEXT_DRAW;
        }
    }
    return 1;
}