#include <open.mp>
#include <bcrypt>
#include <a_mysql>
#include <sscanf2>
#include <streamer>
#include <strlib>
#include <map-zones>

#define CGEN_MEMORY 120000

// YSI Includes
#include <YSI_Coding\y_inline>
#include <YSI_Extra\y_inline_mysql>
#include <YSI_Visual\y_dialog>
#include <YSI_Extra\y_inline_timers>
#include <YSI_Visual\y_commands>

#undef MAX_PLAYERS
#define MAX_PLAYERS (50)

// Definitions
#include "resources\colors/colors.inc"
#include "resources\reports\definitions/max_reports.inc"
#include "resources\authenticator\definitions/bcrypt_cost.inc"
#include "resources\check_points\definitions/max_check_points.inc"
#include "resources\player_appearance\definitions/max_skins.inc"
#include "resources\lotto\definitions/max_lotto.inc"
#include "resources\server_information/implementation.inc"
#include "resources\money_bang\definitions/max_money_bang.inc"
#include "resources\clans\definitions/max_clans_colors.inc"
#include "resources\clans\definitions/max_clans.inc"
#include "resources\cities\definitions/max_cities.inc"
#include "resources\vehicle_creation\definitions/max_player_vehicles.inc"
#include "resources\vehicle_creation\definitions/max_vehicle_models.inc"

// Database enumerations
#include "resources\database_context\enumerations/ban_information.inc"
#include "resources\database_context\enumerations/clan_information.inc"
#include "resources\database_context\enumerations/account_information.inc"
#include "resources\database_context\enumerations/check_points_information.inc"

// Time enumerations
#include "resources\time\enumerations/timeInformation.inc"

// Day enumerations
#include "resources\day\enumerations/dayInformation.inc"

// Assistant enumerations
#include "resources\assistant\enumerations/assistantInformation.inc"
#include "resources\assistant\enumerations/rules_assistant_information.inc"

// Check Points enumerations
#include "resources\check_points\enumerations/armory.inc"
#include "resources\check_points\enumerations/bank.inc"
#include "resources\check_points\enumerations/drug_distributors.inc"
#include "resources\check_points\enumerations/hospital.inc"

// Violation enumerations
#include "resources\violation\enumerations/violation_information.inc"

// Drugs enumerations
#include "resources\drugs\enumerations/drug_use.inc"
#include "resources\drugs\enumerations/aspirin_use.inc"

// Hud enumerations
#include "resources\hud\enumerations/statistics_information.inc"
#include "resources\hud\enumerations/zone_information.inc"
#include "resources\hud\enumerations/speedometer_information.inc"

// Inventory enumerations
#include "resources\inventory\enumerations/inventory.inc"

// Messages when spawning enumerations
#include "resources\messages_when_spawning\enumerations/messages_when_spawning.inc"

// Player appearance enumerations
#include "resources\player_appearance\enumerations/set_player_spawn_information.inc"

// Reports enumerations
#include "resources\reports\enumerations/report_information.inc"

// Lotto enumerations
#include "resources\lotto\enumerations/lottoPlayerInformation.inc"
#include "resources\lotto\enumerations/lottoInformation.inc"

// Money bang enumerations
#include "resources\money_bang\enumerations/moneyBangInformation.inc"

// Clans enumerations
#include "resources\clans\enumerations/clan_assistant_information.inc"
#include "resources\clans\enumerations/clan_invitation_info.inc"
#include "resources\clans\enumerations/clan_color_information.inc"

// Cities enumerations
#include "resources\cities\enumerations/citiesInformation.inc"

// Vehicle creation enumerations
#include "resources\vehicle_creation\enumerations/player_vehicle_creation_information.inc"
#include "resources\vehicle_creation\enumerations/vehicle_creation_information.inc"

// Damage report enumerations
#include "resources\damage_report\enumerations/damage_report_information.inc"

// Animations enumerations
#include "resources\animations\enumerations/animation_assistant_information.inc"

// Bank vehicle robbery varenumerationsiables
#include "resources\bank_vehicle_robbery\enumerations/bank_vehicle_robbery_information.inc"

// Database variables
#include "resources\database_context\variables/database_connection.inc"
#include "resources\database_context\variables/ban_information.inc"
#include "resources\database_context\variables/clan_information.inc"
#include "resources\database_context\variables/account_information.inc"
#include "resources\database_context\variables/check_points_information.inc"

// Assistant variables
#include "resources\assistant\variables/assistantInformation.inc"
#include "resources\assistant\variables/rules_assistant_information.inc"

// Authenticator variables
#include "resources\authenticator\variables/login_attempts.inc"

// Check point timer variables
#include "resources\check_point_timer\variables/check_point_timer.inc"

// Check points variables
#include "resources\check_points\variables/armory.inc"
#include "resources\check_points\variables/bank.inc"
#include "resources\check_points\variables/drug_distributors.inc"
#include "resources\check_points\variables/hospital.inc"

// Violation variables
#include "resources\violation\variables/violation_information.inc"

