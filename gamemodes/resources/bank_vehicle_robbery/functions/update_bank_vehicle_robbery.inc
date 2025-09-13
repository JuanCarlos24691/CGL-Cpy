forward UpdateBankVehicleRobbery();
public UpdateBankVehicleRobbery() {
    if (timeInformation[hour] != 0 || timeInformation[minute] != 0)
        return 1;

    RestoreBankVehicleRobberyInfo(false);
    CreateBankVehicleRobbery();

    va_SendClientMessageToAll(-1, ""COLOR_AQUAMARINE3"El "COLOR_DARK_GREEN2"Vehiculo De Seguidad"COLOR_AQUAMARINE3" Se Encuentra En "COLOR_DARK_GREEN2"%s"COLOR_AQUAMARINE3". Asaltalo Y Todo El Dinero Sera Tuyo!", cityNames[citiesInformation[selectedCity]]);
    return 1;
}