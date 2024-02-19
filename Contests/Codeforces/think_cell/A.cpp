#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int n2 = 2 * n;
		long long res = 0;
		long long arr[n2];
		for(int i= 0; i < n2; i++){
			cin >> arr[i];
		}
		sort(arr,arr+n2);
		for(int i = 0; i < n2; i+=2){
			int a = arr[i];
			int b = arr[i+1];

			if(a > b) res += b;
			else res += a;
		}

		cout << res << endl;
	}
	return 0;
}