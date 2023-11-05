#include <bits/stdc++.h>
using namespace std;
/*This program is not complete*/

bool check(vector<long long int> v, int n){
	for(int i = 0; i < n; i++){
		if(i != n-1){
			if(v[i]%3 == 0){
				if(v[i+1] == v[i]/3 || v[i+1] == v[i]*2) continue;
			}else{
				if(v[i+1] == v[i]*2) continue;
				else return false;
			}
		}
	}
	return true;
}

vector<long long int> permute(vector<long long int> v, int n){
	//produce combinations and call the above function to check
}

int main(){
// start here

int n;
cin >> n;
vector<long long int> arr;
for(int i = 0; i < n; i++){
	long long int x;
	cin >> x;
	arr.push_back(x);
}
return 0;
}
