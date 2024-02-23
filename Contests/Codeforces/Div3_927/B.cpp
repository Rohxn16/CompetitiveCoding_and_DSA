#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int curr = 0;
		for(int i = 0; i < n; i++){
			int n;
			cin >> n;
			curr += n - curr % n;
		}
		cout << curr <<endl;
	}
}