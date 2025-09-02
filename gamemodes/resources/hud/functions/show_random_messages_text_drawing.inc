forward ShowRandomMessagesTextDrawing(const playerid);
public ShowRandomMessagesTextDrawing(const playerid) {
    for (new i = 0; i < 2; i++) {
        if (!IsTextDrawVisibleForPlayer(playerid, randomMessagesTextDrawing[i]))
            TextDrawShowForPlayer(playerid, randomMessagesTextDrawing[i]);
    }
    return 1;
}