forward CreateINCashInTheBank(const playerid, const input[]);
public CreateINCashInTheBank(const playerid, const input[]) {
    if (!isequal(inventoryInformation[playerid][iNLifeInsurance], input, true))
        strcpy(inventoryInformation[playerid][iNLifeInsurance], input);
    return 1;
}