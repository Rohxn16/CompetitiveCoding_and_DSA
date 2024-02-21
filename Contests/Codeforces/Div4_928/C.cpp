#include <bits/stdc++.h>
using namespace std;

long calc(int n){
    long sum = 0;
    if(n < 10){
        sum += n;
    }else if(n > 9 && n < 100){
        sum += (n/10 + n%10);
    }else if(n > 99 && n < 1000){
        sum += (n/100 + (n%100)/10 + (n%100)%10);
    }else if(n > 999 && n < 10000){
        sum += (n/1000 + ((n%1000)/100) + ((n%1000)%100)/10 + ((n%1000)%100)%10);
    }else if(n > 9999 && n < 100000){
        sum += (n/10000)+(()) + (n/1000 + ((n%1000)/100) + ((n%1000)%100)/10 + ((n%1000)%100)%10);
    }
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        long long sum = 0;
        for(int i = 1; i <= n; i++){
            // int num = i;
            // calc sum
            int temp_sum = calc(i);
        }
    }
    
}