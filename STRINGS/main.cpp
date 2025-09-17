#include <iostream>
#include <string>
using namespace std;
/*
"" ---> Para cadenas

'' ---> Para caracteres


'\0' ---> caracter de fin de cadena

*/
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

    string cadena = "reconocer";

    for (int i= 0; i < cadena.length(); i++){
        for (int j= 0; j > 0; j--){
            if (cadena[i] == cadena[j]){
                cout << "La cadena es paindroma " << endl;
            }else{
                cout << "No es palindromo " << endl;
            }
        }
    }



    ///cout << "La letra es: " << cad.at(5) << endl;
    ///cout << "Se repite: " << cont << " veces" << endl;
    return 0;
}




