#include <iostream>
using namespace std;

void recursividad(int i, int j, long long n, long long m) {
    if (i <= n)
        cout << "i: " << i << "\t";

    if (j >= m)
        cout << "j: " << j << endl;

    if (i > n && j < m)
        return;

    recursividad(i + 2, j - 2, n, m);
}

int main() {
    long long n, m;
    cout << "Ingrese un número positivo (n): ";
    cin >> n;
    cout << "Ingrese un número negativo (m): ";
    cin >> m;

    if (n < 0 || m > 0) {
        cout << "Error: n debe ser positivo y m debe ser negativo." << endl;
        return 1;
    }

    recursividad(0, 0, n, m);

    return 0;
}
