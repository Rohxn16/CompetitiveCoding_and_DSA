#include <bits/stdc++.h>
using namespace std;

int isPrime(int n){
	for(int i = 2; i < n; i++){
		if(n % i == 0) return -1;	
	}
	return 1;
}

void printPrimeFactors(int n){
	
	for(int i = 2; i <= n; i++){
		if(isPrime(i) == 1) cout << i <<" ";
	}
}

int main(){
	
	int N;
	cin >> N;
	printPrimeFactors(N);
	return 0;
}