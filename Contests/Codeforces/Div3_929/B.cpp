#include <bits/stdc++.h>
using namespace std;

int check(vector<int>&arr, int sum){
  if(sum % 3 == 0) return 0;
  else{
    // it can either be sum - a[i] or sum + 1

    if((sum + 1) % 3 == 0) return 1;

    for(int i : arr){
      if((sum - i)%3 == 0) return 1;
    }
  }
  return 2;
}

int main(int argc, char const *argv[])
{
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    int sum = 0;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
      int x;
      cin >> x;
      arr[i] = x;
      sum += x;
    }

 // stdin
    int ans = check(arr,sum);
    cout << ans <<endl;
  }
  return 0;
}