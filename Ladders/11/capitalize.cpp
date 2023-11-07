#include <bits/stdc++.h>
using namespace std;

int main(){
// start here
string s;
cin >> s;
if((int)s[0] > 96){
	transform(s.begin(),s.begin()+1,s.begin(),::toupper);
}
cout << s;
return 0;
}