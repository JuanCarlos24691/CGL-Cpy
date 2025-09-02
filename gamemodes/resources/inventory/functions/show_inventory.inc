forward ShowInventory(const playerid);
public ShowInventory(const playerid) {
    format(inventoryInformation[playerid][cashInTheBank], 52, "Banco: ~g~$%d", accountInformation[playerid][cashInTheBank]);

    if (strlen(inventoryInformation[playerid][cashInTheBank]) > 50)
        format(inventoryInformation[playerid][cashInTheBank], 52, "%s..", ret_strmid(inventoryInformation[playerid][cashInTheBank], 0, 47));

    if (accountInformation[playerid][chlamydia] || accountInformation[playerid][gonorrhea] || accountInformation[playerid][syphilis])
        strcpy(inventoryInformation[playerid][diseases], "~r~Te Encuentras Infectado");
    else
        strcpy(inventoryInformation[playerid][diseases], "~r~No Tienes Enfermedades");

    if (strlen(inventoryInformation[playerid][diseases]) > 50)
        format(inventoryInformation[playerid][diseases], 52, "%s..", ret_strmid(inventoryInformation[playerid][diseases], 0, 47));

    if (strlen(inventoryInformation[playerid][cashInTheBank]) > 50)
        format(inventoryInformation[playerid][cashInTheBank], 52, "%s..", ret_strmid(inventoryInformation[playerid][cashInTheBank], 0, 47));

    format(inventoryInformation[playerid][lifeInsurance], 52, "Seguros: ~g~%d", accountInformation[playerid][lifeInsurance]);

    if (strlen(inventoryInformation[playerid][lifeInsurance]) > 50)
        format(inventoryInformation[playerid][lifeInsurance], 52, "%s..", ret_strmid(inventoryInformation[playerid][lifeInsurance], 0, 47));

    format(inventoryInformation[playerid][drugs], 52, "Drogas: ~g~%d_Gramos", accountInformation[playerid][drugs]);

    if (strlen(inventoryInformation[playerid][drugs]) > 50)
        format(inventoryInformation[playerid][drugs], 52, "%s..", ret_strmid(inventoryInformation[playerid][drugs], 0, 47));

    if (drugUseInformation[playerid][inOperation])
        strcpy(inventoryInformation[playerid][drugged], "Tus Drogas Estan: ~g~ON");
    else
        strcpy(inventoryInformation[playerid][drugged], "Tus Drogas Estan: ~r~OFF");

    if (strlen(inventoryInformation[playerid][drugged]) > 50)
        format(inventoryInformation[playerid][drugged], 52, "%s..", ret_strmid(inventoryInformation[playerid][drugged], 0, 47));

    format(inventoryInformation[playerid][aspirin], 52, "Aspirinas: ~g~%d", accountInformation[playerid][aspirin]);

    if (strlen(inventoryInformation[playerid][aspirin]) > 50)
        format(inventoryInformation[playerid][aspirin], 52, "%s..", ret_strmid(inventoryInformation[playerid][aspirin], 0, 47));

    format(inventoryInformation[playerid][condoms], 52, "Condones: ~g~%d", accountInformation[playerid][condoms]);

    if (strlen(inventoryInformation[playerid][condoms]) > 50)
        format(inventoryInformation[playerid][condoms], 52, "%s..", ret_strmid(inventoryInformation[playerid][condoms], 0, 47));

    RepairTextdrawString(inventoryInformation[playerid][cashInTheBank]);
    RepairTextdrawString(inventoryInformation[playerid][diseases]);
    RepairTextdrawString(inventoryInformation[playerid][lifeInsurance]);
    RepairTextdrawString(inventoryInformation[playerid][drugs]);
    RepairTextdrawString(inventoryInformation[playerid][drugged]);
    RepairTextdrawString(inventoryInformation[playerid][aspirin]);
    RepairTextdrawString(inventoryInformation[playerid][condoms]);

    if (!inventoryInformation[playerid][inOperation])
        inventoryInformation[playerid][inOperation] = true;

    CreateInventoryTextDrawings(playerid, inventoryInformation[playerid][cashInTheBank], inventoryInformation[playerid][diseases], inventoryInformation[playerid][lifeInsurance], inventoryInformation[playerid][drugs], inventoryInformation[playerid][drugged], inventoryInformation[playerid][condoms], inventoryInformation[playerid][aspirin]);
    return 1;
}