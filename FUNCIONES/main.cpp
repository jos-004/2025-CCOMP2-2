#include <iostream>

using namespace std;

int potencia (int base, int expo)
{
    long long result {1};
    if (base == 0){
        return 0;
        }
    if (expo == 0){
        return 1;
    }else{
        for (int i = 0; i<expo; i++){
         result = result * base;
        }
        return result;
    }
}



int main()
{
    cout << potencia (2,3) << endl;
    cout << potencia (0,1) << endl;
    cout << potencia (4,0) << endl;

    return 0;
}
