forward DestroyInventoryInformationVar(const playerid);
public DestroyInventoryInformationVar(const playerid) {
    for (new i = 0; i < 12; i++) {
        if (inventoryInformation[playerid][textDrawings][i] != PlayerText:INVALID_TEXT_DRAW) {
            PlayerTextDrawDestroy(playerid, inventoryInformation[playerid][textDrawings][i]);
            inventoryInformation[playerid][textDrawings][i] = PlayerText:INVALID_TEXT_DRAW;
        }
    }

    if (inventoryInformation[playerid][cashInTheBank] != EOS)
        inventoryInformation[playerid][cashInTheBank] = EOS;

    if (inventoryInformation[playerid][lifeInsurance] != EOS)
        inventoryInformation[playerid][lifeInsurance] = EOS;

    if (inventoryInformation[playerid][drugs] != EOS)
        inventoryInformation[playerid][drugs] = EOS;

    if (inventoryInformation[playerid][drugged] != EOS)
        inventoryInformation[playerid][drugged] = EOS;

    if (inventoryInformation[playerid][inOperation])
        inventoryInformation[playerid][inOperation] = false;
    return 1;
}