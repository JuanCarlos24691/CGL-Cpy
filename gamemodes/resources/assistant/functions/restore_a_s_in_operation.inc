forward RestoreASInOperation(const playerid);
public RestoreASInOperation(const playerid) {
    if (assistantInformation[playerid][aSInOperation] != false)
        assistantInformation[playerid][aSInOperation] = false;
    return 1;
}