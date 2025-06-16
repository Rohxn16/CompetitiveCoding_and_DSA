#include <bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
long long int arr[N];

int main(){
	long long int n,m;
	cin >>  n  >> m;

	while(m--){
		long long int a,b,d;
		cin >> a >> b >> d;

		arr[a-1] += d;
		arr[b] += -1*d;

	}

	// setting a limitter
	long long int lim = 0;
	for(long long int i = 1; i < n; i++){
		arr[i] += arr[i-1];
	}

	// now the array is ready
	long long int ans = *max_element(arr,arr+n);
	cout << ans <<endl;
}