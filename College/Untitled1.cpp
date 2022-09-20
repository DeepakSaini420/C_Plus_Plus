#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v;
	for(int i=0;i<4;i++){
		int x{0};
		cin >> x;
		v.push_back(x);
	}
	v.insert(v.begin()+2,4,100);
	for (auto x:v){
	    cout << x <<" ";
	}
	return 0;
}
