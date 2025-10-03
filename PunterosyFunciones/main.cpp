#include <iostream>

using namespace std;

/*
    PARA HALLAR EL TAMAÑO USAMOS:
    sizeof(NOMBRE_ARRAY) Y LO DIVIDIMOS ENTRE el sizeof('NOMBRE_ARRAY[0]')


*/

void printArray (int arr[], int size){
    cout << "[" ;
    for (int i = 0; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}
void printArrayPuntero (int *arr, int size){
    cout << "[" ;
    for (int i = 0; i < size ; i++,arr++){
        cout << *arr << " ";
    }
    cout << "]" << endl;
}

/// intercambio de valores usando punteros

void intercambio(int* a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

/// FUNCION PARA INVERTIR LOS ELEMENTOS DE UN ARREGLO USANDO PUNTEROS
/// ###################
/// REPASAR!!!

void invertirarray(int* ini, int* fin){

    while (ini < fin){
        intercambio(ini, fin);
        ini++;
        fin--;

        }
    }

void interRecur(int* ini, int* fin){
    if (ini >= fin){
        return;
    }else{
        intercambio(ini, fin);
        return interRecur(++ini, --fin);
    }
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int tam = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, tam);
    printArrayPuntero(arr, tam);
    cout << "-----------" << endl;
    int x =10;
    int y = 20;

    intercambio(&x, &y);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "----------------" << endl;
    invertirarray(arr, arr+tam-1);
    printArray(arr, tam);
    cout << "RECURSIVO: " << endl;
    interRecur(arr, arr+tam-1);
    printArray(arr, tam);
    return 0;
}
