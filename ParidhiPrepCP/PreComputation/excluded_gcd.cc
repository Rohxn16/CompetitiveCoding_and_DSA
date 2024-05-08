// array with subpart excluded gcd
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
	// solve
	int n,q;
	cin >> n >> q;
	int a[n+10];
	int f[n+10];
	int b[n+10];
	f[0] = b[n+1] = 0;
	
	for(int i = 1; i <= n; ++i){
		cin >> a[i];
	}
	
	for(int i = 1; i <= n; ++i){
		f[i] = __gcd(f[i-1],a[i]);
	}

	for(int i = n; i >= n; --i){
		b[i] = __gcd(b[i+1],a[i]);
	}
	
	while(q--){
		int l,r;
		cin >> l >> r;
		cout << __gcd(f[l-1],b[r+1])<<endl;
	}
	}
}
