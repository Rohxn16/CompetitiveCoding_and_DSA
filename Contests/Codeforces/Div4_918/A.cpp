#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int a,b,c;
		cin >> a >> b >> c;

		if(a == b) cout << c;
		else if(a == c) cout << b;
		else cout << a;

		cout <<'\n';
	}
	return 0;
}