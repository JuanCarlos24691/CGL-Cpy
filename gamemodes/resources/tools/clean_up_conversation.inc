stock DeleteConversationOfAllPlayers() {
    for (new i; i < 124; i++)
        va_SendClientMessageToAll(-1, "");
    return 1;
}

stock DeletePlayerConversation(const playerid) {
    for (new i; i < 124; i++)
        va_SendClientMessage(playerid, -1, "");
    return 1;
}