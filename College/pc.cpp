#include <iostream>
using namespace std;

struct person{
	string name;
	int date;
	int year;
	int month;
};

int main(){
	int n{0},min_age{150},max_age{-1};
	cout << "Enter The Number of Persons:-";
	cin >> n;
	person persons[n];
	int Age[n];
	for(int i=0;i<n;i++){
		cout << "Enter The Name of person:-";
		cin>> persons[i].name;
		cout << "Enter The Date:-";
		cin >> persons[i].date;
		cout << "Enter The Year:-";
		cin >> persons[i].year;
		cout << "Enter The Month:-";
		cin >> persons[i].month;
	}
	
	for(int i=0;i<n;i++){
		cout << "Name:-"<<persons[i].name<<" ";
		Age[i]=2022-persons[i].year;
		cout << "Age:-"<< Age[i]<<endl;
	}
	for(int i=0;i<n;i++){
		min_age = Age[i]<min_age ? Age[i]:min_age;
		max_age = Age[i]>max_age ? Age[i]:max_age;
	}
	cout
	return 0;
}
