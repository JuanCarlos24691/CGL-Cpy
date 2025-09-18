forward CreateBAWithdrawingCash(const playerid);
public CreateBAWithdrawingCash(const playerid) {
    if (bankInformation[playerid][bAWithdrawingCash] != true)
        bankInformation[playerid][bAWithdrawingCash] = true;
    return 1;
}