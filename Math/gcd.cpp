#include <iostream>
using namespace std;

int gcd(int a, int b){
	int max,min;
	max = (a>b)?a:b;
	min = a+b-max;
	
	while(min != 1){
		if(max%min == 0) return min;
		else{
			int d = max % min;
			max = min;
			min = d;
		}
	}
	return 1;
}

// no auxilarry space required, Time complexity : O(log(min(a,b)))

int main(){
	
	int a,b;
	cin >> a >> b;
	int res = gcd(a,b);
	cout << res <<'\n';
	return 0;
}