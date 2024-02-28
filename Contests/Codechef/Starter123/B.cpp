#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		
		int rooms = 0;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			if(x % 2 == 0){
				rooms += x/2;
			}else{
				rooms += ((x/2) + 1);
			}
		}

		cout << rooms <<endl;
	}
}
