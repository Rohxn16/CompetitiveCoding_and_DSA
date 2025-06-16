#include <bits/stdc++.h>
using namespace std;

int main(){
	
	long long int n,ans = 0;
	cin >> n;
	long long int values[n];
	
	for(long long int i = 0; i < n; i++){
		cin >> values[i];
	}
	
	for(long long int i = 1; i < n; i++){
		if(values[i] < values[i-1]){
			ans += values[i-1] - values[i];
			values[i] = values[i-1];
		}
	}
	
	cout << ans <<'\n';
	return 0;
}