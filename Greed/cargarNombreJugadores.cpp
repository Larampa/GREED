#include <iostream>
#include "Funciones.h"
#include "DatosJugadores.h"
using namespace std;


void cargarDatosJugador (string nombreJugador){
 system("cls");
 cout<< "INGRESA EL NOMBRE DEL JUGADOR #1 : ";
 cin >> nombreJugador;

 return;
}

void cargarDatos2Jugadores(string primerJugador,string segundoJugador){
 system("cls");
 cargarDatosJugador (primerJugador);
 cout<< "INGRESA EL NOMBRE DEL JUGADOR #2 : ";
 cin >> segundoJugador;
  return;
}

