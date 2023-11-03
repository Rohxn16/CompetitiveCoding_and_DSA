#include <bits/stdc++.h>
using namespace std;

int main(){
  long long int n,k;
  cin >> n >> k;
  long long int arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  sort(arr,arr+n);
  long long count = 0;
  for(int i = 0; i < n-1; i++){
    for(int j = i+1; j < n; j++){
      if(abs(arr[i]-arr[j]) >= k){
        count += (n-j);
        break;
      }
    }
  }

  cout << count << "\n";
}
