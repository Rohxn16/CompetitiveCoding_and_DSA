#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		string arr[3];
		cin >> arr[0] >> arr[1] >> arr[2];

		map <char,int> m;
		for(string s : arr){
			for(char ch : s){
				m[ch]++;
			}
		}

		for(auto it : m){
			if(it.second == 2) cout << it.first <<endl;
		}
	}
	return 0;
}