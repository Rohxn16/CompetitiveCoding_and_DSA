#include <bits/stdc++.h>
using namespace std;

int fact(int n){
	
	if (n == 0) return 1;
	else{
		long long int f = 1.0;
		for(int i = 1; i<= n; i++){
			f = f * i;
		}
		return f;
	}
	return -1;
}
int main(){
// start here
int n;
cin >> n;
int res = fact(n);
cout << res <<endl;
return 0;
}

// This needs more work to be done on, cannot handle factorials of a very large number