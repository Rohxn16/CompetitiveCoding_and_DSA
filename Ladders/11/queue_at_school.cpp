#include <bits/stdc++.h>
using namespace std;

int main(){
// start here

int n,t;
cin >> n >> t;
string s;
cin >> s;
// int index = 0;
while(t--){
	for(int i = 1; i < n; i++){
		
		if(s[i] == 'G' && s[i-1] == 'B' && s[i+1] == 'G'){
			swap(s[i],s[i-1]);
			i+=2;
		}
		
		else if(s[i] == 'G' && s[i-1] == 'B'){
			swap(s[i],s[i-1]);
			// index = i;
		}
		// cout << s <<endl;
	}
}

cout << s;
return 0;
}
