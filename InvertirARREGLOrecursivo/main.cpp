#include <iostream>

using namespace std;

int arr, tam, i;

void invertir(int arr[], int tam){

    if (tam == 0){
        return ;
    }else{
        int arr_inv[tam];
            for (int i = 0; i< tam; i++){
            arr_inv[(tam)-1] == arr [i];
            tam --;
            i++;
        }
    }
    return ;
}


int main()
{
    cout << arr << endl;
    cout << tam << endl;
    cout << invertir({2,3,4,5}, 4);
    return 0;
}
