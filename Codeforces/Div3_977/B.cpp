#include <bits/stdc++.h>
using namespace std;

int main(){
// start here

int n;
cin >> n;
string s;
cin >> s;
int final_count = 0;
string res;
for(int i = 0; i < n-1; i++){
	string sub = s.substr(i,2);
	int count  = 0;
	for(int j = 0; j < n-1; j++){
		string sub2 = s.substr(j,2);
		if(sub == sub2) count++;
	}
	if(count > final_count){
		final_count = count;
		res = sub;
	}
}

cout << res <<"\n";

return 0;
}
