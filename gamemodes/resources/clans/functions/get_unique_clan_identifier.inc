forward GetUniqueClanIdentifier();
public GetUniqueClanIdentifier() {
    new bool:newUniqueClanIdentifier[MAX_CLANS];

    // Itera a través de las filas y marca los IDs usados
    for (new i = 0; i < numberOfClansCreated; i++)
        newUniqueClanIdentifier[clanInformation[i][uniqueClanIdentifier]] = true;

    // Buscar el primer ID libre directamente después de marcar
    for (new i = 0; i < MAX_CLANS; i++)
        if (!newUniqueClanIdentifier[i])
            return i;

    return NO_TEAM;
}