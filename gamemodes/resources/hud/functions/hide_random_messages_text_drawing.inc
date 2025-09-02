forward HideRandomMessagesTextDrawing(const playerid);
public HideRandomMessagesTextDrawing(const playerid) {
    for (new i = 0; i < 2; i++) {
        if (IsTextDrawVisibleForPlayer(playerid, randomMessagesTextDrawing[i]))
            TextDrawHideForPlayer(playerid, randomMessagesTextDrawing[i]);
    }
    return 1;
}