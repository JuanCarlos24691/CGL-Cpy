forward UpdateBankVehicleRobbery();
public UpdateBankVehicleRobbery() {
    if (timeInformation[hour] != 0 || timeInformation[minute] != 0)
        return 1;

    RestoreBankVehicleRobberyInfo(false);
    CreateBankVehicleRobbery();

    va_SendClientMessageToAll(-1, ""COLOR_AQUAMARINE2"El "COLOR_AQUAMARINE"Vehiculo De Seguidad"COLOR_AQUAMARINE2" Se Encuentra En "COLOR_AQUAMARINE"%s"COLOR_AQUAMARINE2". Asaltalo Y Todo El Dinero Sera Tuyo!", cityNames[citiesInformation[selectedCity]]);
    return 1;
}