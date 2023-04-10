//4. Realice un m�todo que retorne el menor elemento de un vector de 10 enteros. Utilice 
//	recursividad
#include <iostream>
using namespace std;
int minimo(int *arr, int size, int &min);
int menorOtraVersion(int * vector, int cantidad);

int main(){
    const int N = 2;
    int arr[N];
    for(int i = 0; i < N; i++){
        arr[i] = rand()%100 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;
	
	cout << "Menor " << menorOtraVersion(arr, N)<<endl;
    int min = 0;
	minimo(arr, N, min);
	cout << "Menor " << min;
    return 0;
}

int menorOtraVersion(int * vector, int cantidad) {
		if (cantidad == 1) {
			return vector[0];
		} else {
			int aux = menorOtraVersion(vector, cantidad - 1);
			if (vector[cantidad -1] < aux) {
				return vector[cantidad -1];
			} else {
				return aux;
			}
		}
	}
int minimo(int *arr, int size, int &min){
    if(size > 0)
	{
		if (min == 0) 
			min = arr[size-1];
        if (min > arr[size-1])
			min = arr[size-1];
	}	else return 0;
    return minimo(arr, size-1, min);
}
