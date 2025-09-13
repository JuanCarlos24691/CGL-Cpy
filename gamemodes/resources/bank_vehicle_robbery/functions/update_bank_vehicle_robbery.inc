forward UpdateBankVehicleRobbery();
public UpdateBankVehicleRobbery() {
    if (timeInformation[hour] != 0 || timeInformation[minute] != 0)
        return 1;

    RestoreBankVehicleRobberyInfo(false);
    CreateBankVehicleRobbery();

    va_SendClientMessageToAll(-1, ""COLOR_AQUAMARINE2"Nadie Ha Asaltado El "COLOR_AQUAMARINE"Vehiculo De Seguridad "COLOR_AQUAMARINE2"De Juan Carlos Escotet Cerca De "COLOR_AQUAMARINE"Localizacion.  "COLOR_AQUAMARINE2"Que Esperas!!", cityNames[citiesInformation[selectedCity]]);
    return 1;
}