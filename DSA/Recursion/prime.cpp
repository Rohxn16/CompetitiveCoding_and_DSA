#include <iostream>

using namespace std;

bool primeNormal(int n){
    for(int i = n; i >= 2; i--){
        if(n % i == 0) return false;
    }
    return true;
}

bool primeCheckRecursive(int n, int i){
    if(i < 2) return true;

    if(n % i == 0) return false;

    else return primeCheckRecursive(n,--i);
}

int main(){
    primeCheckRecursive(13,12)?cout<<"13 is prime\n":cout<<"13 is not prime\n";
        primeCheckRecursive(15,14)?cout<<"15 is prime\n":cout<<"15 is not prime\n";
}