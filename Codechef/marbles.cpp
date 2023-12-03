#include <bits/stdc++.h>
using namespace std;

//function to calculate combination of n and k
long long int C(long long int n, long long int k){
	long long int ans = 1;
	k = min(k,n-k);
	for(int i = 1; i <= k; i++){
		ans *= (n-i+1);
		ans /= i;
	}

	return ans;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long int k,n;
		cin >> n >> k;

		long long int extra = n-k;
		cout << C(extra+k-1,extra)<<'\n';				

	}
return 0;
}
