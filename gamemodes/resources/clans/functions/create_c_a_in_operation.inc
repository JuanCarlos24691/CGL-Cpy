forward CreateCAInOperation(const playerid);
public CreateCAInOperation(const playerid) {
    if (clanAssistantInformation[playerid][cAInOperation] != true)
        clanAssistantInformation[playerid][cAInOperation] = true;
    return 1;
}