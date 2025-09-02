#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    for (new i = 0; i < MAX_PLAYERS; i++) {
        for (new b = 0; b < 6; b++)
            damageReportInformation[i][textDrawings][b] = PlayerText:INVALID_TEXT_DRAW;

        damageReportInformation[i][timer] = INVALID_TIMER;
    }
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    RestoreDamageReportInformation(playerid);
    return 1;
}

hook OnPlayerGiveDamage(playerid, damagedid, Float:amount, WEAPON:weaponid, bodypart) {
    new _amount[124], _name[124], weapon[124];
    format(_amount, sizeof(_amount), "~r~-%.1f", amount);
    format(_name, sizeof(_name), "~b~~h~~h~~h~%s (%d)", accountInformation[damagedid][name], damagedid);
    strcpy(weapon, "~p~");

    switch (weaponid) {
        case WEAPON_FIST: strcat(weapon, "Puño");
        case WEAPON_BRASSKNUCKLE: strcat(weapon, "Puños de acero");
        case WEAPON_GOLFCLUB: strcat(weapon, "Palo de golf");
        case WEAPON_NITESTICK: strcat(weapon, "Porra policial");
        case WEAPON_KNIFE: strcat(weapon, "Cuchillo");
        case WEAPON_BAT: strcat(weapon, "Bate de béisbol");
        case WEAPON_SHOVEL: strcat(weapon, "Pala");
        case WEAPON_POOLSTICK: strcat(weapon, "Taco de billar");
        case WEAPON_KATANA: strcat(weapon, "Katana");
        case WEAPON_CHAINSAW: strcat(weapon, "Motosierra");
        case WEAPON_DILDO: strcat(weapon, "Dildo 1");
        case WEAPON_DILDO2: strcat(weapon, "Dildo 2");
        case WEAPON_VIBRATOR: strcat(weapon, "Vibrador 1");
        case WEAPON_VIBRATOR2: strcat(weapon, "Vibrador 2");
        case WEAPON_FLOWER: strcat(weapon, "Flores");
        case WEAPON_CANE: strcat(weapon, "Bastón");
        case WEAPON_GRENADE: strcat(weapon, "Granada");
        case WEAPON_TEARGAS: strcat(weapon, "Gas lacrimógeno");
        case WEAPON_MOLTOV: strcat(weapon, "Cóctel Molotov");
        case WEAPON_COLT45: strcat(weapon, "9-mm");
        case WEAPON_SILENCED: strcat(weapon, "Pistola silenciada");
        case WEAPON_DEAGLE: strcat(weapon, "Desert Eagle");
        case WEAPON_SHOTGUN: strcat(weapon, "Escopeta");
        case WEAPON_SAWEDOFF: strcat(weapon, "Escopeta recortada");
        case WEAPON_SHOTGSPA: strcat(weapon, "Escopeta de combate");
        case WEAPON_UZI: strcat(weapon, "Uzi");
        case WEAPON_MP5: strcat(weapon, "MP5");
        case WEAPON_AK47: strcat(weapon, "AK-47");
        case WEAPON_M4: strcat(weapon, "M4");
        case WEAPON_TEC9: strcat(weapon, "Tec-9");
        case WEAPON_RIFLE: strcat(weapon, "Rifle de asalto");
        case WEAPON_SNIPER: strcat(weapon, "Rifle francotirador");
        case WEAPON_ROCKETLAUNCHER: strcat(weapon, "Lanzacohetes");
        case WEAPON_HEATSEEKER: strcat(weapon, "Heat Seeker");
        case WEAPON_FLAMETHROWER: strcat(weapon, "Lanzallamas");
        case WEAPON_MINIGUN: strcat(weapon, "Minigun");
        case WEAPON_SATCHEL: strcat(weapon, "Carga explosiva");
        case WEAPON_BOMB: strcat(weapon, "Bomba");
        case WEAPON_SPRAYCAN: strcat(weapon, "Lata de spray");
        case WEAPON_FIREEXTINGUISHER: strcat(weapon, "Extintor");
        case WEAPON_CAMERA: strcat(weapon, "Cámara");
        case WEAPON_NIGHT_VISION_GOGGLES: strcat(weapon, "Gafas de visión nocturna");
        case WEAPON_THERMAL_GOGGLES: strcat(weapon, "Gafas térmicas");
        case WEAPON_PARACHUTE: strcat(weapon, "Paracaídas");
        default:
            strcat(weapon, "Desconocido");
    }

    RepairTextdrawString(_amount);
    RepairTextdrawString(_name);
    RepairTextdrawString(weapon);

    RestoreDamageReportInformation(playerid);
    CreateDamageReportTextDrawing(playerid, _amount, _name, weapon);
    PlayerPlaySound(playerid, 17802, 0.0, 0.0, 0.0);

    damageReportInformation[playerid][timer] = SetTimerEx("RestoreDamageReportInformation", 1000, false, "i", playerid);
    return 1;
}