#include <bits/stdc++.h>
using namespace std;


int convert_to_bin(int n){
    int count = 0;
    while(n){
        n = n & (n-1);
        count++;
    }
    return count;
}

int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        // this is a number that is to be converted to binary

        int bin = convert_to_bin(n);
        if(bin % 2 == 0){
            cout << "EVEN\n";
        }else{
            cout << "ODD\n";
        }
    }
}