#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

using namespace std;

// ----- MOSTRAR EL MENU POR PANTALLA -----

// Mostrar menú por pantalla
void mostrarMenu();

// Opciones del menú
void jugar(string vectorNombreJugador[]);
void estadisticas();
void creditos();
void salir();

// Seleccionar opción
void seleccionarOpcion(int opcion);
void pantallaJuego (string vectorNombreJugador[], int vectorPuntosTotales[], int vectorConfianza[], string vectorJugadorActual[], int vectorRondaJugador[],int vectorPuntosRonda[],int vectorLanzamientos[], int contadorLanzamiento);

#endif // FUNCIONES_H_INCLUDED
