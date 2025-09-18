forward RestoreANInOperation(const playerid);
public RestoreANInOperation(const playerid) {
    if (animationAssistantInformation[playerid][aNInOperation] != false)
        animationAssistantInformation[playerid][aNInOperation] = false;
    return 1;
}