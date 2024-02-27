#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>

int fibo(int n, vector<int>dp){ // n log n solution
	if(n <= 1) return n;
	if(dp[n] != -1) return dp[n];
	return fibo(n-1,dp)+fibo(n-2,dp);
}

int fibo_tab(int n, vector<int> dp){ // n solution
	dp[0] = 0;
	dp[1] = 1;
	
	for(int i = 2; i < n+1; i++){
		dp[i] = dp[i-1] + dp[i-2];
	}
	
	return dp[n];	

}

int fibo_tab_space_optimized(int n){ // O(n) time complexity and O(1) space
	int prev2 = 0;
	int prev = 1;
	
	for(int i = 0; i < n; i++){
		int curr = prev2 + prev;
		prev2 = prev;
		prev = curr;
	}
	return prev;
}

int main(int argc, char *argv[]) {
  int t;
  // cin >> t;
  t = 1;
  while (t--) {
    // start here
	
	int n;
	cin >> n;
	vector<int> dp(n+1,-1);
	
	cout << fibo(n,dp)<<endl;
	cout << fibo_tab_space_optimized(n)<<endl;
	
  }
  return 0;
}
