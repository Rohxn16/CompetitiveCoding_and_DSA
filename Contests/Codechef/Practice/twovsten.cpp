#include <bits/stdc++.h>
using namespace std;

int getTurns(long long int x){
	
	if(x % 10 == 0) return 0;

	if(x % 5 == 0) return 1;

	return -1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long int x;
		cin >> x;

		int res = getTurns(x);
		cout << res << '\n';
	}
return 0;
}
