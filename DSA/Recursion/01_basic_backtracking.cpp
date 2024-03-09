#include <bits/stdc++.h>
using namespace std;

//PRINT IN LINEARLY DECREASING ORDER FROM 1 TO n USING BACKTRACKING
void printBack(int n, int i){ // n is the number and i is the iteration counter
	if(i < 1) return;
	cout << i <<endl;
	printBack(n,i-1);
}

//PRINT IN LINEARLY INCREASING ORDER FROM 1 TO n USING BACKTRACKING
void printFront(int n, int i){
	if(i > n) return;
	cout << i <<endl;
	printFront(n,i+1);
}

//print the sum of the first n numbers
// this is an example of parameterised recursion
void printSum(int i, int sum){
	if(i < 1) {
		cout << sum <<endl;
		// return;
	}
	else {
		sum += i;
		printSum(--i,sum);
	}
}

// functional recursion
int anotherSum(int n){ 
	if(n == 0)return 0;
	else{
		return n + anotherSum(n-1); // this line basically breaks the problem into smaller ones until a base case is reached
	}

}
int main(){
	// printFront(5,1);
	// printBack(5,5);
	// printSum(5,0);
	int sum = anotherSum(5);
	cout << sum <<endl;
	return 0;
}