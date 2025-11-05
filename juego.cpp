#include <iostream>
#include <iomanip>
#include <windows.h>
#include <ctime>
#include "funciones.h"

using namespace std;

// ---- GENERAR NUMEROS RANDOM ----
int dadosRandom()
{

    int dado = (rand() % 6) + 1;
    return dado;

    system("pause");
}

// ---- PANTALLA PRINCIPAL DEL JUEGO ----
void pantallaJuego (string vectorNombreJugador[], int vectorPuntosTotales[], int vectorConfianza[], string vectorJugadorActual[], int vectorRondaJugador[],int vectorPuntosRonda[],int vectorLanzamientos[], int contadorLanzamiento)
{


    cout << "<-------- BIENVENIDO A: ¡NO SOUP FOR YOU! -------->";

    cout << endl;
    cout << endl;

    cout << vectorNombreJugador [0] << ": " << vectorPuntosTotales[0] << " puntos" <<"\t\t\t"<< vectorNombreJugador [1] << ": " << vectorPuntosTotales[1] << " puntos" << endl;

    cout << "CONFIANZA: " << vectorConfianza[0] << "\t\t\t\t" << "CONFIANZA: " << vectorConfianza[1] << endl;

    cout << "TURNO DE: " << vectorJugadorActual[0] << endl;

    cout << "+--------------------------------------+" << endl;
    cout << "|" << left << setw(38) << ("RONDA #" + to_string(vectorRondaJugador[0])) << "|" <<endl;
    cout << "|" << left << setw(38) << ("PUNTOS DE LA RONDA: " + to_string(vectorPuntosRonda[0])) << "|" <<endl;
    cout << "|" << left << setw(38) << ("LANZAMIENTOS: " + to_string(vectorLanzamientos[0])) << "|" <<endl;
    cout << "+--------------------------------------+" << endl;

    cout << endl;

    cout << "LANZAMIENTO #" << contadorLanzamiento;

    cout <<endl;
    cout <<endl;

}

