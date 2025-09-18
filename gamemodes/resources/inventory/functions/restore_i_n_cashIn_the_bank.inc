forward RestoreINCashInTheBank(const playerid);
public RestoreINCashInTheBank(const playerid) {
    if (inventoryInformation[playerid][iNCashInTheBank] != EOS)
        inventoryInformation[playerid][iNCashInTheBank] = EOS;
    return 1;
}