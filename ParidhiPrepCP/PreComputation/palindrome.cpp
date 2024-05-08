#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int n){
	for(int i = 0; i < n; i++){
		if(s[i] == s[n-i-1]) continue;
		else return false;
	}
	return true;
}



int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int n,q;
		cin >> n >> q;
		string s;
		cin >> s;
		while(q--){
			int l,r;
			cin >> l >> r;
			l--;r--;

			int hash[26];
			for(int i =0; i < 26; i++){
				hash[i] = 0;
			}

			for(int i = l; i <= r; i++){
				hash[s[i]-'a']++;
			}

			int oddct = 0;
			for(int i = 0; i < 26; i++){
				if(hash[i] % 2 == 0) oddct++;
			}

			if(oddct > 1) cout << "NO\n";
			else cout <<"YES\n";

		}
	}
	return 0;
}