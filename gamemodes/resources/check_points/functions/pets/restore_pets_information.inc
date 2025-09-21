forward RestorePetsInformation(const playerid);
public RestorePetsInformation(const playerid) {
    RestorePSInOperation(playerid);
    RestorePSTExiFromTheCheckPoint(playerid);
    RestorePSTWaitingTime(playerid);
    RestorePSTextDrawings(playerid);
    return 1;
}