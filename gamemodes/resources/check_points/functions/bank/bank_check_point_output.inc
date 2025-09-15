forward BankCheckPointOutput(const playerid);
public BankCheckPointOutput(const playerid) {
    if (bankInformation[playerid][inOperation] && !IsPlayerInCheckpoint(playerid))
        RestoreBankInformation(playerid);
    return 1;
}