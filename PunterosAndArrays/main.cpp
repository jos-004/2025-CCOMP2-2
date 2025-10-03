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
    cout << endl;
    cout << endl;

/// CON ESTO PODEMOS RECORRER TODOS LOS VALORE DELA ARRAY
    cout << "IMPRIMIR VALORES SIN USAR BUCLES, SOLO VARIA EL PUNERO: " << endl;
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

/// RECORRER AREGLO CON UN BUCLE USANDO PUNTERO

    int * ptr2 = arr; /// arr ----> primer elemento
    for (int i =0 ; i<5; i++, ptr2 ++)
        cout << *ptr2 << " ";
    cout << endl;

/// recorrer desde atrás

    /// arr + (x) ---- > direccion de memoria del indice 'x'
    /// *(arr + (x)) ----> contenido del puntero en posicion 'x'

    cout << "Usando indice: " << endl;
    cout << *(arr+0) << "\t";
    cout << *(arr+1) << "\t";
    cout << *(arr+2) << "\t";
    cout << *(arr+3) << "\t";
    cout << *(arr+4) << "\n";
    cout << arr + 0 << endl;

    cout << "RECORRER A LA INVERSA USANDO FOR: " << endl;
    int* ptr3 = arr+4;
    for (int i = 0; i<5; i++, ptr3--){
        cout << *ptr3 << " ";
    cout << endl;
    }

    ///IMPRIMIR CON PUNTEROS USANDO WHILE
    cout << "USANDO WHILE IZQ A DERECHA" << endl;
    int* ptr4 = arr;
    while (ptr4 <= arr+4){
        cout << *ptr4 << " ";
        ptr4++;
    }
    cout << endl;

    ///WHILE INVERSA
    cout << "USANDO WHILE INVERSO " <<endl;
    int* ptr5 = arr+4;
    while (ptr5 >= arr){
        cout << *ptr5 << " " ;
        ptr5--;
    }
    cout << endl;



    return 0;
}
