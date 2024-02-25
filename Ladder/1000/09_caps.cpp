#include <bits/stdc++.h>
using namespace std;

void check(string &s){
	int caps,lows,n;
	n = s.size();
	caps = 0;
	lows = 0;
	
	for(char ch : s){
		if(islower(ch))lows++;
		else caps++;
	}
	
	// if only the first letter is not caps
	if(lows == 1 && islower(s[0])){
		string res = "";
		for(int i = 0; i < n; i++){
			if(islower(s[i])){
				char ch = toupper(s[i]);
				res += ch;
			}else{
				char ch = tolower(s[i]);
				res += ch;
			}
		}
		cout << res;
	}
	// if everything is caps
	else if(caps == n){
		transform(s.begin(), s.end(), s.begin(), :: tolower);
		cout << s;
	}
	//else
	else{
		cout << s;
	}
}

int main(){
	
	string s;
	cin >> s;
	
	check(s);
}