#include <iostream>
#include <string>
#include "funciones.h"
#include "datosJugadores.h"
using namespace std;

void cargarDatosJugador (string &nombreJugador){
 cout<< "ingresa el nombre del jugador : ";
 cin >> nombreJugador;
 cout<< "Presione alguna tecla para continuar " <<nombreJugador <<endl;
 return;
}

 void cargarDatosMonojugador (string &monoJugador){
 cargarDatosJugador(monoJugador);
 return;
}

 void cargarDatosJugadores (string &jugador1,string &jugador2){
   cargarDatosJugador(jugador1);
   cargarDatosJugador(jugador2);
 return;
 }
