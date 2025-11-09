#include <iostream>
#include <iomanip>
#include <windows.h>
#include <ctime>
#include "funciones.h"

using namespace std;

/// ---- GENERAR NUMEROS RANDOM ----
int dadosRandom()
{

    int dado = (rand() % 6) + 1;
    return dado;

    system ("pause") ;
}

/// ---- PEDIR NOMBRES ----
void jugar(string vectorNombreJugador[])
{

    system ("cls");

    cout << "INGRESE EL NOMBRE DEL JUGADOR N°1: ";

    cin >> vectorNombreJugador[0];

    cout << endl;

    cout << "INGRESE EL NOMBRE DEL JUGADOR N°2: ";

    cin >> vectorNombreJugador[1];

}

/// ---- ASIGNAR TURNO AL JUGADOR ----
void asignarJugador(bool jugador1, bool jugador2, string vectorJugadorRonda[])
{

    jugador1 = true;
    jugador2 = false;

}

/// ---- CAMBIAR DE TURNO ----
void cambioTurno(bool vectorJugadorRonda[])
{

    if(vectorJugadorRonda[0])
    {

        vectorJugadorRonda[0] = false;
        vectorJugadorRonda[1] = true;

    }
    else
    {

        vectorJugadorRonda[0] = true;
        vectorJugadorRonda[1] = false;

    }


}

/// ---- TIRA DE DADOS PARA DEFINIR RONDA ----
void asignarQuienComienzaRonda(string vectorNombreJugador[])
{

    string enter;

    string definicion;

    bool salirDelJuego;

    do
    {

        cout << "    DEFINICIÓN DE INICIO DE RONDA    " << endl;
        cout << "-------------------------------------" << endl;

        cout << endl;

        cout << "+-----------------------------------+" << endl;
        cout << "| Cada jugador arroja un dado, el   |" << endl;
        cout << "| jugador con el dado de mayor      |" << endl;
        cout << "| valor inicia la ronda.            |" << endl;
        cout << "+-----------------------------------+" << endl;

        cout << endl;



        cout << "PRESIONE ENTER PARA ARROJAR LOS DADOS." << endl;

        cout << endl;

        cout << "INGRESE 0 PARA SALIR DEL JUEGO." << endl;

        cout << endl;

        cin.ignore();

        getline(cin, enter);

        if(enter.empty())
        {
            seleccionarJugadorPrimeraRonda(vectorNombreJugador);
        }
        else if(enter == "0")
        {

            cout << "¿Salir del Juego? (S/N): ";

            cin >> definicion;

            if(definicion == "S")
            {

                system("cls");

                mostrarMenu();

                salirDelJuego = true;

            }
            else
            {

                system("cls");

            }

        }

    } while(!salirDelJuego);

    cout << endl;
    cout << endl;
}

