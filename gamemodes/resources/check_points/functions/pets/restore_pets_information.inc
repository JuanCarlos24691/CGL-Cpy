forward RestorePetsInformation(const playerid);
public RestorePetsInformation(const playerid) {
    RestorePSInOperationBuy(playerid);
    RestorePSInOperationPlaceName(playerid);
    RestorePSTExiFromTheCheckPoint(playerid);
    RestorePSTWaitingTime(playerid);
    RestorePSTDBuy(playerid);
    RestorePSTDPlaceName(playerid);
    RestorePSTypeOfPetSelected(playerid);
    return 1;
}