forward C4PlacementCompleted();
public C4PlacementCompleted() {
    if (bankVehicleRobberyInformation[bVC4Placed] != true)
        bankVehicleRobberyInformation[bVC4Placed] = true;
    return 1;
}