#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int FILAS = 10;
const int COLUMNAS = 10;
const int TOTAL = FILAS * COLUMNAS;

// Verifica si un número es primo
bool esPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Ordena un arreglo de mayor a menor usando burbuja
void ordenarBurbuja(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Intercambiar
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Imprime una matriz
void imprimirMatriz(int matriz[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

// Reconstruye la matriz a partir de un arreglo plano
void reconstruirMatriz(int matriz[FILAS][COLUMNAS], int plano[], int total) {
    int index = 0;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            matriz[i][j] = plano[index++];
        }
    }
}

int main() {
    srand(time(0));

    int matriz[FILAS][COLUMNAS];
    int plano[TOTAL];
    int index = 0;

    // Llenar la matriz original con números aleatorios entre 0 y 100
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            int num = rand() % 101;
            matriz[i][j] = num;
            plano[index++] = num;
        }
    }

    cout << "Matriz original:\n";
    imprimirMatriz(matriz);

    // Separar en primos y no primos
    int primos[TOTAL], noPrimos[TOTAL];
    int countPrimos = 0, countNoPrimos = 0;

    for (int i = 0; i < TOTAL; i++) {
        if (esPrimo(plano[i])) {
            primos[countPrimos++] = plano[i];
        } else {
            noPrimos[countNoPrimos++] = plano[i];
        }
    }

    // Ordenar ambos grupos de mayor a menor
    ordenarBurbuja(primos, countPrimos);
    ordenarBurbuja(noPrimos, countNoPrimos);

    // Combinar ambos grupos en un solo arreglo
    index = 0;
    for (int i = 0; i < countPrimos; i++) plano[index++] = primos[i];
    for (int i = 0; i < countNoPrimos; i++) plano[index++] = noPrimos[i];

    // Rellenar la nueva matriz
    reconstruirMatriz(matriz, plano, TOTAL);

    cout << "\nMatriz con primos primero (descendente), luego no primos (descendente):\n";
    imprimirMatriz(matriz);

    return 0;
}
