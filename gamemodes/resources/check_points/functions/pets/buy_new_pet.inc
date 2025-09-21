forward BuyNewPet(const playerid, const nameOfPet[], const petType);
public BuyNewPet(const playerid, const nameOfPet[], const petType) {
    if (strlen(nameOfPet) < 2 || strlen(nameOfPet) > 6)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"El nombre del %s debe tener un rango de 2 a 6 caracteres.", typeOfPetsNames[petType]);

    new petPrice;

    switch (petType) {
        case 1: petPrice = 50000;
        case 2: petPrice = 60000;
        case 3: petPrice = 70000;
        case 4: petPrice = 85000;
        case 5: petPrice = 100000;
        case 6: petPrice = 150000;
        case 7: petPrice = 160000;
        case 8: petPrice = 170000;
        case 9: petPrice = 180000;
        case 10: petPrice = 200000;
        case 11: petPrice = 300000;
        case 12: petPrice = 310000;
        case 13: petPrice = 320000;
        case 14: petPrice = 330000;
        case 15: petPrice = 350000;
        case 16: petPrice = 500000;
        case 17: petPrice = 500000;
        case 18: petPrice = 500000;
        case 19: petPrice = 500000;
        case 20: petPrice = 500000;
    }

    if (accountInformation[playerid][cashInHand] < petPrice)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas por lo menos $%d para poder comprar un %s.", petPrice, typeOfPetsNames[petType]);

    RestorePetsInformation(playerid);

    accountInformation[playerid][cashInHand] -= petPrice;

    accountInformation[playerid][pet] = petType;
    strcpy(accountInformation[playerid][petName], nameOfPet);

    ApplyAnimation(playerid, "INT_SHOP", "shop_pay", 3.0, false, false, false, false, SYNC_NONE);
    va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE_GREEN"Compraste Un(a) %s Y Le Puciste %s Por $%d", typeOfPetsNames[petType], nameOfPet, petPrice);
    return 1;
}