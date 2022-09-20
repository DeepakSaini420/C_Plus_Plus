#include <iostream>
#include <cstdlib>
using namespace std;

class student{
	string name;
	int age;
	public:
		student(string name,int age){
			this->name=name;
			this->age=age;
		}
		void display(){
			cout << "Name of Person:-"<<name<<endl;
			cout << "Age of Person:-" << age<<endl;
		}
		void * operator new(size_t size){
			cout << "Overloading new operator with size: "<<size<<endl;
			void *p= ::operator new(size);
			return p;
		}
		
		void operator delete(void *p){
			cout << "Overloading delete operator"<<endl;
			free(p);
		}
};




int main(){
	
	student *p = new student("C Plus Plus",4);
	p->display();
	delete p;
	return 0;
}
