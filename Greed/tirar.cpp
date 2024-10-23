#include <iostream>
#include "Funciones.h"
#include "DatosJugadores.h"
using namespace std;

void tirarDados(){

 int dado[5];
 for (int i=0 ; i<5 ; i++ ){
    dado[i] = rand () % 6 +1 ;
 }

    cout << endl;
    cout << " #1 TIRADA " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "    " << dado[i];
    }
    cout << endl;
}


void tirarBloqueadoras(){

 int dado[5];
 for (int i=0 ; i<5 ; i++ ){
    dado[i] = rand () % 6 +1 ;
 }


 cout << endl;
 cout << " # BLOQUEADORAS " << endl;
    for (int i = 0; i < 2; i++) {
        cout << "    " << dado[i];
    }
    cout << endl;
}


