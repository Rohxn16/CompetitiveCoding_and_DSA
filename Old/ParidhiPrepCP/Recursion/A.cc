#include <bits/stdc++.h>
using namespace std;

int fact(int n){
	if(n == 0 || n == 1) return 1;
	else return fact(n-1)*n;
}

int main(){
	int t;
	cin >> t;
	while(t--){
	// solve
	 int n;
	 cin >> n;
	 int factorial = fact(n);
	 cout << factorial <<endl;
	}
}

// things to remember : 
// 1. Number of fucntion calls
// 2. Complexity of each recursive callN