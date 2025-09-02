YCMD:cmds(playerid, params[], help) {
    RestoreAssistantInformation(playerid);
    CreateWizardTextDrawings(playerid);

    if (!assistantInformation[playerid][inOperation])
        assistantInformation[playerid][inOperation] = true;
    return 1;
}