#include <bits/stdc++.h>
using namespace std;

void toBinary(int n){
	// convert to binary using classical approach
	int bin[32] = {0};
	int counter = 0;
	
	while(n != 0){
		bin[counter] = n % 2;
		counter++;
		n = n / 2;
	}
	
	// print the number
	for(int i = counter - 1; i >= 0; i--){
		cout << bin[i];
	}
	cout <<"\n";
}

void toDecimal(string s){
	// convert to decimal using classical approach
	int len = s.length();
	int counter = 0;
	int dec = 0;
	for(int i = len -1; i >= 0; i--){
		char ch = s[i];
		int num = (int)ch - 48;
		int p = pow(2,counter);
		dec = dec + (p * num);
		counter++;
	}
	cout << dec <<endl;
}

/*
 not repeating the and or  functions as im already used to those
 
 xor -> returns 0 for even number of 1s and 1 for odd no of 1s
 x >> k means x / 2 ^ k right shift operator moves the binary of the number a place to the right 1010 >> 1 = 0101
 
 x << k means x * 2 ^ k left shift does the same but to left ....1101 << 1 = ....11010 (there can be an overflow for leftshift considering the upper limit of the data type being used
 
 ~ (NOT) operator flips the number and then checks for negative, if so converts it to the 2's complement of the number
 
 a signed bit is used for storing a number which is the 31st bit in a 32 bit integer, i.e. the last bit
 for storing a negative number 2s complement of the number is stored internally
 
 
*/

void toDecimalEnhanced(string s){
	
}

int main(){
	
} 
