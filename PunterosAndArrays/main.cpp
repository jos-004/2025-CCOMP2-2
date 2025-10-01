#include <iostream>

using namespace std;
/*
    EL NOMBRE DE UN ARREGLO ES UN PUNTERO AL PRIMER ELEMENTO DEL ARREGLO

* ARITMETICA DE PUNTEROS
=========================
* A LOS PUNTEROS SE LE PUDE INCREMENTAR/DECREMENTAR USANDO
* OPERADRES (++)/(--)
*/


int main()
{
    int arr[] = {1,2,3,4,5};

    cout << arr << endl;
    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
    cout << &arr[3] << endl;
    cout << &arr[4] << endl;

/// CON ESTO PODEMOS RECORRER TODOS LOS VALORE DELA ARRAY

    int* ptr;
    ptr = &arr[0];
    ptr = arr ;
    cout << *ptr << endl;
    ptr++;
    cout << *ptr << endl;
    ptr++;
    cout << *ptr << endl;
    ptr++;
    cout << *ptr << endl;
    ptr++;
    cout << *ptr << endl;

    int * ptr2 = arr;
    for (int i =0 ; i<5; i++, ptr2 ++)
        cout << *ptr2 << " ";
    cout << endl;


    return 0;
}
