forward RestoreBankInformation(const playerid);
public RestoreBankInformation(const playerid) {
    for (new i = 0; i < 8; i++) {
        if (bankInformation[playerid][bankTextDrawings][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, bankInformation[playerid][bankTextDrawings][i]);
            bankInformation[playerid][bankTextDrawings][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }

    if (bankInformation[playerid][inOperation])
        bankInformation[playerid][inOperation] = false;

    if (bankInformation[playerid][depositingCash])
        bankInformation[playerid][depositingCash] = false;

    if (bankInformation[playerid][withdrawingCash])
        bankInformation[playerid][withdrawingCash] = false;

    if (bankInformation[playerid][bankTimer] != INVALID_TIMER) {
        KillTimer(bankInformation[playerid][bankTimer]);
        bankInformation[playerid][bankTimer] = INVALID_TIMER;
    }
    return 1;
}