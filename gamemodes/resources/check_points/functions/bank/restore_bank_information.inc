forward RestoreBankInformation(const playerid);
public RestoreBankInformation(const playerid) {
    RestoreBATextDrawings(playerid);
    RestoreBADepositingCash(playerid);
    RestoreBAWithdrawingCash(playerid);
    RestoreBATExitFromTheCheckPoint(playerid);
    RestoreBAInOperation(playerid);
    return 1;
}