#include <bits/stdc++.h>
using namespace std;

int main(){
// start here
int n;
cin >> n;
while(n--){
	string s;
	cin >> s;
	int len = s.length();
	if(len > 10)
	cout << s[0] << len - 2 <<s[len-1] <<"\n";
	else cout << s<<"\n";
}
return 0;
}
