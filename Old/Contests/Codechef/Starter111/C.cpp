#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch){
	if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') return true;
	else return false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;

		if(s == "CODETOWN") cout << "YES\n";
		else{
			if(isVowel(s[1]) && isVowel(s[3]) && isVowel(s[5]) && !isVowel(s[0]) && !isVowel(s[2]) && !isVowel(s[4]) && !isVowel(s[6]) && !isVowel(s[7])){
					cout << "YES\n";
				}else cout << "NO\n";
		}
	}
return 0;
}
