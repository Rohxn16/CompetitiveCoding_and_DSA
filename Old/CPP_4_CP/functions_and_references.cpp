#include <iostream>
using namespace std;

void printHello(){
	cout << "Hello, World!" <<"\n";
}

int sum(int a, int b){
	return a+b;
}

void increment( int &n){
	//passing by reference
	n++;
}

//another example of pass by reference is the swap fucnction that comes with the stdc++.h library
void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

int main(){
	printHello();
	cout<<sum(2,3) <<"\n";
	int a = 3;
	cout << a <<endl; //prints 3
	increment(a);
	cout << a <<endl; //prints 4 as the var has been passed by reference
	
	int x = 3;
	int y = 4;
	swap(x,y);
	cout << x << " " << y << endl; //prints the numbers in reversed order

	// Note: arrays always get passed by reference even without ampersand sybol
}
