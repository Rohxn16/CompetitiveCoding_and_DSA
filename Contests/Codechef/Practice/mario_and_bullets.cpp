#include <bits/stdc++.h>
using namespace std;

int main(){
// start here
int t;
cin >> t;
while(t--){
	int x,y,z;
	cin >> x >> y >> z;

	int time = y/x;
	if(z - time <= 0){
		cout << 0 <<"\n";
	}else{
		cout <<z - time <<"\n";
	}
}
return 0;
}
