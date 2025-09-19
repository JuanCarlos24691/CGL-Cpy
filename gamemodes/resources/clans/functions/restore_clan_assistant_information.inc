forward RestoreClanAssistantInfo(const playerid);
public RestoreClanAssistantInfo(const playerid) {
    RestoreCATextDrawings(playerid);
    RestoreCAInOperation(playerid);
    return 1;
}