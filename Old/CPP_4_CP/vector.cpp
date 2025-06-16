#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){ //using ampersand to pass the address of the array instead of copy
	for(int i:v){
		cout << i <<" ";
	}
	cout <<endl;
}

int main(){
// start here
// vector limit 10^7(general cont. mem allocation constraint for online judges)

	vector <int> v;
	int n;
	cin >> n;
	for(int i = 0; i <n; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	printVec(v);
	
	//another way of declaration
	vector<int> vx(10 , 3); //1. size 2. val to init with
	vx.push_back(7); //there are 10 3s and 1 7 in the end of the vector
	// *** NOTE ***
	//copying a vector in another is a O(n) operation, so instead of copying
	//passing a reference is a more optimized approach
return 0;
}