#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <cmath>
using namespace std;

int main (int argc, char *argv[]) {
  
  int t;
  cin >> t;

  while(t--){
    int n;
    cin >> n;
    long long int arr[n];
    for(int i = 0; i < n; i++){
      cin >> arr[i];
    }
    
    sort(arr,arr+n);
    long long int res = abs(arr[n-1]-arr[0]);
    cout << res <<'\n';

  }
  return 0;
}
