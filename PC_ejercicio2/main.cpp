#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int FILAS = 8;
const int COLUMNAS = 8;
const int TOTAL = FILAS * COLUMNAS;

// Genera un carácter aleatorio (minúscula, mayúscula o número)
char generarCaracterAleatorio() {
    int tipo = rand() % 3;

    if (tipo == 0) return 'a' + rand() % 26;
    if (tipo == 1) return 'A' + rand() % 26;
    return '0' + rand() % 10;
}

// Intercambia dos caracteres
void intercambiar(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

// Imprime la matriz 8x8
void imprimirMatriz(char matriz[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

// Ordena un arreglo con bubble sort
void ordenarBurbuja(char arr[], int n, bool ascendente) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((ascendente && arr[j] > arr[j + 1]) ||
                (!ascendente && arr[j] < arr[j + 1])) {
                intercambiar(arr[j], arr[j + 1]);
            }
        }
    }
}

// Clasifica caracteres en 3 grupos
void clasificarCaracteres(char plano[], int n,
                          char minus[], int &countMin,
                          char mayus[], int &countMay,
                          char nums[], int &countNum) {
    countMin = countMay = countNum = 0;

    for (int i = 0; i < n; i++) {
        if (plano[i] >= 'a' && plano[i] <= 'z') {
            minus[countMin++] = plano[i];
        } else if (plano[i] >= 'A' && plano[i] <= 'Z') {
            mayus[countMay++] = plano[i];
        } else if (plano[i] >= '0' && plano[i] <= '9') {
            nums[countNum++] = plano[i];
        }
    }
}

// Llena la matriz con los caracteres ordenados
void reconstruirMatriz(char matriz[FILAS][COLUMNAS], char ordenado[], int total) {
    int index = 0;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            matriz[i][j] = ordenado[index++];
        }
    }
}

int main() {
    srand(time(0));

    char matriz[FILAS][COLUMNAS];
    char plano[TOTAL];

    // Llenar matriz con caracteres aleatorios y plano
    int index = 0;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            char c = generarCaracterAleatorio();
            matriz[i][j] = c;
            plano[index++] = c;
        }
    }

    cout << "Matriz original:\n";
    imprimirMatriz(matriz);

    // Clasificar caracteres
    char minus[TOTAL], mayus[TOTAL], nums[TOTAL];
    int countMin, countMay, countNum;
    clasificarCaracteres(plano, TOTAL, minus, countMin, mayus, countMay, nums, countNum);

    // Ordenar los tres grupos
    ordenarBurbuja(minus, countMin, true);   // a-z
    ordenarBurbuja(mayus, countMay, false);  // Z-A
    ordenarBurbuja(nums, countNum, true);    // 0-9

    // Combinar en un arreglo ordenado
    index = 0;
    for (int i = 0; i < countMin; i++) plano[index++] = minus[i];
    for (int i = 0; i < countMay; i++) plano[index++] = mayus[i];
    for (int i = 0; i < countNum; i++) plano[index++] = nums[i];

    // Rellenar matriz con los datos ordenados
    reconstruirMatriz(matriz, plano, TOTAL);

    cout << "\nMatriz ordenada:\n";
    imprimirMatriz(matriz);

    return 0;
}
