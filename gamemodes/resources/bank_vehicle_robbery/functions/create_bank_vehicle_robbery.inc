forward CreateBankVehicleRobbery();
public CreateBankVehicleRobbery() {
    if (bankVehicleRobberyInformation[vehicle] == INVALID_VEHICLE_ID) {
        bankVehicleRobberyInformation[vehicle] = CreateVehicle(428, bankVehicleRobberyInformation[xCoordinate][citiesInformation[selectedCity]], bankVehicleRobberyInformation[yCoordinate][citiesInformation[selectedCity]], bankVehicleRobberyInformation[zCoordinate][citiesInformation[selectedCity]], bankVehicleRobberyInformation[angleCoordinate][citiesInformation[selectedCity]], 0, 0, -1);
        SetVehicleParamsEx(bankVehicleRobberyInformation[vehicle], false, false, false, true, false, false, false);
    }

    if (bankVehicleRobberyInformation[label3D] == INVALID_3DTEXT_ID)
        bankVehicleRobberyInformation[label3D] = CreateDynamic3DTextLabel("/ponerc4", -1, bankVehicleRobberyInformation[xCoordinate][citiesInformation[selectedCity]], bankVehicleRobberyInformation[yCoordinate][citiesInformation[selectedCity]], bankVehicleRobberyInformation[zCoordinate][citiesInformation[selectedCity]], 20.0, .attachedvehicle = bankVehicleRobberyInformation[vehicle]);
    return 1;
}