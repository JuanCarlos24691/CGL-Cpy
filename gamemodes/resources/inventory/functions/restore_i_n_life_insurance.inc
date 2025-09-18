forward RestoreINLifeInsurance(const playerid);
public RestoreINLifeInsurance(const playerid) {
    if (inventoryInformation[playerid][iNLifeInsurance] != EOS)
        inventoryInformation[playerid][iNLifeInsurance] = EOS;
    return 1;
}