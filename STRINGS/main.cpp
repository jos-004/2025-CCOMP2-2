#include <iostream>

using namespace std;
/*
"" ---> Para cadenas

'' ---> Para caracteres


'\0' ---> caracter de fin de cadena

*/
int main()
{

    string cad = "Ciencia de la Computacion" ;
    cout << cad.at(5) << endl; /// ---> imprime caracter en dicha posición [0, n]

    int i= 0;
    while (cad.at(i) != '\0'){
        i++;
    }
    cout << i << endl;
    return 0;
}
