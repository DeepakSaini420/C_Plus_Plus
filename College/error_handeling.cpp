#include <iostream>
using namespace std;

int display(int y){
	if(y==0){
		throw y;
	}
	return y;
}

int div(int x,int y){
	display(y);
	return x/y;
}

int main(){
	int a,b;
	cin >> a >> b;
	try{
		int result=div(a,b);
		cout << result<<endl;
	}catch(char num){
		cout << "Character Returns in execption!" <<endl;
	}catch(int num){
		cout << "Divison by zero not allowed!"<<endl;	
	}catch(...){
		cout << "Unhandeld Exception!" <<endl;
	}
}
