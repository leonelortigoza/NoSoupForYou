#include <iostream>
#include <iomanip>
#include <windows.h>
#include <ctime>
#include "funciones.h"

using namespace std;

/// ---- MOSTRAR COMBINACIONES ----
void mostrarCombinaciones(string jugadorActual, int puntosTotalesJugadorActual, string combinacion, string sopa, int puntos)
{

    cout << "+----------------+" << endl;
    cout << "|" << left << setw(16) << combinacion << "|" << endl;
    cout << "+----------------+" << endl;

    cout << jugadorActual << " obtuvo: " << sopa << "." << endl;
    cout << "Puntos obtenidos: " << puntos << endl;
    cout << "-----------------------------------" << endl;

    cout << endl;

}

/// ---- CALCULAR ESCALERA ----
void calcularEscalera(string jugadorActual, bool vectorContador[], int &puntosTotalesJugadorActual, bool &finalizarRonda)
{

    string combinacion = "¡ESCALERA!";

    string sopa = "Sopa especial con pan";

    int puntaje = 1500;

    int contadorEscalera = 0;

    for(int i=0; i<6; i++)
    {

        if(vectorContador[i])
        {

            contadorEscalera++;

        }
    }

    if(contadorEscalera == 6)
    {

        finalizarRonda = true;

        puntosTotalesJugadorActual += puntaje;

        mostrarCombinaciones(jugadorActual, puntosTotalesJugadorActual, combinacion, sopa, puntaje);

    }
    else
    {

        finalizarRonda = false;

    }

}

/// ---- CALCULAR 3 PARES ----
void calcularTresPares(string jugadorActual, int vectorDados[], int &puntosTotalesJugadorActual)
{

    string combinacion = "¡TRES PARES!";

    string sopa = "Orden doble";

    int puntaje = 1500;

    int cantNumerosIguales = 0;

    for(int i=0; i<6; i++)
    {

        buscarNumerosIguales(vectorDados[i], vectorDados, cantNumerosIguales);

    }

    if(cantNumerosIguales == 12)
    {

        puntosTotalesJugadorActual += puntaje;

        mostrarCombinaciones(jugadorActual, puntosTotalesJugadorActual, combinacion, sopa, puntaje);

    }

}

/// ---- CALCULAR 3 PARES (BUSCAR NÚMEROS IGUALES) ----
void buscarNumerosIguales(int numeroDado, int vectorDados[], int &cantNumerosIguales)
{

    for(int i=0; i<6; i++)
    {

        if(numeroDado == vectorDados[i])
        {

            cantNumerosIguales++;

        }

    }

}

//

