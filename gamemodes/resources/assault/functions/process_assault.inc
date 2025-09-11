forward ProcessAssault(const playerid);
public ProcessAssault(const playerid) {
    if (assaultPlayerInformation[playerid][assaultCompleted] == false)
        return GameTextForPlayer(playerid, "~w~Robo_en_proceso~y~~n~quedate_en_el~r~~n~checkpoint_rojo", 2100, 3);

    RestoreATInProgress();

    RestoreAssaultPlayerInformation(playerid);
    
    CreateAssaultCompleted(playerid);
    CreateATInTheProcessOfDelivery(playerid);
    CreateCompletedATextDrawings(playerid, nameOfAssaultLocations[citiesInformation[selectedCity]][1]);
    CreateADCheckPoint(playerid);

    GameTextForPlayer(playerid, "~y~lleva_la_caja_fuerte_al~r~~n~checkpoint_rojo", 4500, 3);
    va_SendClientMessageToAll(-1, ""COLOR_YELLOW"%s (%d) Se Esta Llevando La Caja Fuerte, Matalo Y Obten Tu Recompensa.", accountInformation[playerid][name], playerid);
    return 1;
}