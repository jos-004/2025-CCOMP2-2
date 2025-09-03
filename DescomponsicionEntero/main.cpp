#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Ingrese un numero de 4 digitos: " << endl;
    cin >> num ;

    cout << "\n\n El numero ingresado es: " << num << endl;

     cout << num / 1000 << endl;
     cout << (num %1000) / 100 << endl;
     cout << (num % 100) /10 << endl;
     cout << num % 10 << endl;


    return 0;
}
