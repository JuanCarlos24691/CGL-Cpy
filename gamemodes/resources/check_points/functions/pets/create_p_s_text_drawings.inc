forward CreatePSTextDrawings(const playerid);
public CreatePSTextDrawings(const playerid) {
    RestoreGlobalTextDrawings(playerid);

    for (new i = 0; i < 6; i++) {
        switch (i) {
            case 0: {
                if (petsInformation[playerid][pSTextDrawings][i] == PlayerText:INVALID_TEXT_DRAW) { 


                    PlayerTextDrawShow(playerid, petsInformation[playerid][pSTextDrawings][i]);
                }
            }
        }
    }
    return 1;
}