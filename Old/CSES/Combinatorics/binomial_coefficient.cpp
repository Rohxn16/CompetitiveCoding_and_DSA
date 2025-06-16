#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	long long mod = 1000000007;
	long long n = 1000000;
	long long factorial[n];
	//pre process the factorials
	factorial[0] = 1;
	for(int i = 1; i < n; i++){
		factorial[i] = factorial[i-1] * i;
	}
	while(t--){
		long long a,b;
		cin >> a >> b;
		cout << ((factorial[a])/(factorial[b]*factorial[a-b])) % mod <<endl;
	}
	return 0;
}