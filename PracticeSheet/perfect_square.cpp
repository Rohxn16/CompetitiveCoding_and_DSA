#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long long int n){
	// Check for perfect square using binary search
	if(n <= 1) return true;
	
	int left = 1;
	long long int right = n;
	
	while(left <= right){
		
		long long int mid = left/2 + right/2;
		long long int square = mid * mid;
		
		if(square == n) return true;
		
		else if(square > n){
			right = mid - 1;
		}
		else{
			square = mid + 1;
		}
	}
	return false;
}

int main(){
// start here
long long int n;
cin >> n;

bool res = isPerfectSquare(n);
if(res == true) cout <<"True";
else cout << "False";

return 0;
}
