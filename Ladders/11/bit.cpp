#include <bits/stdc++.h>
using namespace std;

int main(){
// start here
int n;
int X = 0;
cin >> n;
while(n--){
	string s;
	cin >> s;
	if(s == "++X" || s == "X++") X++;
	else X--;
}

cout << X;
return 0;
}
