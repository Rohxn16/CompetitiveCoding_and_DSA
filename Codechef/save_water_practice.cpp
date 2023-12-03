#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin >> t;
	while(t--){
		int h,x,y,c;
		cin >> h >> x >> y >> c;

		int total_consumption = h * (x + (y / 2));

		if(total_consumption <= c){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
return 0;
}
