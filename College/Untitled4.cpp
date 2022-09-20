#include <iostream>
using namespace std;
class Distance{
	int feet{0};
	int inches{0};
	public:
		Distance(int f,int i){
			feet=f;
			inches=i;
		}
		Distance(const Distance &d){
			this->feet = d.feet;
			this->inches = d.inches;
		}
		int getFeet(){
			return feet;
		}
		int getInches(){
			return inches;
		}
		void operator=(const Distance &d){
			feet = d.feet;
			inches = d.inches;
		}
		void displayDistance(){
			cout << feet<<" feets "<<inches << " inches "<<endl;
		}
};

int main(){
	Distance D1(11,10),D2(5,11);
	cout << "First Distance:- ";
	D1.displayDistance();
	cout << "Second Distance:- ";
	D2.displayDistance();
	D1=D2;
	cout << "First Distance:- ";
	D1.displayDistance();
	Distance D3(D1);
	D3.displayDistance();
	return 0;
}
