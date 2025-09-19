forward RestoreCAInOperation(const playerid);
public RestoreCAInOperation(const playerid) {
    if (clanAssistantInformation[playerid][cAInOperation] != false)
        clanAssistantInformation[playerid][cAInOperation] = false;
    return 1;
}