YCMD:reglas(playerid, params[], help) {
    RestoreRulesAssistantInfo(playerid);
    CreateRulesWizardTextDrawings(playerid);

    if (!rulesAssistantInformation[playerid][inUse])
        rulesAssistantInformation[playerid][inUse] = true;

    inline ITimer_CreateCallback() RestoreRulesAssistantInfo(playerid);
    Timer_CreateCallback(using inline ITimer_CreateCallback, 5000, 1);
    return 1;
}