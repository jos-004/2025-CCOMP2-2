#include <iostream>

using namespace std;

int main()
{
    /*
    *IMPLEMENTE UN PROGRAMA QE SOLICITE UN NUMERO
    POR TECLADO E NIDIQUE SI DICHO NUMERO ES PRIMO
    */
/*
    int num;
    long long n, i=1 , d=0;
    cin >> n;
    while (i<=n){
        if (n%i ==0){
            d++;
        }
        i++;
    }
    cout << ((d==2)? "primo" : "no primo");

    /*
    Implemente un programa que solicite un nuumero
    e imprima los numeros primos menores a dicho numero


    int nume;
    long long numero, j=1, g =0;
    cin >> numero;

    while (i<=numero){
        if (numero%j ==0){
            g++;
        }
        j++;
    }
    cout << ((g==2)? "primo": "no primo" );

    if (numero % j== 0){
        cout << numero<< endl;

    }

    */

    /*
    * Implemente un program que spolicite un numero e imprima
    los numeros primos menores que dicho numero
    */
    long long n, j=2, d=0, i=2 ;
    cin >> n;

    while (j <= n){
        if (j ==2 ){
            cout << "2 " ;
            j++;
            continue;
        }
        while (i*i <= j ){
            if(j%i == 0){
                d++;
            }
            if (d>0)break;
            i++;
        }
        if (d==0)
            cout<< j<< " ";
        d=0; i=2;
        j++;

    }






    return 0;
}
