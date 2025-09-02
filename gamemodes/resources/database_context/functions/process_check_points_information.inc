forward ProcessCheckPointsInformation();
public ProcessCheckPointsInformation() {
    inline const ILoadCheckPointsInformation(const rows) {
        if (rows == 0)
            return print("[ENTRADAS] Actualmente no hay entradas por cargar.");

        printf("[ENTRADAS] Se han cargado %d entradas.", rows);
        CreateCheckPointDynamics(rows);
    }

    LoadCheckPointsInformation(using inline ILoadCheckPointsInformation);
    return 1;
}