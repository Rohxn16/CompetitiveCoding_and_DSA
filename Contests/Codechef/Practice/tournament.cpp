#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  long long int n;
  long long int arr[n];
  cin >> n;
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    arr[i] = x;
  }

  long long res = 0;
  for(int i = 0; i < n-1; i++){
    for(int j = i+1; j < n; j++){
      res = res + abs(arr[j] - arr[i]);
    }
  }
  cout << res;
  return 0;
}