/// ---- SELECCIONAR JUGADOR PARA COMENZAR RONDA ----
void seleccionarJugadorPrimeraRonda(string vectorNombreJugador[])
{

    system("cls");

    int vectorDadoJugador[2];

    bool vectorJugadorRonda[2];

    vectorDadoJugador[0] = 0;

    vectorDadoJugador[1] = 0;

    string enter;

    string enter2;

    string enter3;

    bool continuar = false;

    while(vectorDadoJugador[0] == vectorDadoJugador[1])
    {

        for(int i=0; i<2; i++)
        {

            cout << "TURNO DE: " << vectorNombreJugador[i] << endl;
            cout << "------------------------------------" << endl;

            cout << endl;

            cout << "PRESIONE ENTER PARA ARROJAR EL DADO: ";

            getline(cin, enter3);

            if(enter3.empty())
            {

                vectorDadoJugador[i] = dadosRandom();

                cout << endl;

                switch(vectorDadoJugador[i])
                {

                    case 1:

                        dado1();
                        break;

                    case 2:

                        dado2();
                        break;

                    case 3:

                        dado3();
                        break;

                    case 4:

                        dado4();
                        break;

                    case 5:

                        dado5();
                        break;

                    case 6:

                        dado6();
                        break;

                }

            cout << "NÚMERO DE DADO: " << vectorDadoJugador[i] << endl;

            cout << endl;
            cout << endl;

            }

        }

        if(vectorDadoJugador[0] == vectorDadoJugador[1])
        {

            cout << "-------------------------------------------" << endl;
            cout << "EMPATE, PRESIONE ENTER PARA TIRAR DE NUEVO: ";
            getline(cin, enter);

            if(enter.empty())
            {

                continuar = true;

                system("cls");

            }

        }
        else
        {

            continuar = true;

        }

    }

    while(continuar == true)
    {

        if(vectorDadoJugador[0] > vectorDadoJugador[1])
        {
            cout << "RESULTADOS: " << endl;

            cout << "+------------------------+" << endl;

            cout << "|" << left << setw(24) << (vectorNombreJugador[0] + " -> " + to_string(vectorDadoJugador[0])) << "|" << endl;

            cout << "|" << left << setw(24) << (vectorNombreJugador[1] + " -> " + to_string(vectorDadoJugador[1])) << "|" << endl;

            cout << "+------------------------+" << endl;

            cout << "+------------------------+" << endl;
            cout << "|" << left << setw(24) << ("COMIENZA: " + vectorNombreJugador[0]) << "|" <<endl;
            cout << "+------------------------+" << endl;

            vectorJugadorRonda[0] = true;

            vectorJugadorRonda[1] = false;

        }
        else
        {

            cout << "RESULTADOS: " << endl;

            cout << "+------------------------+" << endl;

            cout << "|" << left << setw(24) << (vectorNombreJugador[0] + " -> " + to_string(vectorDadoJugador[0])) << "|" << endl;

            cout << "|" << left << setw(24) << (vectorNombreJugador[1] + " -> " + to_string(vectorDadoJugador[1])) << "|" << endl;

            cout << "+------------------------+" << endl;

            cout << "+------------------------+" << endl;
            cout << "|" << left << setw(24) << ("COMIENZA: " + vectorNombreJugador[1]) << "|" <<endl;
            cout << "+------------------------+" << endl;

            vectorJugadorRonda[0] = false;

            vectorJugadorRonda[1] = true;

        }

        continuar = false;

    }

    cout << endl;
    cout << "------------------------------------------" << endl;
    cout << "PRESIONE ENTER PARA JUGAR EL PRIMER TURNO: ";

    getline(cin, enter2);

    if(enter2.empty())
    {

        pantallaJuego(vectorNombreJugador, vectorJugadorRonda);

    }

}

/// ---- PANTALLA PRINCIPAL DEL JUEGO ----
void pantallaJuego (string vectorNombreJugador[], bool vectorJugadorRonda[])
{

    system("cls");

    // ASIGNAR TURNO AL JUGADOR

    string jugadorActual;

    // VECTOR DONDE SE ACUMULAN LOS PUNTOS

    int vectorPuntosTotales[2] = {0, 0};

    int puntosTotalesJugadorActual;

    // VECTOR DONDE SE ACUMULA LA CONFIANZA

    int vectorConfianza[2] = {300, 300};

    // VECTOR PARA MOSTRAR EL NÚMERO DE RONDA ACTUAL

    int vectorNumeroRonda[2] = {1, 1};

    int rondaJugadorActual;

    // VECTOR PARA GUARDAD PUNTOS OBTENIDOS EN LA RONDA

    int vectorPuntosRonda[2] = {0, 0};

    int puntosRonda;

    // VECTOR PARA GUARDAR LA CANTIDAD DE LANZAMIENTOS

    int vectorLanzamientos[2] = {0, 0};

    int vectorLanzamientoActual[2] = {1, 1};

    int lanzamientos;

    int lanzamientoActual;

    // LANZAR LOS DADOS

    string enter;

    // ASIGNAR DATOS AL JUGADOR

    if(vectorJugadorRonda[0])
    {

        jugadorActual = vectorNombreJugador[0];

        puntosTotalesJugadorActual = vectorPuntosTotales[0];

        rondaJugadorActual = vectorNumeroRonda[0];

        puntosRonda = vectorPuntosRonda[0];

        lanzamientos = vectorLanzamientos[0];

        lanzamientoActual = vectorLanzamientoActual[0];

    }
    else
    {

        jugadorActual = vectorNombreJugador[1];

        puntosTotalesJugadorActual = vectorPuntosTotales[1];

        rondaJugadorActual = vectorNumeroRonda[1];

        puntosRonda = vectorPuntosRonda[1];

        lanzamientos = vectorLanzamientos[1];

        lanzamientoActual = vectorLanzamientoActual[1];

    }

    cout << left << setw(25) << (vectorNombreJugador[0] + ": " + to_string(vectorPuntosTotales[0]) + " puntos");
    cout << (vectorNombreJugador[1] + ": " + to_string(vectorPuntosTotales[1]) + " puntos") << endl;

    cout << left << setw(25) << ("CONFIANZA: " + to_string(vectorConfianza[0]));
    cout << ("CONFIANZA: " + to_string(vectorConfianza[1])) << endl;

    cout << endl;

    cout << "TURNO DE: " << jugadorActual << endl;

    cout << "+---------------------------------------+" << endl;
    cout << "|" << left << setw(39) << ("RONDA #" + to_string(rondaJugadorActual)) << "|" << endl;
    cout << "|" << left << setw(39) << ("PUNTOS DE LA RONDA: " + to_string(puntosRonda)) << "|" << endl;
    cout << "|" << left << setw(39) << ("LANZAMIENTOS: " + to_string(lanzamientos)) << "|" << endl;
    cout << "+---------------------------------------+" << endl;

    cout << "LANZAMIENTO #" << lanzamientoActual << endl;

    cout << endl;

    lanzamientoDados(vectorNombreJugador, jugadorActual, puntosTotalesJugadorActual, vectorPuntosTotales, vectorJugadorRonda);

}

