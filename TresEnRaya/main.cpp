#include <iostream>
using namespace std;
/*
TABLERO
CONTADOR
JUGADORES
TURNOS
OPCIONES DE GANAR (DESDE QUE PASO)
ITEMS (USAREMOS SWITCH) 'char'

*/

int contador {0};




void tablero ()
{
    for (int i =0; i < 3; i++){
        for (int j = 0;j<3; j++){
            cout << i  << j << "\t";
        }
    }
}



using namespace std;

int main()
{
    tablero ();


    return 0;
}
