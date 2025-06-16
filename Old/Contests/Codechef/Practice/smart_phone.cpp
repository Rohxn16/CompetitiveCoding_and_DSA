#include <bits/stdc++.h>
using namespace std;

int main(){
    
    long long n;
    cin >> n;
    long long arr[n];
    for(int i = 0; i < n; i++){
    	long long x;
    	cin >> x;
    	arr[i] = x;
    }
    
    //sort the array first
    sort(arr,arr+n);
    long long max = 0;
    for(int i = 0; i < n; i++){
    	if(arr[i]*(n-i) > max){
    		max = arr[i]*(n-i);
    	}
    }
    
    cout << max <<"\n";
    
    return 0;
}
