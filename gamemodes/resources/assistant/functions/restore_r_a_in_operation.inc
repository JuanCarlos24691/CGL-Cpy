forward RestoreRAInOperation(const playerid);
public RestoreRAInOperation(const playerid) {
    if (rulesAssistantInformation[playerid][rAInOperation] != false)
        rulesAssistantInformation[playerid][rAInOperation] = false;
    return 1;
}