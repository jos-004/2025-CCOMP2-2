#include <iostream>
///TENER UN CASO DE PARADA Y LA CONDICION DE TRABAJO
///SIEMPRE LLAMANDOSE A SI MISMA LA FUNCION DENTRO DE LA FUNCION
using namespace std;

long long factorial_positivo (long long g){
    if (g == 1){
        return 1;
    }else{
        return g* factorial_positivo(g-1);
    }
}

long long factorial_negativo (long long g){
    if (g == -1){
        return -1;
    }else{
        return g* factorial_negativo(g+1);
    }
}

/// <<<< 0,1,1,2,3,5,8,13,21,... >>>>

long long fibonacci (long long a){
    if (a == 1 || a == 0){
        return 1;
    }else{
        return fibonacci(a-1) + fibonacci(a-2);
    }
}


/// 14323 -----> cantidad: 5

/// hacer una funcion que diera la cantidad de digitos usando recursividad

int cant_digitos(int n){
    if (n < 9){
        return 1;
    }else {
        return cant_digitos(n/10) + 1;
    }
}
///DADO UN NUMERO REVISAR SI ES CAPICUA
/// <<65656>> ----> Si es capicua
/// <<96875>> ----> no es capicua

int capicua(int numero){
    if (numero < 10){
        return 1;
    }
    int g {10};
    if(capicua/g != capicua%g){
        return 0;
        break;
    }else {
        return capicua()/(g+10) == capicua()%(g+10);
    }
}





int main()
{
    cout << "El factorial es: " << factorial_negativo(-9) << endl;
    cout << "El factorial es: " << factorial_positivo(4)<< endl;
    cout << "La secuencia Fibonacci es: " << fibonacci(4) << endl;
    cout << "La cantidad de digitos de su numero es: " << cant_digitos(512415426) << endl;
    cout << "Su numero: " << capicua(141) << endl;
    return 0;
}
