#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long int arr[100005];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		// stdin complete

		int ans = arr[n] + arr[0];
		for(int i = 1; i < n; i++){
			if(arr[n-i] + arr[n-i-1] > ans){
						ans = arr[n-i] + arr[n-i-1];
			}
		}

		cout << ans <<'\n';
	}
return 0;
}
