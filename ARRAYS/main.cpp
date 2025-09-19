#include <iostream>

using namespace std;
/// CONJUNTO DE ELEMENTOS DEL MISMO TIPO, ALMACENADOS EN MEMORIA DE FORMA CONSECUTIVA
/// int array [5] = {10, 42, 53, 754, 23};
/// cout << array[0]; -----> 10

int main()
{
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    cout << "Elemento 1: " << arr[0] << endl;
    cout << "Elemento 2: " << arr[1] << endl;
    cout << "Elemento 3: " << arr[2] << endl;
    cout << "Elemento 4: " << arr[3] << endl;
    cout << "Elemento 5: " << arr[4] << endl;

    int sum {0};
    for (int i = 0; i < 5; i++){
        sum += arr[i];
    }
    int mult {1};
    for (int j = 0; j < 5; j++){
        mult *= arr[j];
    }
    cout << "La suma de los elementos de su lista es: " << sum << endl;
    cout << "La multiplicacion de los elementos de su lista es: " << mult << endl;

    /// Implemente una funcion que reciba un arreglo de enteros
    /// y su tamaño  y retorne la suma de elementos del arreglo


    return 0;
}
