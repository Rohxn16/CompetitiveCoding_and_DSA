#include <bits/stdc++.h>

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


int lcm(int a,int b){

	return (a * b)/ gcd(a,b);	

}

int main(){
// start here

int a,b;
cin >> a >> b;
int res = lcm(a,b);
cout << res <<'\n';
return 0;
}
