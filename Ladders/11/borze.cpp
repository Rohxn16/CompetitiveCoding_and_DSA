#include <bits/stdc++.h>
using namespace std;

int main(){
// start here

string s;
cin >> s;
int len = s.length();
string res;
for(int i = 0; i < len; i++){
	if(s[i] == '-'){
		if(s[i+1] == '-') res = res + '2';
		if(s[i+1] == '.') res = res + '1';
		i+=2;
	}else if(s[i] == '.') res = res + '0';
}

cout << res;
return 0;
}
