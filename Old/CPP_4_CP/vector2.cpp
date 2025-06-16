#include <bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int,int>> &v){
	for(auto i : v){
		cout << i.first <<" "<<i.second<<endl;
	}
	cout <<endl;
}

int main(){
// start here

// vector of pair
vector<pair<int,int>> v = {{1,2},{2,3},{3,4}}; //every element of this vector is a pair
printVec(v);

//array of vector
vector<int> v2[10]; //10 vectors of size 0 have been made here

vector<vector<int>> v3;
int N;
cin >> N;
for(int i = 0; i < N; i++){
	int n;
	cin >> n;
	vector<int> temp;
	for(int j = 0; j < n;j++ ){
		int x;
		cin >> x;
		temp.push_back(x);
	}
	v3.push_back(temp);
	
	for(auto i : v3){
		for(auto j : i){
			cout << j <<" ";
		}
		cout <<endl;
	}
}
return 0;
}
