#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int FILAS = 8;
const int COLUMNAS = 8;
const int TOTAL = FILAS * COLUMNAS;

// Función para determinar el tipo de caracter
char generarCaracterAleatorio() {
    int tipo = rand() % 3;  // 0 = minúscula, 1 = mayúscula, 2 = número

    if (tipo == 0) {
        return 'a' + rand() % 26;
    } else if (tipo == 1) {
        return 'A' + rand() % 26;
    } else {
        return '0' + rand() % 10;
    }
}

// Intercambio de caracteres
void intercambiar(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

// Función para imprimir matriz
void imprimirMatriz(char matriz[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    srand(time(0));

    char matriz[FILAS][COLUMNAS];
    char plano[TOTAL];

    // Llenar matriz con caracteres aleatorios y guardar en arreglo plano
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

    // Ordenar arreglo plano según el criterio personalizado

    // Paso 1: Clasificar en 3 grupos
    char minusculas[TOTAL], mayusculas[TOTAL], numeros[TOTAL];
    int countMin = 0, countMay = 0, countNum = 0;

    for (int i = 0; i < TOTAL; i++) {
        if (plano[i] >= 'a' && plano[i] <= 'z') {
            minusculas[countMin++] = plano[i];
        } else if (plano[i] >= 'A' && plano[i] <= 'Z') {
            mayusculas[countMay++] = plano[i];
        } else if (plano[i] >= '0' && plano[i] <= '9') {
            numeros[countNum++] = plano[i];
        }
    }

    // Paso 2: Ordenar cada grupo con burbuja

    // Minúsculas: a-z
    for (int i = 0; i < countMin - 1; i++) {
        for (int j = 0; j < countMin - i - 1; j++) {
            if (minusculas[j] > minusculas[j + 1]) {
                intercambiar(minusculas[j], minusculas[j + 1]);
            }
        }
    }

    // Mayúsculas: Z-A
    for (int i = 0; i < countMay - 1; i++) {
        for (int j = 0; j < countMay - i - 1; j++) {
            if (mayusculas[j] < mayusculas[j + 1]) {
                intercambiar(mayusculas[j], mayusculas[j + 1]);
            }
        }
    }

    // Números: 0-9
    for (int i = 0; i < countNum - 1; i++) {
        for (int j = 0; j < countNum - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                intercambiar(numeros[j], numeros[j + 1]);
            }
        }
    }

    // Paso 3: Reunir todos los grupos en orden deseado
    index = 0;
    for (int i = 0; i < countMin; i++) plano[index++] = minusculas[i];
    for (int i = 0; i < countMay; i++) plano[index++] = mayusculas[i];
    for (int i = 0; i < countNum; i++) plano[index++] = numeros[i];

    // Paso 4: Rellenar la matriz con el arreglo ordenado
    index = 0;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            matriz[i][j] = plano[index++];
        }
    }

    cout << "\nMatriz ordenada:\n";
    imprimirMatriz(matriz);

    return 0;
}
