#include <bits/stdc++.h>
using namespace std;

int getRating(int x, int y){
	int diff = y - x;
	if(diff == 0) return 0;
	else{
		if(diff <= 8) return 1;
		else{
			if((y-x)%8 != 0){
				return ((y-x)/8) +1;
			}else{
				return (y-x)/8;
			}
		}
	}
}

int main(){
// start here
int t;
cin >> t;
while(t--){
	int x,y;
	cin >> x >> y;
	
	int res = getRating(x,y);
	cout << res <<"\n";
}
return 0;
}
