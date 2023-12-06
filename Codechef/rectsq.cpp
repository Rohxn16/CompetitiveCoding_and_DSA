#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	// this could have been so simple lol
	int res = min(a,b);
	while(res > 0){
		if(a % res == 0 && b % res == 0) break;
		res--;
	}
	return res;
}

int main(){

	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
	

	int side = gcd(m,n);
	cout << (m/side) * (n/side) << endl;
	}
return 0;
}
