forward ProcessClanInformation();
public ProcessClanInformation() {
    inline const ILoadClansInformation(const rows) {
        if (rows == 0)
            return printf("[CLANES] Actualmente no hay clanes por cargar.");

        printf("[CLANES] Se han cargado %d clanes.", rows);
    }

    LoadClansInformation(using inline ILoadClansInformation);
    return 1;
}