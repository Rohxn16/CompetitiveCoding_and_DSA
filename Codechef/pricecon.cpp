#include <bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int sum = 0;
		int sum_augmented = 0;
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			sum += x;
			if(x > k){
				sum_augmented += k;
			}else{
				sum_augmented += x;
			}
		}

		cout << sum - sum_augmented <<'\n';
	}
	return 0;
}
