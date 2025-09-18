forward CreateBADepositingCash(const playerid);
public CreateBADepositingCash(const playerid) {
    if (bankInformation[playerid][bADepositingCash] != true)
        bankInformation[playerid][bADepositingCash] = true;
    return 1;
}