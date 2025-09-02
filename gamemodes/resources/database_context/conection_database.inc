#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    databaseConnection = mysql_connect_file("database_connection_information.ini");

    if (mysql_errno(databaseConnection) == 0)
        return printf("[MySql]: La conexión a la base de datos fue exitosa.");

    new error[100];
    mysql_error(error, sizeof(error), databaseConnection);

    printf("[MySql ERROR]: El servidor entro el panico por que la conexión a la base de datos ha fallado, por favor intente de nuevo.\nSalida: %s", error);
    SendRconCommand("exit");
    return 1;
}

hook OnGameModeExit() {
    mysql_close(databaseConnection);
    return 1;
}