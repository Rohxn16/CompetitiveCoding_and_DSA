#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;

int main(){
  int factorials[N];
  factorials[0] = 1;
  for(int i = 1; i < N; i++){
    factorials[i] = factorials[i-1]*i;
  }
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    cout << factorials[n] <<endl;
  }
}