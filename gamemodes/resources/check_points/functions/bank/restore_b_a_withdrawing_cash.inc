forward RestoreBAWithdrawingCash(const playerid);
public RestoreBAWithdrawingCash(const playerid) {
    if (bankInformation[playerid][bAWithdrawingCash] != false)
        bankInformation[playerid][bAWithdrawingCash] = false;
    return 1;
}