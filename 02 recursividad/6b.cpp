
/*
6. Realice una funci�n que dado un vector lo transforme de modo tal que el primer elemento sea el 
�ltimo y el ultimo el primero, el segundo el antepen�ltimo, etc. Utilice recursividad. 
*/

#include <iostream>
using namespace std;
int agregar(int *arr, int size, int limite, int &total);

int main(){
    const int N = 5;
    int arr[] = {3,2,3,4,1};
	//int arr[] = {1,2,3,2,1};
	//int arr[] = {1,2,1};
	//int arr[] = {1,2};
	cout << endl;

    int total = 0;
	int inicio = 0;
	int limite = (sizeof(arr)/sizeof(arr[0]));
	cout << "limite " << limite << endl;
	int x=limite;
	int arr2[N]={};
	for(int i = 0; i < limite; i++){
		arr2[x-1] = arr[i];
		x--;
		//cout << arr[i] << " ";
	}
	agregar(arr, limite, limite, inicio);
	
	
	for(int i = 0; i < limite; i++){
		cout << arr2[i] << " ";
	}
    return 0;
}

int agregar(int *arr, int size, int limite, int &inicio){
    if (size < limite*2)
		{
			size++;
			arr[size] = arr[inicio];
			agregar(arr, size, limite, inicio);
			inicio++;
			return 0;
		}
	else return 1;
	return 1;
}