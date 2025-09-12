#include <iostream>

using namespace std;

bool esPrimo (int n)
{
    for (int i = 2; i*i<= n; i++){
        if (n% i == 0){
            return false;
        }
    }
    return true;
}

void imprimir_Nprimos (int n){
int i {2};
while (i < n){
    if (esPrimo(i))
        cout << i << " " ;
    i++;
    }
cout << endl;
}


/*
IMPLEMENTE UN CODE QUE RECIBA Y RETORNE EL NUMERO
DE DIGITO DE DICHO ENTERO
*/

int CantDig(long long g){
    long long contador {0};

    while (g > 0){
        g /= 10;
        contador +=1;
    }

    return contador;
}



int main()
{
    cout << esPrimo(2) << endl;
    cout << esPrimo(45) << endl;
    cout << esPrimo(29) << endl;

    imprimir_Nprimos(43);

    cout << CantDig(10000000000) << endl;


    return 0;
}
