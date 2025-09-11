forward CreateCheckPoint(const typeOfCheckPoint, const Float:xCoordinateoftheCheckPoint, const Float:yCoordinateoftheCheckPoint, const Float:zCoordinateoftheCheckPoint, const Float:angleCoordinateoftheCheckPoint);
public CreateCheckPoint(const typeOfCheckPoint, const Float:xCoordinateoftheCheckPoint, const Float:yCoordinateoftheCheckPoint, const Float:zCoordinateoftheCheckPoint, const Float:angleCoordinateoftheCheckPoint) {
    if (numberOfCheckPointsCreated == MAX_CHECK_POINTS)
        printf("[ENTRADAS] Se ha alcanzado el límite de punto de control.");

    inline const IInsertCheckPointsInformation(const result) {
        if (result == 0)
            return printf("[ENTRADAS] Ha ocurrido un error al intentar crear una entrada.");

        printf("[ENTRADAS] Se ha creado una nueva entrada.");
        SetTimerEx("ProcessCheckPointsInformation", 0, false);
    }

    switch (typeOfCheckPoint) {
        case 0: InsertCheckPointsInformation(typeOfCheckPoint, 52, 0, xCoordinateoftheCheckPoint, yCoordinateoftheCheckPoint, zCoordinateoftheCheckPoint, angleCoordinateoftheCheckPoint, 2305.270263, -16.113904, 26.742187, 268.760498, 2311.839111, -3.846960, 26.742187, 90.944702, using inline IInsertCheckPointsInformation);
        case 1: InsertCheckPointsInformation(typeOfCheckPoint, 6, 7, xCoordinateoftheCheckPoint, yCoordinateoftheCheckPoint, zCoordinateoftheCheckPoint, angleCoordinateoftheCheckPoint, 315.783996, -142.985382, 999.601562, 2.789866, 314.021484, -133.206878, 999.601562, 270.861999, using inline IInsertCheckPointsInformation);
        case 2: InsertCheckPointsInformation(typeOfCheckPoint, 31, 15, xCoordinateoftheCheckPoint, yCoordinateoftheCheckPoint, zCoordinateoftheCheckPoint, angleCoordinateoftheCheckPoint, 376.305938, 1417.279296, 1081.328125, 0, 0, 0, 0, 0, using inline IInsertCheckPointsInformation);
        case 3: InsertCheckPointsInformation(typeOfCheckPoint, 24, 24, 0, 0, 0, 0, 0, 0, 0, 0, xCoordinateoftheCheckPoint, yCoordinateoftheCheckPoint, zCoordinateoftheCheckPoint, angleCoordinateoftheCheckPoint, using inline IInsertCheckPointsInformation);
        case 4: InsertCheckPointsInformation(typeOfCheckPoint, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, xCoordinateoftheCheckPoint, yCoordinateoftheCheckPoint, zCoordinateoftheCheckPoint, angleCoordinateoftheCheckPoint, using inline IInsertCheckPointsInformation);
        default:
            printf("[ENTRADAS] No existe el tipo de entrada especificado.");
    }
    return 1;
}