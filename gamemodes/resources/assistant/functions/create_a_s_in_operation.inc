forward CreateASInOperation(const playerid);
public CreateASInOperation(const playerid) {
    if (assistantInformation[playerid][aSInOperation] != true)
        assistantInformation[playerid][aSInOperation] = true;
    return 1;
}