// i interpreted it completely wrong
#include <bits/stdc++.h>
using namespace std;

int main(){
string s;
cin >> s;
if(s.length() <= 1) cout << s;
else{
	int len = s.length();
	for(int i = 0; i < len; i++){
		if(i == 0 && s[i] == '9') cout<<'9';
		else{
			if(s[i] > '4') cout << '9' - s[i];
			else cout << s[i];
		}
	}
}
return 0;
}
