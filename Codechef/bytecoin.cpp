#include <bits/stdc++.h>
using namespace std;

int main(){
	
	long long int n;
	while(cin >> n){

	long long int val = floor(n/2) + floor(n/3) + floor(n/4);
	long long int res = (val < n)? n : val;
	cout << res << endl;
	}
return 0;
}
