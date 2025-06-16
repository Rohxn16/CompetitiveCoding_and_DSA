#include <iostream>
using namespace std;

bool isSet(int n, int i){
	return (n & (1 << i));
}

int setithBit(int n, int i){
	return (n | (1 << i));
}

int unsetithBit(int n, int i){
	return (n & ~(1 << i));
}

int toggleithBit(int n, int i){
	return (n ^ (1 << i));
}

int main(){

}