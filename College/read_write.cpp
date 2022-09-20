#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student{
    public:
        string name;
        string branch;
        int roll_no;

        int input();

        int output();
};

int Student::input(){
    ofstream file_obj;

    file_obj.open("student.txt",ios::app);

    Student obj;
    cin.ignore();
    getline(cin,obj.name);
    getline(cin,obj.branch);
    cin >> obj.roll_no;

    file_obj.write((char*) &obj, sizeof(obj));

    return 0;
}

int Student::output(){
    ifstream fileobj;

    fileobj.open("student.txt",ios::in);

    Student stud;

    fileobj.read((char*) &stud,sizeof(stud));

    while(!fileobj.eof()){
        cout << stud.name<<endl;
        cout << stud.branch<<endl;
        cout << stud.roll_no<<endl;
    }

    return 0;
}

int main(){

    Student s;
    s.input();
    s.output();
    return 0;
}