#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		string s;
		cin >> n >> k >> s;
		// B B W B W
		long long res = INT_MAX;
		vector<long long> ps(n+1,0);
		for(long long i = 0; i < n; i++){
			if(s[i] == 'W'){
				ps[i+1] = ps[i] + 1; 
			}else{
				ps[i+1] = ps[i];
			}
		}
		
		for(long long i = k; i <= n; i++){
			res = min(res,ps[i] - ps[i-k]);
		}
		
		cout << res <<endl;
		
	}
}