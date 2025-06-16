#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int>&v){
	for (auto i : v){
		cout << i <<" ";
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		
		vector<int> arr;
		
		//
		
		for(int i = 1; i <= n; i++){
			int val = i*(i+1);
			arr.push_back(val);
		}
		
		printVector(arr);
		cout << '\n';
		
	}
}