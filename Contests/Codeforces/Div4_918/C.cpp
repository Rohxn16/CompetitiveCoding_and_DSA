#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long int sum = 0;
		for(int i = 0 ; i < n; i++){
			int x;
			cin >> x;
			sum += x;
		}

		long long int side = (long long int)sqrt(sum);
		if(side * side == sum) cout << "YES\n";
		else cout <<"NO\n";

	}
	return 0;
}