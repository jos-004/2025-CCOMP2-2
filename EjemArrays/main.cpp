#include <iostream>

///paso por referencia


using namespace std;

int x = 10;
    int y = 20;

    void intercambio (int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
    }

void invertir (int arr[], int tam){
    for (int i = 0, j = tam -1; i < j; i++, j--){
        int temp = arr [i];
        arr[i] = arr[j];
        arr[j]= temp;
    }
}

void invertirR (int arr [], int tam, int i =0){
    if (i > tam){
        return;
    }else{

        int temp = arr [i];
        arr[i] = arr[tam-1];
        arr[tam-1]= temp;
        invertirR(arr, tam-1, i+1);
    }
}

void invertirRinter (int arr [], int tam, int i =0){
    if (i > tam){
        return;
    }else{
        intercambio(arr[i], arr[tam-1]);
        invertirRinter(arr, tam-1, i+1);
    }
}


void pasref (int arr[], int tam, int i = 0){
    for (int i = 0, j = tam -1; i < j; i++, j--){
        intercambio (arr[i], arr[j]);
    }

}

void print (int arr[], int tam){
    for (int i = 0; i < tam ; i++){
    cout << "[ ";
    cout << arr[i] << " ";
    cout << "]";
    }
}

int main()
{
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    print (arr , 5);
    invertir (arr, 5);
    cout << endl;
    print (arr, 5);
    cout << endl;
    print (arr , 5);
    invertirR(arr, 5);
    cout << endl;
    pasref(arr,5);
    cout << endl;
    invertirRinter(arr, 5);


    return 0;
}
