#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int count = 0;
		
		for(char ch : s){
			if (ch == '4') count++;
		}
		
		cout << count <<'\n';
	}
}