#include <iostream>
using namespace std;

void bubbleSort(int *arr,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int main(){
	int *arr,n{0};
	cout << "Enter The Length of Array:- ";
	cin >> n;
	arr=new int[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	bubbleSort(arr,n);
	for(int i=0;i<n;i++){
		cout << arr[i] <<" ";
	}
	return 0;
}
