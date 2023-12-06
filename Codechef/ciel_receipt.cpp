#include <bits/stdc++.h>
using namespace std;

int getprice(int p){
	int i = 11;
	int count = 0;

	if(p == 0) return 0;
	
	while(p != 0){
		if(pow(2,i) > p) --i;
		else{
			p -= pow(2,i);
			//cout << p <<endl;
			count++;
		}
	}

	return count;
}

int main(){
	
	int t;
	cin >> t;
	while(t--){
		int p;
		cin >> p;

		int res = getprice(p);
		cout << res << endl;
	}

return 0;

}
