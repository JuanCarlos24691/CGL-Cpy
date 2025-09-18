YCMD:reglas(playerid, params[], help) {
    CreateRATextDrawings(playerid);
    CreateRAInOperation(playerid);

    inline ITimer_CreateCallback() RestoreRulesAssistantInfo(playerid);
    Timer_CreateCallback(using inline ITimer_CreateCallback, 5000, 1);
    return 1;
}