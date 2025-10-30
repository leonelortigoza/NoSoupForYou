#include <iostream>
#include <windows.h>
#include "menu.h"

using namespace std;

// ---- MOSTRAR MENU ----- //

void mostrarMenu()
{
    cout << "============================" << endl;
    cout << "||   ¡NO SOUP FOUR YOU!   ||" << endl;
    cout << "============================" << endl;

    cout << endl;

    cout << "1 - JUGAR" << endl;
    cout << "2 - ESTADÍSTICAS" << endl;
    cout << "3 - CRÉDITOS" << endl;
    cout << "0 - SALIR" << endl;

    cout << endl;
}

void seleccionarOpcion()
{
    // INGRESO DE OPCIÓN
    int opcion;

    cout << "INGRESE UNA OPCION: ";

    cin >> opcion;

    cout << endl;

    // SE PROCESA LA OPCIÓN A TRAVÉS DE UN SWITCH

    switch(opcion)
    {
        case 1:
            jugar();
            break;

        case 2:
            estadisticas();
            break;

        case 3:
            creditos();
            break;

        case 0:
            salir();
            break;

        default:
            cout << "OPCIÓN INCORRECTA" << endl;
            return;
    }

}

// ----- OPCIONES ---- //

// Cada función llamaría a otra que se encarga de realizar lo pedido, por el momento solo tiene un cout para corroborar que funciona. //

void jugar()
{
    cout << "COMENZAR JUEGO" << endl;
}

void estadisticas()
{
    cout << "MOSTRAR ESTADÍSTICAS" << endl;
}

void creditos()
{
    cout << "MOSTRAR CRÉDITOS" << endl;
}

void salir()
{
    cout << "SALIR DEL JUEGO" << endl;
}
