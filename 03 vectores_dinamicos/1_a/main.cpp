#include <iostream>
using namespace std;

int * agrega(int *arr, int cant, int dato);

int main(int argc, char *argv[]) {
    int cant = 5;
    int *arr= new int[cant];
    arr[0] = 5;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 6;
    arr = agrega(arr, cant, 99);
    cant++;
    arr = agrega(arr, cant, 88);
    for (int i=0;i<cant+1;i++)
    {
        cout << arr[i]<<endl;
    }


    return 0;
}

int * agrega(int *vec, int cant, int dato){

    int *aux = new int[cant +1];

    for (int i=0;i<cant;i++)
    {
        aux[i]=vec[i];
    }
    aux[cant]=dato;
    delete [] vec;
    return aux;

}
