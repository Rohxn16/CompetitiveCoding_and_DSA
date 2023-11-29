#include <bits/stdc++.h>
using namespace std;

// Brute force approach

int binomialCoefficientBruteForce(int n, int k){
	
	if(k > n) return 0;
	if(n == k || k == 0) return 1;
	
	return binomialCoefficientBruteForce(n-1,k-1) + binomialCoefficientBruteForce(n-1,k);
}


int main(){
// start here
int n,k;
cin >> n >> k;
int res_brute = binomialCoefficientBruteForce(n,k);
cout << res_brute <<'\n';
return 0;
}
