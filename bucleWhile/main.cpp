#include <iostream>
using namespace std;

    /*
    *Bucle While
            While (CONDICION VERDADERA){
                INSTRUCCION 1
                INSTRUCCION 2
                ...
                INSTRUCCION N
            }
    */

int main()
{
    int i =1;

    while (i <10){
        cout << i << endl;
        i+=1;
}

    /// MULTIPLOS DE 3 [1 - 100]
    int b = 1;
    while (b < 100) {
           if (b % 3 == 0){
        cout << b << endl;}

        b+=1;
        }

    return 0;
}
