#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		//take size
		int n;
		string s;
		cin >> n;
		cin >> s;

		long long result = 0;
		long long power = 1;
		for(int i = s.size()-1; i >= 0; --i){
			int bin = s[i] - '0'; //returns 0 or 1 by subtracting the ascii values
			result = result + (bin * power);
			power = power * 2;
		}
		cout << result <<endl;
	}
	return 0;
}