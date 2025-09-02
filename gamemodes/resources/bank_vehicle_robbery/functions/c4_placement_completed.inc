forward C4PlacementCompleted();
public C4PlacementCompleted() {
    if (bankVehicleRobberyInformation[c4Placed] != true)
        bankVehicleRobberyInformation[c4Placed] = true;
    return 1;
}