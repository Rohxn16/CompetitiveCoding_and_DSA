#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin >> t;
while(t--){
	long long int a,b;
	cin >> a >> b;

	long long int diff = abs(a - b);
	if (diff == 0) cout << diff <<endl;
	else {
		if(diff % 10 == 0) cout << diff / 10;
		else cout << (diff / 10) + 1;
		cout << endl;
	}
}
}
