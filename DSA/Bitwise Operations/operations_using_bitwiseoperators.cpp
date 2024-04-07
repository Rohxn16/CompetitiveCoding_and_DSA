#include <bits/stdc++.h>
using namespace std;

bool isEven(int n){
	if(n & 1) return false;
	else return true;
}

// converting characters to upper and lowercase using bit manipulation
char toUpper(char c){
	return (c & '_'); // this can also be done alternatively by setting the fifth bit manually
}
char toLower(char c){
	
}

int main(){
	// common tasks using bit manipulation
	int n = 2;
	
//	bool ans = isEven(n);
//	if(ans){
//		cout << "EVEN\n";
//	}else{
//		cout << "ODD\n";
//	}
//	cout << (n & 1) <<endl;

// multiplying a number by 2^k can be done by left shifting and dividing a number by 2^k can be done by right shifting

char ch  = toUpper('a');
cout << ch << endl;
}
