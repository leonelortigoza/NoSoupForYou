#include <iostream>
#include <windows.h>
#include <ctime>
#include "funciones.h"

using namespace std;

/// ---- MOSTRAR MENU -----

void mostrarMenu()
{
    int opcion;

    do
    {

        cout << "+--------------------------+" << endl;
        cout << "|    ¡NO SOUP FOUR YOU!    |" << endl;
        cout << "+--------------------------+" << endl;

        cout << endl;

        cout << "1 - JUGAR" << endl;
        cout << "2 - ESTADÍSTICAS" << endl;
        cout << "3 - CRÉDITOS" << endl;
        cout << "4 - MODO DE PRUEBA" << endl;
        cout << "0 - SALIR" << endl;

        cout << endl;
        cout << endl;

        cout << "SELECCIONAR OPCIÓN: ";
        cin >> opcion;

        cout << endl;

        seleccionarOpcion(opcion);

    }
    while (opcion !=0);

}

/// ---- SELECCIONAR OPCIÓN -----

void seleccionarOpcion(int opcion)
{

    string definicion;

    string vectorNombreJugador[2];

    bool preguntarNombresDeNuevo = false;

    switch(opcion)
    {
        case 1:

            do
            {

                system("cls");

                jugar(vectorNombreJugador);

                cout << endl << "¿Confirmar Nombres? (S/N):" << endl;

                cout << endl;

                cin >> definicion;

                cout << endl;

                if(definicion == "S")
                {

                    system("cls");

                    asignarQuienComienzaRonda(vectorNombreJugador);

                }
                else
                {

                    preguntarNombresDeNuevo = true;

                }

            } while(preguntarNombresDeNuevo);

            break;

        case 2:
            break;

        case 3:
            break;

        case 0:
            break;

        default:
            cout << "OPCIÓN INCORRECTA" << endl;

            return;
    }

}