// Drugs variables
#include "resources\drugs\variables/aspirin_use.inc"
#include "resources\drugs\variables/drug_use.inc"

// Hud variables
#include "resources\hud\variables/date_text_drawing.inc"
#include "resources\hud\variables/day_text_drawing.inc"
#include "resources\hud\variables/random_messages_text_drawing.inc"
#include "resources\hud\variables/statistics_information.inc"
#include "resources\hud\variables/time_text_drawing.inc"
#include "resources\hud\variables/zone_information.inc"
#include "resources\hud\variables/speedometer_information.inc"

// Inventory variables
#include "resources\inventory\variables/inventory.inc"

// Messages when spawning variables
#include "resources\messages_when_spawning\variables/messages_when_spawning.inc"

// Player appearance variables
#include "resources\player_appearance\variables/set_player_spawn_information.inc"

// Reports variables
#include "resources\reports\variables/report_information.inc"

// Time variables
#include "resources\time\variables/timeInformation.inc"

// Lotto variables
#include "resources\lotto\variables/lottoPlayerInformation.inc"
#include "resources\lotto\variables/lottoInformation.inc"

// Day variables
#include "resources\day\variables/dayInformation.inc"
#include "resources\day\variables/days_of_the_week.inc"

// Money bang variables
#include "resources\money_bang\variables/moneyBangInformation.inc"
#include "resources\money_bang\variables/money_bang_locations.inc"
#include "resources\money_bang\variables/money_bang_text_drawings.inc"

// Preload animations variables
#include "resources\preload_animations\variables/animation_library.inc"
#include "resources\preload_animations\variables/animation_name.inc"

// Clans variables
#include "resources\clans\variables/clan_assistant_information.inc"
#include "resources\clans\variables/clan_invitation_information.inc"
#include "resources\clans\variables/clan_color_information.inc"

// Cities variables
#include "resources\cities\variables/citiesInformation.inc"
#include "resources\cities\variables/city_selection_text_drawings.inc"
#include "resources\cities\variables/in_city_selection.inc"
#include "resources\cities\variables/city_names.inc"

// Vehicle creation variables
#include "resources\vehicle_creation\variables/player_vehicle_creation_information.inc"
#include "resources\vehicle_creation\variables/vehicle_creation_information.inc"

// Damage report variables
#include "resources\damage_report\variables/damage_report_information.inc"

// Animations variables
#include "resources\animations\variables/animation_assistant_information.inc"

// Bank vehicle robbery variables
#include "resources\bank_vehicle_robbery\variables/bank_vehicle_robbery_information.inc"

// Pendiente por reorganizar
#include "resources\global_variables/implementation.inc"
#include "resources\tools/implementation.inc"

// Modulos
#include "resources\database_context/implementation.inc"

#include "resources\global_vehicles/implementation.inc"
// Mantener este flujo para que el que el robo a vehículo bancario se cree
#include "resources\bank_vehicle_robbery/implementation.inc"
#include "resources\time/implementation.inc"
// 

#include "resources\day/implementation.inc"
#include "resources\lotto/implementation.inc"
#include "resources\clans/implementation.inc"

// Mantener este flujo para evitar que el jugador entre en un bucle en los puntos de control
#include "resources\check_point_timer/implementation.inc"
#include "resources\check_points/implementation.inc"
//

#include "resources\preload_animations/implementation.inc"
#include "resources\assign_player_name/implementation.inc"
#include "resources\assign_player_color/implementation.inc"
#include "resources\player_view/implementation.inc"
#include "resources\message_when_connecting/implementation.inc"
#include "resources\authenticator/implementation.inc"
#include "resources\connectiong_notice/implementation.inc"

#include "resources\administration/implementation.inc"

// Mantener este flujo para que las coordenadas de las ciudades esten disponibles player_appearance
#include "resources\cities/implementation.inc"
#include "resources\player_appearance/implementation.inc"
//

#include "resources\desconnectiong_notice/implementation.inc"
#include "resources\messages_when_spawning/implementation.inc"
#include "resources\hud/implementation.inc"

#include "resources\money_bang/implementation.inc"
#include "resources\inventory/implementation.inc"
#include "resources\assistant/implementation.inc"
#include "resources\deaths/implementation.inc"
#include "resources\rewards/implementation.inc"
#include "resources\penalizations/implementation.inc"
#include "resources\reports/implementation.inc"
#include "resources\violation/implementation.inc"
#include "resources\table_of_deaths/implementation.inc"
#include "resources\drugs/implementation.inc"
#include "resources\cancel_animation/implementation.inc"
#include "resources\vehicle_creation/implementation.inc"
#include "resources\damage_report/implementation.inc"
#include "resources\animations/implementation.inc"

// Importante mantener este modulo al final de la lista para que los datos se guarden correctamente en la base de datos al desconectarse el jugador.
#include "resources\database_context/update_account_information.inc"
//

main() {
    print("----------------------------------");
    print(" Desarrollado de corazón por: ");
    print("  - @JuanCarlos24691");
    print("----------------------------------");
}

