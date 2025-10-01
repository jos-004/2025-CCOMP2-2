#include <iostream>

using namespace std;

int main()
{
    int* ptr1;
    int x =10;
    ptr1 = &x;

    cout << *ptr1 << endl;
    cout << ptr1 << endl;

    *ptr1 = 1000;
    cout << x << endl;
    cout << &ptr1 << "\n""\n";

    int* ptr2 = &x;
    *ptr2 = 5000;
    cout << x << endl;
    cout << *ptr1 << endl;
    cout <<*ptr2 << "\n""\n";

    double* ptr3;
    double y = 98.5;
    ptr3 = &y;

    cout << * ptr3 << endl;
    *ptr3 = 200.4;
    cout << *ptr3 << "\n""\n";

    double pi = 3.1416;
    double *ptrPI = &pi;
    cout << *ptrPI << endl;
    *ptrPI = 3.14;
    cout << *ptrPI << "\n""\n";

    return 0;
}
