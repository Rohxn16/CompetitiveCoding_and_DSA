#include <bits/stdc++.h>
using namespace std;

int get_winner(int l, int v1, int v2){

	int tt = l / v1;
	int rt = (l%v2 == 0)? l/v2 : (l / v2) + 1;
	
	// cout << tt << " " << rt <<endl;
	
	if((tt - rt) <= 0) return -1;
	else return tt - rt - 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int l,v1,v2;
		cin >> l >> v1 >> v2;
		int result = get_winner(l,v1,v2);
		cout << result << endl;

	}
}