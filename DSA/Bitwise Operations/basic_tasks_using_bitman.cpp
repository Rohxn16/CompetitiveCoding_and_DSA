#include <bits/stdc++.h>
using namespace std;

// swap 2 numbers using bitwise
void swap(int a, int b){
	
	a = a ^ b;
	b = a ^ b; // which means b = (a ^b) ^ b, where b ^ b returns 0 thus a remains in b;
	a = a ^ b; // now b = a, therefore (a ^ b) = a ^ b ^ a which is b, thus the number is swapped
	
	cout << "a: "<<a <<" b: "<<b<<endl;
}

// check if ith bit is set or not (1 or 0)
void checkSetLS(int n, int k){
	// using left shift
	if(n & (1 << k)) cout <<"SET\n";
	else cout <<"NOT SET\n";
}

void checkSetRS(int n, int k){
	if((n >> k) & 1) cout <<"SET\n";
	else cout <<"NOT SET\n";
}

void printBinary(int num){
	for(int i = 10; i >= 0; i--){
		cout << ((num >> i) & 1);
	}
	cout << endl;
}

// setting a bit in a number
void setBit(int num, int k){
	// this can be achieved by doing OR of the number with a mask which has it's kth bit set to 1
	cout << "The original number is : ";
	printBinary(num);
	int mask = 1 << k;
	num = num | mask;
	cout << "The new integer with it's bit set is : ";
	printBinary(num);
}

void unsetBit(int num, int k){
	cout << "The original number is : ";
	printBinary(num);
	int mask = ~(1 << k);
	num = num & mask;
	cout << "The new number is : ";
	printBinary(num);
}

int main(){
//	cout << INT_MAX <<endl;
//	int a = (1LL<<32)-1;
//	cout << a <<endl;
//	unsigned int b = (1LL<<32)-1; // this returns a number instead of -1 because the integer is unsigned which means that there is no space assigned for the negative integers space
//	cout << b << endl;
	unsetBit(10,1);
} 