public OnGameModeInit() {
    if (GetMaxPlayers() != MAX_PLAYERS) {
        printf("[ERROR] El servidor entro el panico por que la cantidad de jugadores (%i) es diferente a MAX_PLAYERS (%i).", GetMaxPlayers(), MAX_PLAYERS);
        SendRconCommand("exit");
    }

    DisableInteriorEnterExits();
    EnableStuntBonusForAll(false);
    return 1;
}

// Desarrollo
YCMD:spawn(playerid, params[], help) {
    new interior, Float:x, Float:y, Float:z;

    if (sscanf(params, "fffi", x, y, z, interior))
        return va_SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /spawn <X> <Y> <Z> <Interior>");

    SetPlayerPos(playerid, x, y, z);
    SetPlayerInterior(playerid, interior);
    return 1;
}

YCMD:equipo(playerid, params[], help) {
    new destinationPlayerId;

    if (sscanf(params, "i", destinationPlayerId))
        return va_SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /equipo <ID del jugador>");

    va_SendClientMessage(playerid, -1, "Equipo del jugador: %d", GetPlayerTeam(destinationPlayerId));
    return 1;
}

YCMD:anin(playerid, params[], help) {
    ApplyAnimation(playerid, "CASINO", "manwind", 2.7, false, false, false, false, SYNC_NONE);
    return 1;
}

YCMD:is(playerid, params[], help) {
    new string[128];

    if (sscanf(params, "s[128]", string))
        return va_SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /is <Texto>");

    va_SendClientMessage(playerid, -1, "Cadena: %s | Alfanumerica: %d", string, IsAlphaNumeric(string));
    return 1;
}

/* YCMD:printclan(playerid, params[], help) {
    new destinationPlayerId;

    if (sscanf(params, "i", destinationPlayerId))
        return va_SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /printclan <ID del clan>");

    va_SendClientMessage(playerid, -1, "UUID: %d | Nombre: %s | Tag: %s | Lider: %s", clanInformation[SearchClanIndex(accountInformation[playerid][assignedClan])][UUID], clanInformation[SearchClanIndex(accountInformation[playerid][assignedClan])][name], clanInformation[SearchClanIndex(accountInformation[playerid][assignedClan])][tag], clanInformation[SearchClanIndex(accountInformation[playerid][assignedClan])][leader]);
    return 1;
} */

YCMD:uuid(playerid, params[], help) {
    new destinationPlayerId;

    if (sscanf(params, "i", destinationPlayerId))
        return va_SendClientMessage(playerid, -1, ""COLOR_SINTAXYS"Sintaxis: /uuid <ID del jugador>");

    va_SendClientMessage(playerid, -1, "UUID del jugador: %d", accountInformation[destinationPlayerId][UUID]);
    return 1;
}

YCMD:estado(playerid, params[], help) {
    va_SendClientMessage(playerid, -1, "Registro: %d | En Juego: %d", accountInformation[playerid][loggedIn], accountInformation[playerid][inGame]);
    return 1;
}

/* YCMD:anims(playerid, params[], help) {
    ShowAnimsDialog(playerid);
    return 1;
}

YCMD:stopanims(playerid, params[], help) {
    ClearAnimations(playerid, SYNC_ALL);
    return 1;
} */


YCMD:crearvehiculo(playerid, params[], help) {
    new Float:x, Float:y, Float:z, Float:a;
    GetPlayerPos(playerid, x, y, z);
    GetPlayerFacingAngle(playerid, a);

    CreateVehicle(522, x + 2.0, y, z, a, -1, -1, -1);
    return 1;
}

YCMD:actor(playerid, params[], help) {
    new Float:x, Float:y, Float:z, Float:a;
    GetPlayerPos(playerid, x, y, z);
    GetPlayerFacingAngle(playerid, a);

    CreateDynamicActor(167, 513.084167, -15.365875, 1001.565307, 1.101273, true, 100.0, GetPlayerVirtualWorld(playerid), GetPlayerInterior(playerid), playerid);
    return 1;
}

YCMD:printspawn(playerid, params[], help) {
    new Float:tempOutsideXCoordinate, Float:tempOutsideYCoordinate, Float:tempOutsideZCoordinate, Float:tempOutsideAnglesCoordinate;
    GetPlayerPos(playerid, tempOutsideXCoordinate, tempOutsideYCoordinate, tempOutsideZCoordinate);
    GetPlayerFacingAngle(playerid, tempOutsideAnglesCoordinate);

    printf("%f, %f, %f, %f", tempOutsideXCoordinate, tempOutsideYCoordinate, tempOutsideZCoordinate, tempOutsideAnglesCoordinate);
    return 1;
}

YCMD:morir(playerid, params[], help) {
    SetPlayerHealth(playerid, 0);
    return 1;
}

YCMD:damearmas(playerid, params[], help) {
    GivePlayerWeapon(playerid, WEAPON_DEAGLE, 1000);
    return 1;
}

YCMD:dameadmin(playerid, params[], help) {
    accountInformation[playerid][administrativeLevel] = 5;
    return 1;
}