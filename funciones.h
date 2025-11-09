#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

using namespace std;

/// ----- MOSTRAR EL MENU POR PANTALLA -----

// Mostrar menú por pantalla
void mostrarMenu();

// Opciones del menú
void jugar(string vectorNombreJugador[]);
void estadisticas();
void creditos();
void salir();

// Seleccionar opción
void seleccionarOpcion(int opcion);



/// ----- JUEGO -----

// Mostrar menú del juego por pantalla
void pantallaJuego (string vectorNombreJugador[], bool vectorJugadorRonda[]);

// Lanzar los dados
void lanzamientoDados(string vectorNombreJugador[], string jugadorActual, int puntosTotalesJugadorActual, int vectorPuntosTotales[], bool vectorJugadorRonda[]);



/// ----- JUGADOR -----

// Lanzamiento de dados para establecer quien comienza la ronda
void asignarQuienComienzaRonda(string vectorNombreJugador[]);

// Seleccionar jugador para comenzar la ronda
void seleccionarJugadorPrimeraRonda(string vectorNombreJugador[]);

// Saber qué jugador está jugando
void asignarJugador(bool jugador1, bool jugador2);

// Cambiar de turno
void cambioTurno(bool jugadorActual[]);



/// ----- COMBINACIONES -----

// Calcular escalera
void calcularEscalera(string jugadorActual, bool vectorContador[], int &puntosTotalesJugadorActual, bool &finalizarRonda);

// Calcular tres pares
void calcularTresPares(string jugadorActual, int vectorDados[], int &puntosTotalesJugadorActual);

// Calcular tres pares (buscar números iguales)
void buscarNumerosIguales(int numeroDado, int vectorDados[], int &cantNumerosIguales);



/// ----- DIBUJO DE LOS DADOS -----
void dado1();
void dado2();
void dado3();
void dado4();
void dado5();
void dado6();

#endif // FUNCIONES_H_INCLUDED
