#include <iostream>
#include "funciones.h"
#include "datosJugadores.h"
using namespace std;

void tirarDados(){   /// genera los resultados aleatorios de los dados

 int dado[5];
 for (int i=0 ; i<5 ; i++ ){
    dado[i] = rand () % 6 +1 ;
 }

 ///falta pasar a funcion seria mostrarTirada
    cout << endl;
    cout << " #1 TIRADA " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "    " << dado[i];
    }
    cout << endl;
}


void tirarBloqueadoras(){   /// genera los resultados aleatorios de los dados BLOQUEADORES

 int dado[5];
 for (int i=0 ; i<5 ; i++ ){
    dado[i] = rand () % 6 +1 ;
 }


 ///falta pasar a funcion seria mostrarBloqueadoras
 cout << endl;
 cout << " # BLOQUEADORAS " << endl;
    for (int i = 0; i < 2; i++) {
        cout << "    " << dado[i];
    }
    cout << endl;
}


