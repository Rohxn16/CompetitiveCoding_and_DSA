#include <bits/stdc++.h>
using namespace std;

int main(){
// start here

int t;
cin >> t;
while(t--){
	int a,b,c;
	cin >> a >> b >> c;
	if((a+b)  % 2 != 0 || (a+c) %2 != 0 || (b+c) %2 != 0) cout << "YES\n";
	else cout <<"NO\n";
}

return 0;
}
