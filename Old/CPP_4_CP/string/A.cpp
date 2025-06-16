#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
    int n,o,d;
    cin >> n >> o >> d;
    int min_price;
    if(n == 1) min_price = o;
    else{
    if(2*o < d){
        // then dont avail the disc
        min_price = n * o;
    }else{
        // avail the disc
        if(n % 2 == 0) min_price = (n/2)*d;
        else min_price = o + ((n-1)/2)*d;
    }    }
    cout << min_price;
    }


}