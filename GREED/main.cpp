#include <iostream>
#include <ctime>
#include "funciones.h"

using namespace std;

int main(){

    int opcion;
    srand(time(0));

 do
  {
     system("cls");

     opcion = TituloyMenu();

     switch(opcion){
       case 1:

            tirarDados();
            tirarBloqueadoras();

        break;
       case 2:
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
     cout << "Presione cualquier tecla para continuar ...";
     system("pause>nul");
    } while(opcion != 0);

    return 0;
}
