#include <iostream>
#include <fstream>
using namespace std;

struct info{
	string name;
	string branch;
	int rollNo;
	int year;
};

int main(){
	string name,branch;
	int rollNo,year;
	cin >> name >> branch;
	cin >> rollNo >> year;
	info stud = {name,branch,rollNo,year};
	
	ofstream myfile;
	myfile.open("example.txt");
	myfile << "Name:- "<<stud.name<<"\n";
	myfile << "Roll No:- "<<stud.rollNo<<"\n";
	myfile << "Branch:- "<<stud.branch<<"\n";
	myfile << "Year:- "<<stud.year<<"\n";
	myfile.close();
	
	string line;
	ifstream file("D:\Learn\C++\College\example.txt");
	if(file.is_open()){
		while(getline(file,line)){
			cout << line <<'\n';
		}
		file.close();
	}else{
		cout << "Unable to open file"<<endl;
	}
	return 0;
}
