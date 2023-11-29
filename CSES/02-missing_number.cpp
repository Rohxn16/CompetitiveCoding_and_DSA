#include <bits/stdc++.h>
using namespace std;

int getsum(int n){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		sum += i;
	}
	return sum;
}

int main(){
// start here
int n;
cin >> n;

int sum = getsum(n);

for(int i = 1; i < n; i++){
	int x;
	cin >> x;
	
	sum = sum - x;	
}

cout << sum;

return 0;
}
