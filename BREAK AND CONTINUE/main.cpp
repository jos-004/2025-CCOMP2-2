#include <iostream>

using namespace std;

/// CBREAK ROMPE EL BUCLE
/// CONTINUE SALTA A LA SIGUIENTE ITERACION


int main()
{
    int i= 1;
    cout<< "Probanda sentencia BREAK" << endl;

    while (i<10){
        if(i==5)
            break;
        cout << i << endl;
        i+=1;
    }

    i= 0 ;
    cout << "\n\nProbando la sentencia CONTINUE" << endl;
    while (i<10){
        i+=1;
        if(i==5)
            continue;
        cout << i << endl;
    }




    return 0;
}
