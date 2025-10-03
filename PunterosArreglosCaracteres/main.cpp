#include <iostream>

using namespace std;

int contCarac(char *ptr, int car){
    int cont = 0;
    while (*ptr != '\0'){
        if (*ptr == car){
            cont++;
        }
    ptr++;
    }
    return cont;
}

int main()
{
    char cad[] = "ciencia de la computacion";
    cout << contCarac(cad, 'c');
    return 0;
}
