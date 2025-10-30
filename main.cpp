#include <iostream>
#include <windows.h> // Libreria de Windows para que funcione las funciones de codificaci�n. //
#include "menu.h"

using namespace std;

int main()
{
    // ----- USAR LA CODIFICACION UTF-8 -----
    system("chcp 65001 > nul");   // Cambia la consola a UTF-8
    SetConsoleOutputCP(CP_UTF8);  // Hace que cout use UTF-8

    // ----- MOSTRAR EL MENU POR PANTALLA -----
    mostrarMenu();

    // ----- PEDIR OPCI�N -----
    seleccionarOpcion();

    return 0;
}
