#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int min = INT_MAX;
		int sum = 0;

		int n;
		cin >> n;
		while(n--){
			int x;
			cin >> x;
			sum += x;
			if(x < min){
				min = x;
			}

		}
		cout << sum - min <<endl;
	}
return 0;
}
