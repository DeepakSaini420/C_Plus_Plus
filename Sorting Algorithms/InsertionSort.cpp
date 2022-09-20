#include <iostream>
using namespace std;

void insertionSort(int *arr,int n){
	for(int i=1;i<n;i++){
		int current = arr[i];
		int prev=i-1;
		while( prev>=0 && arr[prev]>current ){
			arr[prev+1] = arr[prev];
			prev = prev-1;
		}
		
		arr[prev+1]=current;
	}
}

int main(){
	int *arr,size{0};
	cout << "Enter The Size of Array:-";
	cin >> size;
	arr = new int[size];
	for(int i=0;i<size;i++){
		cin >> arr[i];
	}
	insertionSort(arr,size);
	for(int i=0;i<size;i++){
		cout << arr[i] << " ";
	}
}
