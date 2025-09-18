forward RestoreBADepositingCash(const playerid);
public RestoreBADepositingCash(const playerid) {
    if (bankInformation[playerid][bADepositingCash] != false)
        bankInformation[playerid][bADepositingCash] = false;
    return 1;
}