forward ShowInventory(const playerid);
public ShowInventory(const playerid) {
    format(inventoryInformation[playerid][iNCashInTheBank], 52, "Banco: ~g~$%d", accountInformation[playerid][cashInTheBank]);

    if (strlen(inventoryInformation[playerid][iNCashInTheBank]) > 50)
        format(inventoryInformation[playerid][iNCashInTheBank], 52, "%s..", ret_strmid(inventoryInformation[playerid][iNCashInTheBank], 0, 47));

    if (accountInformation[playerid][chlamydia] || accountInformation[playerid][gonorrhea] || accountInformation[playerid][syphilis])
        strcpy(inventoryInformation[playerid][iNDiseases], "~r~Te Encuentras Infectado");
    else
        strcpy(inventoryInformation[playerid][iNDiseases], "~r~No Tienes Enfermedades");

    if (strlen(inventoryInformation[playerid][iNDiseases]) > 50)
        format(inventoryInformation[playerid][iNDiseases], 52, "%s..", ret_strmid(inventoryInformation[playerid][iNDiseases], 0, 47));

    if (strlen(inventoryInformation[playerid][iNCashInTheBank]) > 50)
        format(inventoryInformation[playerid][iNCashInTheBank], 52, "%s..", ret_strmid(inventoryInformation[playerid][iNCashInTheBank], 0, 47));

    format(inventoryInformation[playerid][iNLifeInsurance], 52, "Seguros: ~g~%d", accountInformation[playerid][lifeInsurance]);

    if (strlen(inventoryInformation[playerid][iNLifeInsurance]) > 50)
        format(inventoryInformation[playerid][iNLifeInsurance], 52, "%s..", ret_strmid(inventoryInformation[playerid][iNLifeInsurance], 0, 47));

    format(inventoryInformation[playerid][iNDrugs], 52, "Drogas: ~g~%d_Gramos", accountInformation[playerid][drugs]);

    if (strlen(inventoryInformation[playerid][iNDrugs]) > 50)
        format(inventoryInformation[playerid][iNDrugs], 52, "%s..", ret_strmid(inventoryInformation[playerid][iNDrugs], 0, 47));

    if (drugUseInformation[playerid][inOperation])
        strcpy(inventoryInformation[playerid][iNDrugged], "Tus Drogas Estan: ~g~ON");
    else
        strcpy(inventoryInformation[playerid][iNDrugged], "Tus Drogas Estan: ~r~OFF");

    if (strlen(inventoryInformation[playerid][iNDrugged]) > 50)
        format(inventoryInformation[playerid][iNDrugged], 52, "%s..", ret_strmid(inventoryInformation[playerid][iNDrugged], 0, 47));

    format(inventoryInformation[playerid][iNAspirin], 52, "iNAspirinas: ~g~%d", accountInformation[playerid][aspirin]);

    if (strlen(inventoryInformation[playerid][iNAspirin]) > 50)
        format(inventoryInformation[playerid][iNAspirin], 52, "%s..", ret_strmid(inventoryInformation[playerid][iNAspirin], 0, 47));

    format(inventoryInformation[playerid][iNCondoms], 52, "Condones: ~g~%d", accountInformation[playerid][condoms]);

    if (strlen(inventoryInformation[playerid][iNCondoms]) > 50)
        format(inventoryInformation[playerid][iNCondoms], 52, "%s..", ret_strmid(inventoryInformation[playerid][iNCondoms], 0, 47));

    RepairTextdrawString(inventoryInformation[playerid][iNCashInTheBank]);
    RepairTextdrawString(inventoryInformation[playerid][iNDiseases]);
    RepairTextdrawString(inventoryInformation[playerid][iNLifeInsurance]);
    RepairTextdrawString(inventoryInformation[playerid][iNDrugs]);
    RepairTextdrawString(inventoryInformation[playerid][iNDrugged]);
    RepairTextdrawString(inventoryInformation[playerid][iNAspirin]);
    RepairTextdrawString(inventoryInformation[playerid][iNCondoms]);

    CreateINInOperation(playerid);

    CreateINTextDrawings(playerid, inventoryInformation[playerid][iNCashInTheBank], inventoryInformation[playerid][iNDiseases], inventoryInformation[playerid][iNLifeInsurance], inventoryInformation[playerid][iNDrugs], inventoryInformation[playerid][iNDrugged], inventoryInformation[playerid][iNCondoms], inventoryInformation[playerid][iNAspirin]);
    return 1;
}