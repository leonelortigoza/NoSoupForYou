#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h> // Libreria de Windows para usar las funciones de codificación. //
#include "funciones.h"

using namespace std;

int main()
{

    // ----- USAR LA CODIFICACION UTF-8 -----
    system("chcp 65001 > nul");   // Cambia la consola a UTF-8
    SetConsoleOutputCP(CP_UTF8);  // Hace que cout use UTF-8

    // ----- CONFIGURAR FUNCIÓN RAND -----
    srand(time(NULL));

    // ----- MOSTRAR EL MENU POR PANTALLA -----
    mostrarMenu();

    return 0;

}
