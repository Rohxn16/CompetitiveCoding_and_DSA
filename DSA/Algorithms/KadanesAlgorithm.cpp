#include <bits/stdc++.h>
using namespace std;


long long maxSubarraySumBrute(int arr[], int n){
    long long ans = arr[0];
    for(int i = 0; i < n; i++){
        int temp  = 0;
        for(int j = i; j < n; j++){
            temp += arr[j];
            ans = temp > ans? temp : ans;
        }
    }

    return ans;
}


long long maxSubarraySum(int arr[], int n){

    long long maxh = 0, maxf = arr[0];

    for(int i = 0; i < n; i++){

        maxh += arr[i];

        if(maxf < maxh) maxf= maxh;

        if(maxh < 0)
        maxh = 0;

        cout << maxf <<" ";
    }
    cout << endl;
    return maxf;
}

int main(){
    int n = 5;
    int arr[n] = {-4,-2,-1,-4, -5};
    long long ans = maxSubarraySum(arr,n);
    cout << ans << endl;
}