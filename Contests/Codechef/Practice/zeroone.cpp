#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;

		if(n%2 == 0){
		// logic for even number
		for(int i = 0; i < n; i++){
			if(i == 0 || i == n-1) cout << 1;
			else cout << 0;
		}
		}else{
		// logic for odd number
		for(int i = 0; i < n; i++){
			if(i%2 == 0)cout << 0;
			else cout << 1;
		}
		}
		cout <<'\n';
	}
}
