#include <bits/stdc++.h>
using namespace std;

int main(){

  int t;
  cin >> t;
  while(t--){
    int n,x,k;
    cin >> n >> x >> k;
    if(n == x || x == 0){
      cout << n % k <<endl;
    }
    else{
    int boys = x % k;
    int girls = (n - x) % k;

    int total_remaining = (boys + girls) % 2;

    cout << total_remaining <<endl;
    }
  }
}
