forward ChargeFeesForPets();
public ChargeFeesForPets() {
    if (timeInformation[hour] != 0 || timeInformation[minute] != 0)
        return 1;

    foreach (new i : Player) {
        if (accountInformation[i][pet] != 0) {
            switch (accountInformation[i][pet]) {
                case 1: { // Mosquito
                    accountInformation[i][cashInHand] -= 10000;
                }
                case 2: { // Gusano
                    accountInformation[i][cashInHand] -= 12000;
                }
                case 3: { // Pez
                    accountInformation[i][cashInHand] -= 14000;
                }
                case 4: { // Ratón
                    accountInformation[i][cashInHand] -= 17000;
                }
                case 5: { // Loro
                    accountInformation[i][cashInHand] -= 20000;
                }
                case 6: { // Águila
                    accountInformation[i][cashInHand] -= 30000;
                }
                case 7: { // Gato
                    accountInformation[i][cashInHand] -= 32000;
                }
                case 8: { // Perro
                    accountInformation[i][cashInHand] -= 34000;
                }
                case 9: { // Capibara
                    accountInformation[i][cashInHand] -= 36000;
                }
                case 10: { // Tiburón
                    accountInformation[i][cashInHand] -= 40000;
                }
                case 11: { // Caballo
                    accountInformation[i][cashInHand] -= 60000;
                }
                case 12: { // Toro
                    accountInformation[i][cashInHand] -= 62000;
                }
                case 13: { // Pantera
                    accountInformation[i][cashInHand] -= 64000;
                }
                case 14: { // Tigre
                    accountInformation[i][cashInHand] -= 66000;
                }
                case 15: { // León
                    accountInformation[i][cashInHand] -= 70000;
                }
                case 16: { // Robot
                    accountInformation[i][cashInHand] -= 100000;
                }
                case 17: { // Alíen
                    accountInformation[i][cashInHand] -= 100000;
                }
                case 18: { // Fantasma
                    accountInformation[i][cashInHand] -= 100000;
                }
                case 19: { // Momia
                    accountInformation[i][cashInHand] -= 100000;
                }
                case 20: { // T-Rex
                    accountInformation[i][cashInHand] -= 100000;
                }
            }
        }
    }
    return 1;
}