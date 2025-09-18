forward CreateANInOperation(const playerid);
public CreateANInOperation(const playerid) {
    if (animationAssistantInformation[playerid][aNInOperation] != true)
        animationAssistantInformation[playerid][aNInOperation] = true;
    return 1;
}