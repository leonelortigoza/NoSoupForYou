#include <iostream>
#include <windows.h>
#include <ctime>
#include "funciones.h"

using namespace std;

// ---- MOSTRAR MENU -----

void mostrarMenu()
{
    int opcion;

    do
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
        cout << endl;

        cout << "SELECCIONAR OPCIÓN: ";
        cin >> opcion;

        cout << endl;

        seleccionarOpcion(opcion);

    }
    while (opcion !=0);

}

// ---- SELECCIONAR OPCIÓN -----

void seleccionarOpcion(int opcion)
{

    string definicion; // Guarda la respuesta del usuario por si quiere continuar (SI o NO)
    string vectorNombreJugador[2]; // Vector donde guardamos los jugadores (2 jugadores)
    int vectorPuntosTotales[2] = {}; // Vector donde guardamos la cantidad de puntos de cada jugador, comienza inicializada en 0
    int vectorConfianza[2] = {300, 300}; // Vector para la confianza de cada jugador
    string vectorJugadorActual[2]; // vector para mostrar que jugador está jugando actualmente
    int vectorRondaJugador[2]; // Guardar y mostrar el total de rondas
    int vectorPuntosRonda[2]; // Guardar y mostrar el total de puntos ganados en la ronda
    int vectorLanzamientos[2]; // Guardar y mostrar la cantidad de lanzamientos de dados
    int contadorLanzamiento;   // Contar cuantos lanzamientos realizó el jugador


    switch(opcion)
    {
    case 1:
        system("cls");

        jugar(vectorNombreJugador);

        cout << endl << "Confirmar Nombres?: (S/N)" << endl;

        cin >> definicion;

        cout << endl;

        if (definicion == "S")
        {

            pantallaJuego(vectorNombreJugador, vectorPuntosTotales, vectorConfianza, vectorJugadorActual, vectorRondaJugador, vectorPuntosRonda,vectorLanzamientos,contadorLanzamiento);

        }

        break;

    case 2:
        ;
        break;

    case 3:
        ;
        break;

    case 0:
        ;
        break;

    default:
        cout << "OPCIÓN INCORRECTA" << endl;
        return;
    }

}

// ----- SELECCIONAR JUGADORES ----

void jugar(string vectorNombreJugador[])
{

    system ("cls");

    cout << "INGRESE EL NOMBRE DEL JUGADOR N°1: " <<endl;
    cin >> vectorNombreJugador[0];

    cout << "INGRESE EL NOMBRE DEL JUGADOR N°2: " <<endl;
    cin >> vectorNombreJugador[1];

}




