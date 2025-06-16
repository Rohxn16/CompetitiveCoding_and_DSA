#include <iostream>
using namespace std;

void setXthBit(int n, int x){
	n = n | (1 << x); // 1 << x is the mask
}

void flipXthBit(int n, int x){
	n = n ^ (1 << x) // 1011 ^ 10 => 1001 (xorring even number of 1s returns 0 and if it were unset it would be the vice versa)
}

void unsetXthBit(int n, int x){
	n = n & ~(1 << x) // here the mask is flipped as we need to & with 0, the bit that needs to be unset
}



int main(){

}
