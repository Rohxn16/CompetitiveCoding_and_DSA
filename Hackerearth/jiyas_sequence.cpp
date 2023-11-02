#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long prod = 1;
		while(n--){
			int num;
			cin >> num;
			prod = prod * num;
		}
		int lsd = prod % 10;
		if(lsd == 2 || lsd == 3 || lsd == 5){
			cout << "YES\n";
		}else{
			cout <<"NO\n";
		}
	}
	return 0;
}