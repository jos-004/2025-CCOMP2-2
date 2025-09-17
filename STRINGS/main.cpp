#include <iostream>
#include <string>
using namespace std;
/*
"" ---> Para cadenas

'' ---> Para caracteres


'\0' ---> caracter de fin de cadena

*/

    ///IMPLEMENTE UNA FUNCION QUE INTERCAMBIE SUS VALORES

    void cambio(int &a, int &b){
        int aux = a;
        a = b ;
        b = aux;
        cout << a << endl;
        cout << b;
    }
int main()
{


    string cad = "CIENCIA DE LA COMPUTACION" ;
    ///cout << cad.at(5) << endl; /// ---> imprime caracter en dicha posición [0, n]
    int i= 0;
    int cont {0};
    char g;
    ///cout << "Letra para buscar: " << endl;
    ///cin >> g;
    /*
    while (cad.at(i) != '\0'){
        i++;
    }
    */
    while (i < cad.length()){
        if (cad[i] == g){
            cont += 1;
        }
        i++;
    }

    /// VERFICAR SI LA CADENA ES PALIDROMO
/*
    string cadena = "reconocer";
    int i =0;
    int j = cadena.length() -1 ;
    bool esPalindromo = true;

    while (i<j){
        if (cadena[i] != cadena[j]){
            esPalindromo false;
            break;
        }
        i++;
        i--;
    }
    if (esPalindromo){
        cout << "La cadena es palindroma"
    }
*/
    int x =10;
    int y =20;
    cambio(x,y);


    ///cout << "La letra es: " << cad.at(5) << endl;
    ///cout << "Se repite: " << cont << " veces" << endl;
    return 0;
}




