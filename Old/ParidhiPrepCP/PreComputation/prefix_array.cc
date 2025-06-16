#include <bits/stdc++.h>
using namespace std;
	
int N = 1e5+10;
int main(){
	int n;
	cin >> n;
	int prefix[N];
	int arr[N];
	for(int i = 1; i <= n; i++){
		cin >> arr[i];
		prefix[i] = prefix[i-1] + arr[i];
	}
	
	int q;
	cin >> q;
	while(q--){
		int l,r;
		cin >> l >> r;
		cout << prefix[r] - prefix[l-1] <<endl;
	}
}