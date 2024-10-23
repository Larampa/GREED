#include <iostream>
#include <ctime>
#include "Funciones.h"
#include "DatosJugadores.h"

using namespace std;

int main(){
    string nombre,nombre2; ///lo agregue por ahora aca a los nombres de los jugadores
    int opcion;
    srand(time(0));

 do
  {
     system("cls");

     opcion = TituloyMenu();

     switch(opcion){
       case 1:
            cargarDatosJugador(nombre); /// se agrego
            tirarDados();
            tirarBloqueadoras();

        break;
       case 2:
            cargarDatos2Jugadores(nombre, nombre2);
             tirarDados();
            tirarBloqueadoras();
           cout << endl << "Faltaria desarrollar la funcion para jugar de a 2 " << endl;
        break;
       case 3:
           cout << endl << " Estadisticas " << endl;
        break;
       case 4:
           creditos();
        break;
       case 0:
           cout << endl << "Gracias por utilizar mi juego!"<< endl;
           cout << "Los ganadores no usan drogas!!" << endl << endl;
        break;
     }
     cout << endl;

     system("pause>nul");
    } while(opcion != 0);

    return 0;
}
