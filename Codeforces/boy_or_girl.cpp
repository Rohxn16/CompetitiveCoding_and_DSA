#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cin >> str;
	int len = str.length();
	set<char> characters;
	int count = 0;
	for(int i=0; i<len; i++){
		char ch = str.at(i);
		if(characters.count(ch)==0){
			count++;
			characters.insert(ch);
		}
	}
	// cout << count;
	if(count % 2 != 0) cout << "IGNORE HIM!";
	else cout << "CHAT WITH HER!";
}