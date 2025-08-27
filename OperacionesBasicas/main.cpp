#include <iostream>

using namespace std;

/*
Tipos de datos en ENTEROS:
    - short (en memoria RAM ocupa 2 bytes)
    - int ~ long (en memoria RAM ocupa 4 bytes)
    - long long (en memoria RAM ocupa 8 bytes )

    SHORT
        2 bytes
        1 byte ~ 6 bites
        2 bytes ~ 16 bites

        2 en binario es -> 010
        10 en binario es -> 1010
        255 en binario es -> 11111111
        256 en binario es -> 00000001 00000000
        65535 en binario es -> 11111111 11111111
        VALOR MAX DE UN SHORT ES => 32767.5

        unsigned (keyword que solo utiliza valores positivos)

        AL USAR char se emplea '' comillas simples
        Al SER UNA CADENA se emplea "" comillas dobles

        CASTEAR = CONVERSION DE TIPO (static_cast<type>(object))
                                        cout << sizeof(object)

*/


int main()
{
    float val1 {20};
    float val2 {8};
    int suma = val1 + val2;
    int resta = val1 - val2;
    int mult = val1 * val2;
    float div = val1 / val2;

    cout << "La suma es: " << suma << endl;
    cout << "La resta es: "  << resta << endl;
    cout << "La multiplicacion es: " << mult << endl;
    cout << "La division es: " << div << endl;

    cout << "##################" << endl;
    long long val3 = 10;
    cout << sizeof(val1) << endl;
    long val4 = 15;
    cout << sizeof(val3) << endl;
    short val5 = 32768  ;
    cout << sizeof(val5) << endl;
    cout << "El valor de val5 es: " << val5 +1 << endl;

    cout << "##################" << endl;
    unsigned char obj = '15';
    int val = static_cast<int>(obj);
    cout << sizeof(obj) << endl;
    cout << "El valor entero es: " << val << endl;

    int resul = val - '0';
    cout << "El resultado entero es: " << val << endl;
    cout << resul << endl;


    return 0;
}
