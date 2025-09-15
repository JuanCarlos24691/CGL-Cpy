stock GetVehicleName(const modelIdToSearchFor) {
    new vehicleName[32] = "Vehículo desconocido";

    if (modelIdToSearchFor < 400 || modelIdToSearchFor > 611)
        return vehicleName;

    format(vehicleName, sizeof(vehicleName), vehiclesNames[modelIdToSearchFor - 400]);
    return vehicleName;
}