forward CreateRAInOperation(const playerid);
public CreateRAInOperation(const playerid) {
    if (rulesAssistantInformation[playerid][rAInOperation] != true)
        rulesAssistantInformation[playerid][rAInOperation] = true;
    return 1;
}