/// ---- MOSTRAR DADOS Y COMBINACIONES ----
void lanzamientoDados (string vectorNombreJugador[], string jugadorActual, int puntosTotalesJugadorActual, int vectorPuntosTotales[], bool vectorJugadorRonda[])
{

    // VECTOR PARA GUARDAR CADA NUMERO OBTENIDO
    int vectorDados[6];

    // VECTOR PARA SABER QUE DADO TOCÓ (INDICE 0 = DADO 1)
    bool vectorContador[6];

    // VERIFICA SI EL JUGADOR TIRÓ LOS DADOS
    bool lanzarDados;

    // FINALIZAR RONDA SI SALE ESCALERA O TRES PARES
    bool finalizarRonda = false;

    string enter;

    //------------------------------------------------------------------------------------------------------

    for (int i=0; i<6; i++)
    {
        vectorContador[i]=false;
    }

    cout << "--------------------------------------" << endl;
    cout << "PRESIONE ENTER PARA ARROJAR LOS DADOS: ";

    getline(cin, enter);

    if(enter.empty())
    {

        lanzarDados = true;

    }

    while(lanzarDados)
    {

        for(int i=0; i<6; i++)
        {

            vectorDados[i] = dadosRandom();
            vectorContador [vectorDados[i]-1]=true;

            cout << endl;

            switch(vectorDados[i])
            {

                case 1:
                    dado1();

                    vectorContador[0] = true;
                    break;

                case 2:
                    dado2();

                    vectorContador[1] = true;
                    break;

                case 3:
                    dado3();

                    vectorContador[2] = true;
                    break;

                case 4:
                    dado4();

                    vectorContador[3] = true;

                break;

                case 5:
                    dado5();

                    vectorContador[4] = true;
                    break;

                case 6:
                    dado6();

                    vectorContador[5] = true;
                    break;

            }

        }

        lanzarDados = false;

    }

        // MOSTRAR NÚMERO DE DADOS POR PANTALLA
        //------------------------------------------------------------------------------------------------------

        cout << endl << "NÚMERO DE DADOS: ";

        for(int i=0; i<6; i++)
        {

            cout << vectorDados[i] << " ";

        }

        cout << endl;
        cout << endl;

        // CALCULAR ESCALERA
        //------------------------------------------------------------------------------------------------------

        calcularEscalera(jugadorActual, vectorContador, puntosTotalesJugadorActual, finalizarRonda);

        // CALCULAR TRES PARES
        //------------------------------------------------------------------------------------------------------

        calcularTresPares(jugadorActual, vectorDados, puntosTotalesJugadorActual);

        // CALCULAR TRÍO DE UNOS
        //------------------------------------------------------------------------------------------------------

        //

        // SUMAR PUNTOS
        //------------------------------------------------------------------------------------------------------

        if(vectorJugadorRonda[0])
        {

            vectorPuntosTotales[0] += puntosTotalesJugadorActual;

        }
        else
        {

            vectorPuntosTotales[1] += puntosTotalesJugadorActual;

        }

}




