forward AnnounceChangeOfCity(const bool:omitRequirements);
public AnnounceChangeOfCity(const bool:omitRequirements) {
    if (!omitRequirements && citiesInformation[changingCity])
        return 1;

    if (omitRequirements == false && (timeInformation[hour] != 23 || timeInformation[minute] != 0 || dayInformation[day] != 6))
        return 1;

    GameTextForAll("~b~~h~Fin_de_la_semana~w~~n~En_un_momento_se_cambiara_de_ciudad", 4500, 3);
    return 1;
}