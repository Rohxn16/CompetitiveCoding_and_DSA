#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	for(int i = 2; i <n; i++){
		if(n%i == 0) return false;
	}
	return true;
}

bool areNeighborPrimes(int a, int b){

	if(isPrime(a) == false || isPrime(b) == false) return false;

	for(int i = a+1; i < b; i++){
		if(isPrime(i) == true) return false;
	}
	return true;
}

int main(){
// start here
int n,m;
cin >> n >> m;
if(areNeighborPrimes(n,m)){
	cout << "YES\n";
}else{
	cout << "NO\n";
}
return 0;
}
