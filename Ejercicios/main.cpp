#include <iostream>

using namespace std;
/// NUMERO PALINDROMO OÑO


 long long numero, inverso {0}, original {0}, resto{0};



int main()
{
    cout << "INGRESE NUMERO PORFI: " ;
    cin >> numero;

    original = numero;

    while (numero > 0){
    resto = numero % 10;

    inverso = (inverso* 10) + resto;
    numero = numero /10;
    }

    if (original == inverso){
        cout << "SU NUMERO ES PALINDROMO :D" ;
    }else{
        cout << "SU NUMERO NO ES PALINDROMO. " ;
    }


    return 0;
}
