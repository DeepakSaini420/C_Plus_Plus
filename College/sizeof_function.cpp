#include <iostream>
using namespace std;

int main() {
  // Declearing the Variables with different datatypes numerical data is declared with value 0 to avoid garbage value
  
  int integer1 = 10;
  
  long int integer2 = 50;
  
  double double1 = 50.02;
  
  long double double2 = 50.02;
  
  float float1 = 12.1;
  
  char char1='b';
  
  bool boolean=true;

  /* 
    This sizeof function is used to get the size of a datatype
    It always give size in Bytes
  */
  cout << "Size of Integer is:- "<<sizeof(integer1)<<endl;
  cout << "Size of Long Integer is:- "<<sizeof(integer2)<<endl;
  cout << "Size of Double is:- "<<sizeof(double1)<<endl;
  cout << "Size of Long Double is:- "<<sizeof(double2)<<endl;
  cout << "Size of Float is:- "<<sizeof(float1)<<endl;
  cout << "Size of Character is:- "<<sizeof(char1)<<endl;
  cout << "Size of Character is:- "<<sizeof(boolean)<<endl;
}
