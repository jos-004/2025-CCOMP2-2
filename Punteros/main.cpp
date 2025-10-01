#include <iostream>

using namespace std;
/*
* PUNTEROS
* ========
* VARIABLE QUE ALMACENA DIRECCIONES DE
*MEMORIA DE OTRA VARIABLE DEL MISMO TIPO

    DECLARACION:
    type* nombre_del_puntero

OPERADOR DE DIRECCION ---> &
    OBTENER DIRECCION DE MEMORIA DE UNA VARIABLO U OBJETO

OPERADOR DE DEREFERENCIACION ----> *
    OBTENER VALOR DE UNA DIRECION DE MEMORIA


    ####DECLARAR PUNTERO
        DECLARAR VARIABLE
        INICIALIZAR VARIABLE
        PUNTERO IGUALADO A LA DIRECCION DE MEMORIA

*/



int main()
{

    int A[4]={10000,2,3,4};
    int* A_ptr;
    A_ptr = &A[0];

    cout << "La direccio de la matriz es: " << A_ptr << endl;
    cout << "La direccion del primer elemento es: " << A_ptr +1 << endl;
    cout << "El elemento es : " << &A_ptr << "su suma es : " << *A_ptr + 1 << endl;


    int* ptr1;
    int x;
    x =10;
    ptr1 = &x;
    cout <<"\n";
    cout <<"\n";

    cout << "La direccion de la variable x es: " << &x<< endl;
    cout << "El valor de la variable x es: " << x << endl;
    cout << "La direccecion de memoria de x es: " << ptr1 << endl;
    cout << "El valor de la variable ptr usando dereferenciacion es: " << *ptr1 << endl;

    cout << "\n";
    cout <<"\n";

    int* ptr2;
    int y;
    y = 20;
    ptr2 = &y;

    cout << "La direccion de la variable x es: " << &y<< endl;
    cout << "El valor de la variable x es: " << y << endl;
    cout << "La direccecion de memoria de x es: " << ptr2 << endl;
    cout << "El valor de la variable ptr usando dereferenciacion es: " << *ptr2 << endl;

    int* ptr3;
    int z = 100;
    ptr3 = &z;

    int* ptr4;
    ptr4 = &z;

    if (ptr3 == ptr4){
        cout << "Los punteros son iguales" << endl;
    }


    return 0;
}
