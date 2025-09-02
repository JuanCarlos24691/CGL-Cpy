forward UpdateRandomMessagesTextDrawing();
public UpdateRandomMessagesTextDrawing() {
    foreach (new i : Player)
        if (!accountInformation[i][inGame])
            return HideRandomMessagesTextDrawing(i);
        else
            ShowRandomMessagesTextDrawing(i);

    new string[2][128];

    switch (random(3)) {
        case 0: {
            string[1] = "Usa ~y~/reportar (id) (razón)~w~ Si Ves a Alguien Usando ~p~Cheats";
        }
        case 1: {
            string[0] = "Regenra Tu Vída Con ~p~Drogas";
            string[1] = "Compralas En El Icono De La ~y~D~w~, Estas Regeneran Tu Vída";
        }
        case 2: {
            string[1] = "No Pierdas Tu Dinero, Busca En El Mapa El ~y~Simbolo Del Dinero~w~ Y Depositalo";
        }
    }

    RepairTextdrawString(string[0]);
    RepairTextdrawString(string[1]);

    CreateRandomMessagesTextDrawing(string[0], string[1]);
    return 1;
}