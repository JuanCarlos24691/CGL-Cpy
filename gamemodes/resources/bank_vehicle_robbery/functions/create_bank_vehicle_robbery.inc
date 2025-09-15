forward CreateBankVehicleRobbery();
public CreateBankVehicleRobbery() {
    if (bankVehicleRobberyInformation[bVVehicle] == INVALID_VEHICLE_ID) {
        bankVehicleRobberyInformation[bVVehicle] = CreateVehicle(428, bankVehicleRobberyInformation[bVXCoordinate][citiesInformation[selectedCity]], bankVehicleRobberyInformation[bVYCoordinate][citiesInformation[selectedCity]], bankVehicleRobberyInformation[bVZCoordinate][citiesInformation[selectedCity]], bankVehicleRobberyInformation[bVAngleCoordinate][citiesInformation[selectedCity]], 0, 0, -1);
        SetVehicleParamsEx(bankVehicleRobberyInformation[bVVehicle], false, false, false, true, false, false, false);
    }

    if (bankVehicleRobberyInformation[bVLabel3D] == INVALID_3DTEXT_ID)
        bankVehicleRobberyInformation[bVLabel3D] = CreateDynamic3DTextLabel("/ponerc4", -1, bankVehicleRobberyInformation[bVXCoordinate][citiesInformation[selectedCity]], bankVehicleRobberyInformation[bVYCoordinate][citiesInformation[selectedCity]], bankVehicleRobberyInformation[bVZCoordinate][citiesInformation[selectedCity]], 20.0, .attachedvehicle = bankVehicleRobberyInformation[bVVehicle]);
    return 1;
}