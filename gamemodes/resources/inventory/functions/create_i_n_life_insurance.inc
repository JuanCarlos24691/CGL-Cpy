forward CreateINLifeInsurance(const playerid, const input[]);
public CreateINLifeInsurance(const playerid, const input[]) {
    if (!isequal(inventoryInformation[playerid][iNCashInTheBank], input, true))
        strcpy(inventoryInformation[playerid][iNCashInTheBank], input);
    return 1;
}