#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  vector<int> arr = {4,7,47,74,77,44,444,447,474,744,774,747,777,477};
  for(int i : arr){
    if(n % i == 0) {
      cout << "YES\n";
      return 0;
    }
  }
  cout <<"NO\n";
}