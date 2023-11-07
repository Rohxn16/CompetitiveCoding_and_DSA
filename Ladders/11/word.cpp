#include <bits/stdc++.h>
using namespace std;

int main(){
// start here
string s;
cin >> s;
int cap = 0;
int nocap = 0;
for(char c:s){
	int val = (int)c;
	if(val < 91) cap++;
	if(val > 96) nocap++;
}

if(nocap >= cap){
	//convert all to lowercase
	transform(s.begin(),s.end(),s.begin(), ::tolower);
}else{
	//convert all to uppercase
		transform(s.begin(),s.end(),s.begin(), ::toupper);
}

cout << s;
return 0;
}
