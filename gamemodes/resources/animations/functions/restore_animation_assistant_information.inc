forward RestoreAnimationAssistantInfo(const playerid);
public RestoreAnimationAssistantInfo(const playerid) {
    RestoreANInOperation(playerid);
    RestoreFirstAnimAssistantTd(playerid);
    RestoreSecondAnimAssistantTd(playerid);
    RestoreThirdAnimAssistantTd(playerid);
    return 1;
}