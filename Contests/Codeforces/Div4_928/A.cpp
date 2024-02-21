#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b;
		a = 0;
		b = 0;

		string s;
		cin >> s;

		for(char ch : s){
			if (ch == 'A') a++;
			else b++;

			if(a == 3) {cout << "A\n";break;}
			if(b == 3) {cout << "B\n";break;}
		}
	}
}